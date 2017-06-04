/*
 * Universidade de Bras�lia
 * Departamento de Ci�ncia da Computa��o
 * Teoria e Aplica��es de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * G�ssica Neves Sodr� da Silva - 110146115

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
