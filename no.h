/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * Géssica Neves Sodré da Silva - 110146115

 Arquivo: no.h
                
*/

#include <stdio.h>
#include <stdlib.h>

// Nao remover nunca essas guards!!!
#ifndef _NOH_
#define _NOH_

typedef struct no
{
    int chave;
    float w;
    struct no *prox;
} *No;

No No_cria(int chave, float peso);

// Nao remover as guards
#endif

