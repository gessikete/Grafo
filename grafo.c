/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges

 Arquivo: grafo.c
 
Funcao deste programa: Implementacao de um grafo utilizando representacao de lista de adjacencia
Como compilar:
                gcc *.c -o busca
Para executar:
                ./busca < g1.in
                
*/

#include "grafo.h"

Grafo *
Grafo_cria (int nVertices)
{
    int i;

    Grafo *g;
    g = malloc(sizeof(Grafo));
    g->nroVertices = nVertices;
    g->Adj = malloc(sizeof(No)*nVertices);
    for(i = 0; i < g->nroVertices;i++)
    {
	g->Adj[i] = NULL;
    }
    return g;
}

int
Grafo_insereAresta(Grafo *g, No no_u, No no_v)
{
    No aux;
    
    if(g == NULL)
      return 0;
    
    if(no_u->chave==no_v->chave)
      return 0;
    
    if(g->Adj[no_u->chave] == NULL)
    {
	g->Adj[no_u->chave] = no_v;
    }
    else
    {
	aux = g->Adj[no_u->chave];
	if(aux->chave > no_v->chave)
	{
	    no_v->prox = aux;
	    g->Adj[no_u->chave] = no_v;
	}
	while(aux->prox != NULL && no_v->chave > aux->chave)
	{
	    aux=aux->prox;
	}
	no_v->prox = aux->prox;
	aux->prox = no_v;	
    }
    
    if(g->Adj[no_v->chave] == NULL)
    {
	g->Adj[no_v->chave] = no_u;
    }
    else
    {
	aux = g->Adj[no_v->chave];
	if(aux->chave > no_u->chave)
	{
	    no_u->prox = aux;
	    g->Adj[no_v->chave] = no_u;
	}
	else
	{
	    while(aux->prox != NULL && no_u->chave < aux->chave)
	    {
		aux=aux->prox;
	    }
	    no_u->prox = aux->prox;
	    aux->prox = no_u;
	}
		
    }
    return 1;
}

/*
 * Funcao que imprime um Grafo na representacao de Listas de Adjacencias
 */
void
imprimeGrafo(Grafo *g)
{
    int i;
    No aux;
    
    // Se o Grafo existe
    if(g!=NULL)
    {
	for(i = 0; i < g->nroVertices; i++)
	{
	    printf("%d || ",i+1);
	    aux = g->Adj[i];
	    while(aux->prox != NULL)
	    {
		printf("%d(%.2f) => ",aux->chave+1,aux->w);
		aux=aux->prox;
	    }
	    printf("%d(%.2f).",aux->chave+1,aux->w);
	    printf("\n");
	}
    }
}


/*
 * Funcao que realiza a busca em largura em um grafo
 */

void buscaEmLargura(Grafo *g, No no_s){
    int v;
    int count = 0;
    
    if(g!=NULL){
	for(v = 0; v < g->nroVertices; v++)
	    antecessor[] = -1;
	antecessor[no_s]
	
    }
}
