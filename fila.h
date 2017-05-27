/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges

 Arquivo: fila.h
 
Funcao deste programa: Implementacao de um grafo utilizando representacao de lista de adjacencia
Como compilar:
                gcc *.c -o busca
Para executar:
                ./busca < g1.in
                
*/

#include <stdio.h>
#include <stdlib.h>

// Nao remover nunca estas guards!!!
#ifndef _FILAH_
#define _FILAH_

#include "no.h"

void Fila_cria(No *f);

//int Fila_enfileira(No *f, int chave, double peso);
int Fila_enfileira(No *f, No novo);

No Fila_desenfileira(No *f);

void Fila_imprime(No f);

// Nao remover estas guards!!!
#endif
