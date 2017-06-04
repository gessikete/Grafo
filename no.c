/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * Géssica Neves Sodré da Silva - 110146115

 Arquivo: no.c
                
*/

#include "no.h"

No No_cria(int chave, float peso)
{
    No novo;

    novo = malloc(sizeof(No));
    novo->chave = chave;
    novo->w = peso;
    novo->prox = NULL;
    return novo;
}
