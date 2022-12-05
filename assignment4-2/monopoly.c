#include "monopoly.h"

/**
 * Restituisce la pedina corrispondente al carattere in input
 * @param c[in] lettera iniziale della pedina (maiuscola o minuscola)
 * @return pedina il cui nome inizia per il carattere richiesto 
 * supporre che la lettera abbia sempre una pedina corrispondente
**/
alterego get_turn(char c){
    return 0; /* se neccessario, sostituire con la variabile corretta */
}

/**
 * Restituisce la cifra da pagare se il giocatore è in debito
 * @param houses[in] numero di case in possesso del giocatore
 * @param hotels[in] numero di alberghi in possesso del giocatore
 * @return cifra da rimuovere dal conto del giocatore
 * corrisponde a 2 volte il numero di case - il numero di alberghi
**/
int neg_score(int houses, int hotels) {
    return 0; /* se neccessario, sostituire con la variabile corretta */
}

/**
 * Restituisce la cifra se il giocatore deve riscuotere un credito
 * @param houses[in] numero di case in possesso del giocatore
 * @param hotels[in] numero di alberghi in possesso del giocatore
 * @return cifra da aggiungere al conto del giocatore
 * corrisponde a 2 volte il numero di alberghi + il numero di case
**/
int pos_score(int houses, int hotels) {
    return 0; /* se neccessario, sostituire con la variabile corretta */
}

/**
 * Gestisce i turni di gioco e al termine stampa il vincitore
 * @param players[in] array di informazioni sui giocatori
 * @param game[in] stringa che descrive i  turni di gioco
 * ogni carattere rappresenta il turno di un giocatore
 * se il giocatore ha guadagnato denaro, la lettera sarà minuscola
 * se il giocatore ha perso denaro, la lettera sarà maiuscola
 * la prima lettera della sequenza è sempre minuscola
 * ad ogni turno mostrare il giocatore con il capitale più elevato:
 * la sua pedina, il siuo nome, il suo capitale attuale
 * concluso il gioco mostrare il vincitore
**/
void game_evolution(struct figure players[], char game[]) {
    
}
