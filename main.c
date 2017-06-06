/*
 * Universidade de Bras�lia
 * Departamento de Ci�ncia da Computa��o
 * Teoria e Aplica��es de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * G�ssica Neves Sodr� da Silva - 110146115

 Arquivo: main.c
 
Funcao deste programa: Implementacao de um grafo utilizando representacao de lista de adjacencia
Como compilar:
                gcc *.c -o busca
Para executar:
                ./busca < g1.in
                
*/

#include <stdio.h>
#include <stdlib.h>
#include "busca.h"


int main()
{
    int i,j,r,nroVertices,eh_digrafo = true, grau;
    float aresta;
    Grafo *g = NULL;
    No no_u,no_v, aux_u, aux_v;

    // Leitura I/O padrao do numero de vertices do Grafo G
    scanf("%d\n",&nroVertices);
    g = Grafo_cria (nroVertices);    
    
    // Como a matriz eh simetrica, 
    for(i = 0; i < nroVertices;i++)
    {
    	grau = 0;
        for(j = 0; j < nroVertices;j++)
    	{
    	    scanf("%f",&aresta);
    	    //if(aresta > 0.0 && i < j)
    	    if(aresta != 0.0)
            {
        		grau++;
                no_u = No_cria(i,aresta);
        		no_v = No_cria(j,aresta);
        		
                r = Grafo_insereAresta(g,no_u,no_v,eh_digrafo);
        		if(!r)
        		{
        		    fprintf(stderr,"ERRO ao inserir aresta!\n");
        		}        		
    	    }
    	}
    	scanf("\n");
        g->grau[i] = grau;
    }
    
    /* Como usar as funcoes da fila
     * 
    novo = No_cria(4,0.5);
    r=Fila_enfileira(&Q,novo);
    des=Fila_desenfileira(&Q);
    Fila_imprime(Q);
    free(Q);  
    */
   
    //bfs(g, 0);
    
    //dijkstra(g,0);
    
    //printf(bellmanFord(g, 0) ? "O grafo contem ciclo de peso negativo\n" : "O grafo nao contem ciclo de peso negativo\n");
    
    //for(i = 0; i < g->nroVertices; i++)
    //{
    //    printf("%.2f ", g->distancia[i]);
    //}
    //printf("\n");
    
    imprimeGrafo(g);
    
    // Libera o espaco em memoria
    free(g->Adj);
    free(g->distancia);
    free(g->pi);
    free(g->grau);
    free(g);
    free(no_u);
    free(no_v);
    
    // Indica ao SO que a execucao deste programa foi bem-sucedida
    return 0;
}