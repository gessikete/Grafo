# Grafo

Implementação de uma estrutura de grafo em C e algumas funções de busca.

## Compilação e Execução

1. Como compilar:
```gcc *.c -o busca```

2. Para executar:
```./busca < grafo.in```

## Progresso

1. Implementar algoritmo de busca em largura e Dijsktra

2. Implementar algoritmo Bellman-Ford 
    - Atualizar a estrutura de dados, se necessário para gerar grafos orientados;
    - Elaborar casos de testes:
      * Um grafo G1 com ciclo de peso negativo
      * Um grafo G2 sem ciclo de peso negativo
    - Verificar nos testes se a ordem de verificação das arestas é importante!!!
    - A entrada do algoritmo de Bellman-Ford é o grafo G e um vertice de origem S (começar a análise de arestas desse vértice)

	**Obs.:**
	- a chave representa o nó adjacente ao vértice ligado ao nó corrente
    - bfs: o algoritmo enfileira o nó que ele está percorrendo;
	- desinfeleira primeiro e depois enfileira os nós adjacentes
	- pra enfileirar cria um novo nó com peso zero

3. Implementar o problema [106 miles to chicago](https://www.urionlinejudge.com.br/judge/en/problems/view/1655) utilizando o algoritmo Floyd-Warshall

## TODO

1. Argumentos para escolher o tipo de busca e o vértice inicial

2. Arrumar Bellman-Ford

3. Função para imprimir as estruturas com as respostas

4. Corrigir arrays de distancia e antecessor para ser uma matriz.
