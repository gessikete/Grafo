/*
 * Universidade de Bras�lia
 * Departamento de Ci�ncia da Computa��o
 * Teoria e Aplica��es de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * G�ssica Neves Sodr� da Silva - 110146115

 Arquivo: fila.h
                
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
