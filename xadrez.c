#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Repositório oficial: https://github.com/Cursos-TI/desafio-xadrez-cristianojcruzzz

void moveBishop(int diagonalSteps)
{
    if (diagonalSteps == 0)
        return;

    moveBishop(diagonalSteps - 1);

    printf("%d. Cima\n", diagonalSteps);
    printf("%d. Direita\n", diagonalSteps);
}

void moveTower(int rightSteps)
{
    if (rightSteps == 0)
        return;

    moveTower(rightSteps - 1);

    printf("%d. Direita\n", rightSteps);
}

void moveQueen(int leftSteps)
{
    if (leftSteps == 0)
        return;

    moveQueen(leftSteps - 1);

    printf("%d. Esquerda\n", leftSteps);
}

void moveKnight(int up, int right)
{
    int rightSteps = 1;

    while (rightSteps <= right)
    {
        for (int i = 1; i <= up; i++)
        {
            printf("%d. Cima\n", i);
        }

        printf("%d. Direita\n", rightSteps);

        rightSteps++;
    }
}

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bishop = 5;
    int tower = 5;
    int queen = 8;
    int knightUp = 2, knightRight = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentando o Bispo: \n");
    moveBishop(bishop);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Movimentando a Torre: \n");
    moveTower(tower);
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentando a Rainha: \n");
    moveQueen(queen);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("Movimentando o Cavalo: \n");
    moveKnight(knightUp, knightRight);
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
