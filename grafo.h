/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * Géssica Neves Sodré da Silva - 110146115

 Arquivo: grafo.h
                
*/

#include <stdio.h>
#include <stdlib.h>
#include "no.h"

typedef struct vertices_head
{
  int nroVertices;
  No *Adj;
} Grafo;

Grafo * Grafo_cria (int number_of_vertices);

int Grafo_insereAresta(Grafo *g, No no_u, No no_v, int eh_digrafo);

void imprimeGrafo(Grafo *g);
