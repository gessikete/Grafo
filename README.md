# Grafo
Implementação de uma estrutura de grafo em C e algumas funções de busca.

1) 
    - Implementar algoritmo de busca em largura e Dijsktra;

2)  
    - Atualizar a estrutura de dados, se necessário para gerar grafos orientados;
    - Elaborar casos de testes:
      * Um grafo G1 com ciclo de peso negativo
      * Um grafo G2 sem ciclo de peso negativo
    - Verificar nos testes se a ordem de verificação das arestas é importante!!!
    - A entrada do algoritmo de Bellman-Ford é o grafo G e um vertice de origem S (começar a análise de arestas desse vértice)

Obs.: a chave representa o nó adjacente ao vértice ligado ao nó corrente
      bfs: o algoritmo enfileira o nó que ele está percorrendo;
	   desinfeleira primeiro e depois enfileira os nós adjacentes
	   pra enfileirar cria um novo nó com peso zero