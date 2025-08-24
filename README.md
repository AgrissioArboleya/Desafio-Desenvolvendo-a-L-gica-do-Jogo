# Desafio-Desenvolvendo-a-L-gica-do-Jogo
Projeto do desafio Tema 3 ("Mestre)

Este programa em C simula um jogo de Super Trunfo, comparando atributos entre dois países: Brasil e China.

Funcionalidades
Menu interativo com opções:  
    1. Jogar  
    2. Visualizar Regras  
3.Sair do jogo  

Regras:
Cada jogador escolhe 2 atributos de seu país.  
Os atributos comparados são:  
Área  
População  
PIB  
Pontos Turísticos  
Densidade Demográfica (menor valor vence)  
  
Cada atributo é comparado individualmente, e depois é feita a soma dos dois atributos.  
O único caso de empate é na soma final.  

O programa exibe:  
Resultados das comparações de cada atributo.  
Soma dos atributos.  
Resultado final (Brasil, China ou Empate).  
Detalhes dos atributos usados.  

Como usar  
Compile o código:  

gcc super_trunfo.c -o super_trunfo

Execute o programa:  

./super_trunfo  

Siga as instruções no console para escolher o país e os atributos.  
  
Observações  
O programa verifica entradas inválidas e solicita reinício se necessário.  
Para densidade demográfica, o menor valor vence.  
Empate só ocorre na soma final dos atributos.  
