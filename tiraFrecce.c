#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(int argc, char *argv[])
{
  time_t start, stop;
  srand((unsigned)time(NULL));
  int n = 1000000000; //Numero di frecce da tirare
  
  double totTiri = 0.0; //Totale dei lanci per tutte le iterazioni
  start = time(NULL); //Inizializzazione variabile temporale in secondi
  for(int i=0; i < n; i++){ //Inizio lancio frecce definite da n
      double punti = 0.0; //Inizializzazione punti
      double tiri = 0.0; //Lanci per ogni iterazione
     
      while (punti < 1){ //Esecuzione fino a quando la somma dei punti è inferiore a 1
            tiri = tiri + 1; //somma dei tiri per ogni lancio
            punti +=  ((double)rand()/(double)RAND_MAX); //Punteggio casuale per ogni lancio
            }
      totTiri = totTiri + tiri; //Aggiunta dei lanci al totale per ogni uscita dal ciclo while
      }
      stop = time(NULL);
      int tempo = stop - start; //Calcolo del tempo impiegato
      printf("N = %d Media = %f Secondi = %d\n", n, totTiri/n, tempo); //Stampa Risultato, rapporto tra il totale dei lanci e le iterazioni
      return 0;
}