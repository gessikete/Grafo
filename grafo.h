/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
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

static int antecessor[1000]

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
buscaEmLargura(Grafo *g, No no_s);
