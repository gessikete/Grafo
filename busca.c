/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * Géssica Neves Sodré da Silva - 110146115

 Arquivo: busca.c
                
*/

#include "busca.h"

/*
 * Funcao que realiza a busca em largura em um grafo
 * 
 * Dado um grafo G e um vértice de origem s, o processo de
 * busca em largura consiste em explorar sistematicamente as
 * arestas de G até descobrir cada vértice acessı́vel a partir 
 * de s.
 * 
 */
void bfs(Grafo *g, int s)
{ 
	int i, r;
    int cor[g->nroVertices]; // marca a visitação dos vértices
    No Q = NULL, u = NULL, v = NULL;

    for(i = 0; i < g->nroVertices; i++)
    {
    	cor[i] = BRANCO;
    	g->distancia[i] = MAIS_INFINITO;
    	g->pi[i] = -1;
    }

    cor[s] = CINZA;
    g->distancia[s] = 0.0;
    g->pi[s] = 0;
    // cria um nó para o primeiro vértice e o enfileira
    r = Fila_enfileira(&Q, No_cria(s, 0.0));

    while(Q != NULL)
    {
    	u = Fila_desenfileira(&Q);
    	v = g->Adj[u->chave];

	   	while(v != NULL)
	  	{
			if(cor[v->chave] == BRANCO)
			{
				cor[v->chave] = CINZA;
				g->distancia[v->chave] = g->distancia[u->chave] + 1.0;
				g->pi[v->chave] = u->chave;
				r = Fila_enfileira(&Q, No_cria(v->chave, 0.0));
			}
			v = v->prox;
	  	}
		cor[u->chave] = PRETO;
    }
}

/*
 * Funcao que identifica o caminho mínimo de um vértice inicial
 * a qualquer um dos vértices do grafo
 *
 * O algoritmo de Dijkstra recebe um grafo orientado (G, w)
 * (sem arestas de peso negativo) e um vértice s de G e retorna:
 *     - Para cada v ∈ V [G], o peso de um caminho mı́nimo de s a v
 *     - Uma árvore de caminhos mı́nimos com raiz s
 * 
 */
void dijkstra(Grafo *g, int s)
{
    int i, r;
    No Q = NULL, u = NULL, v = NULL;

    for(i = 0; i < g->nroVertices; i++)
    {
        g->distancia[i] = MAIS_INFINITO;
        g->pi[i] = -1;
        r = Fila_enfileira(&Q, No_cria(i, 0.0));
    }

    g->distancia[s] = 0.0;

    for(i = 0; i < g->nroVertices; i++)
    {
        u = Fila_desenfileira(&Q);

        v = g->Adj[u->chave];

        while(v != NULL)
        {
            if(g->distancia[v->chave] > (g->distancia[u->chave] + v->w))
            {
                g->distancia[v->chave] = g->distancia[u->chave] + v->w;
                g->pi[v->chave] = u->chave;
            }
            v = v->prox;
        }
    }
}

/*
 * Resolve o problema de caminhos mais curtos de única
 * origem em que arestas possuem pesos negativos.
 * 
 * O algoritmo recebe um grafo orientado (G, w) que pode ter
 * arestas de pesos negativos, e um vértice de origem s, que retorna:
 *     - FALSO, se existe um ciclo negativo atingı́vel a partir de s
 *     - VERDADEIRO, em que se obtém uma árvore de caminhos
 *     mı́nimos com raı́z em s
 */
bool bellmanFord(Grafo *g, int s)
{
    int i, j, r, verticeNegativo;
    No u = NULL, v = NULL, Q = NULL;
    // Inicialização
    for(i = 0; i <= g->nroVertices; ++i)
    {
        g->distancia[i] = MAIS_INFINITO;
        g->pi[i] = -1;
        r = Fila_enfileira(&Q, No_cria(i, 0.0));
    }
    // definindo distando para o source = 0
    g->distancia[s] = 0;
    g->pi[s] = 0;

    // Relaxamento
    // percorre os vértices
    for(i = 1; i < g->nroVertices; i++)
    {
        u = Fila_desenfileira(&Q);

        v = g->Adj[u->chave];

        while(v != NULL)
        {
            if(g->distancia[v->chave] > (g->distancia[u->chave] + v->w))
            {
                g->distancia[v->chave] = g->distancia[u->chave] + v->w;
                g->pi[v->chave] = u->chave;
            }
            v = v->prox;
        }
    }

    // Checa por ciclos negativos
    for(i = 0; i < g->nroVertices; i++)
    {
        j = 0;
        u = g->Adj[i];

        while(u != NULL)
        {
            if(g->distancia[u->chave] > (u->w + g->distancia[j]))
            {
                // Ciclo negativo encontrado
                verticeNegativo = j;
                return true;
            }

            u = u->prox;
        }
    }

    return false;
}

/*
 * 
 */

