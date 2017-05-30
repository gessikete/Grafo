/*
 * Universidade de Bras�lia
 * Departamento de Ci�ncia da Computa��o
 * Teoria e Aplica��es de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges

 Arquivo: grafo.h
 
Funcao deste programa: Implementacao de um grafo utilizando representacao de lista de adjacencia
Como compilar:
                gcc *.c -o busca
Para executar:
                ./busca < g1.in
                
*/

#include <stdio.h>
#include <stdlib.h>
#include "no.h"

#define MAIS_INFINITO 999
#define MENOS_INFINITO -999

enum cores {BRANCO, CINZA, PRETO};

typedef struct vertices_head
{
  int nroVertices;
  No *Adj;
} Grafo;

Grafo *
Grafo_cria (int number_of_vertices);

int
Grafo_insereAresta(Grafo *g, No no_u, No no_v);

void
imprimeGrafo(Grafo *g);

void
bfs(Grafo *g, int no_s);
