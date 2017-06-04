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
 */

void bfs(Grafo *g, int s){ 
	int NV = g->nroVertices;
	int i, r, d[NV];
    int cor[NV]; // marca a visitação dos vértices
    No Q = NULL, u = NULL, aux = NULL, pi[NV];

    for(i = 0; i < NV; i++)
    {
    	cor[i] = BRANCO;
    	d[i] = MAIS_INFINITO;
    	pi[i] = NULL;
    }

    cor[s] = CINZA;
    d[s] = 0;
    pi[s] = NULL;
    // cria um nó para o primeiro vértice e o enfileira
    r = Fila_enfileira(&Q, No_cria(s, 0.0));

    while(Q != NULL)
    {
    	Fila_imprime(Q);
    	printf("\n");
    	u = Fila_desenfileira(&Q);
    	aux = g->Adj[u->chave];

	   	while(aux != NULL)
	  	{
			if(cor[aux->chave] == BRANCO)
			{
				cor[aux->chave] = CINZA;
				d[aux->chave] = d[u->chave] + 1;
				pi[aux->chave] = u;
				r = Fila_enfileira(&Q, No_cria(aux->chave, 0.0));
			}
			aux = aux->prox;
	  	}
		cor[u->chave] = PRETO;
    }
}