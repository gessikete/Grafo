/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * Géssica Neves Sodré da Silva - 110146115

 Arquivo: busca.h
                
*/

#include <stdio.h>
#include <stdlib.h>
#include "no.h"
#include "fila.h"
#include "grafo.h"

#define MAIS_INFINITO 999.0
#define MENOS_INFINITO -999.0

enum cores {BRANCO, CINZA, PRETO};

typedef int bool;
enum bool {true, false};

void bfs(Grafo *g, int s);

void dijkstra(Grafo *g, int s);

bool bellmanFord(Grafo *g, int s);
