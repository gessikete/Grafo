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

#define MAIS_INFINITO 999
#define MENOS_INFINITO -999

enum cores {BRANCO, CINZA, PRETO};

void bfs(Grafo *g, int no_s);
