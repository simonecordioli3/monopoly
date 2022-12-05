#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Pedine che rappresentano i giocatori sulla plancia di gioco
typedef enum alterego {
    CAR = 0,
    SCOTTISH_TERRIER,
    HAT,
    IRON,
    BATTLESHIP,
    PENGUIN,
    THIMBLE,
    RUBBER_DUCKY,
    LAST_TOKEN,
} alterego;

// Struttura relativa ad un personaggio in gioco
struct figure
{
    alterego token;
    char name[20];
    int money;
    int houses;
    int hotels;
    bool jail;
};

// Stampa il puntenggio a partire da token, nome e denaro di un giocatore
void print_score(alterego token, char name[], int money);

// Stampa le informazioni del giocatore in input e lo dichiara vincitore
void print_winner(struct figure player);