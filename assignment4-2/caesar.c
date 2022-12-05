#include "caesar.h"

/**
 * Codifica le informazioni in chiaro presenti in messages con la chiave key
 * @param messages [in/out] array contenente i messaggi da codificare
 * @param size [in] dimensione dell'array da codificare
 * @param key [in] chiave di codifica per il cifrario di Cesare
**/
void encode(struct cypher messages[], unsigned int size, int key) {

}

/**
 * Decodifica le informazioni codificate in messages con la chiave key per rendere in chiaro
 * @param messages [in/out] array contenente i messaggi da decodificare
 * @param size [in] dimensione dell'array da decodificare
 * @param key [in] chiave di decodifica per il cifrario di Cesare
**/
void decode(struct cypher messages[], unsigned int size, int key) {

}

/**
 * Calcola la chiave di codifica per il cifrario di Cesare dato un messaggio 
 * contenente sia codifica che decodifica
 * @param message [in] messaggio di cui si conoscono sia codifica che decodifica
 *
 * @return chiave di codifica per il cifrario di Cesare 
 * se è necessario gestire errori, ritornare 0
**/
int get_key(struct cypher message) {

}

/**
 * Calcola la chiave di codifica per il cifrario di Cesare dato un array di messaggi
 * @param messages [in] array di messaggi in cui cercare la chiave di codifica
 * @param size [in] dimensione dell'array di messaggi
 *
 * @return chiave di codifica per il cifrario di Cesare 
 * se non ci sono messaggi contenenti sia codifica che decodifica, ritorna 0
**/
int find_key(struct cypher messages[], unsigned int size) {

}

/**
 * Verifica un array di messaggi per codificarlo o decodificarlo
 * @param messages [in/out] array di messaggi in cui cercare la chiave di codifica
 * @param size [in] dimensione dell'array di messaggi
**/
void check_messages(struct cypher messages[], unsigned int size) {
    int key = find_key(messages, size);
    if (key == 0)  {
        key = ask_key(size);
        encode(messages, size, key);
    } else {
        decode(messages, size, key);
    }
}
