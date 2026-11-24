/*
 * Estrutura usada pra representar o problema, 
 * index: é o índice, nome do hub
 * conection: a lista de hubs os quais se conecta
 * active: indica se é um hub ativo ou não
 */
#ifndef HUB
#define HUB

typedef struct hub{
    bool active;
    int index;
    int* conection;
} hub;

#endif