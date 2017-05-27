/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges

 Arquivo: no.c
 
Funcao deste programa: Implementacao de um grafo utilizando representacao de lista de adjacencia
Como compilar:
                gcc *.c -o busca
Para executar:
                ./busca < g1.in
                
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
