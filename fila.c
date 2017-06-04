/*
 * Universidade de Brasília
 * Departamento de Ciência da Computação
 * Teoria e Aplicações de Grafos
 * Prof. Dr. Vinicius Ruela Pereira Borges
 * Géssica Neves Sodré da Silva - 110146115

 Arquivo: fila.c
                
*/

#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

void Fila_cria(No *f)
{
    f = NULL;
}

int Fila_enfileira(No *f,  No novo)
{
    No atual;
    
    if(*f == NULL)
    {
    	*f = novo;
    	return 0;
    }
    else
    {
    	atual = *f;
    	while(atual->prox != NULL)
    	    atual = atual->prox;
    	atual->prox = novo;
    }
    return 1;
}

No Fila_desenfileira(No *f)
{
    No aux;
    if(f == NULL)
      return 0;
    else
    {
    	aux = *f;
    	(*f) = (*f)->prox;
    	return aux;
    }
}

void Fila_imprime(No f)
{
    No atual;
    atual = f;
    
    if(atual!=NULL)
    {
    	printf("Q = ");
    	while(atual->prox!=NULL)
    	{
    	    printf("%d => ",atual->chave+1);
    	    atual=atual->prox;
    	}
    	printf("%d.",atual->chave+1);
    }
    else
    {
	   printf("Fila vazia.\n");
    }
}
