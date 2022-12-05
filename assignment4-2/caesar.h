#include <stdio.h>

// Numero di chiavi presenti nell'alfabeto del cifrario di Cesare
#define NUM_KEYS 26
#define MAX_LEN 50

// Struttura di un messaggio da cifrare/decifrare
struct cypher
{
    char encrypted[MAX_LEN];
    char decrypted[MAX_LEN];
};

// Restituisce una chiave di cifratura valida per il cifrario di Cesare
int ask_key(int size);