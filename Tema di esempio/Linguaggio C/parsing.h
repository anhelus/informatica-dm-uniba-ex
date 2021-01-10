#ifndef PARSING_H
#define PARSING_H

// Rimuove il carattere to_strip dalla stringa input
void strstrp(char input[], char str_out[], char to_strip, int length);
// Funzione per convertire una stringa in un array di interi
int string_to_int_array(char string[], int buffer[]);

#endif // !PARSING_H
