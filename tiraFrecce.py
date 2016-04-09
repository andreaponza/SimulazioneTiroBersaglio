import sys
import time
import calendar
from random import random

n = 1000000000 #Numero di frecce da lanciare

totTiri = 0.0 #Totale dei lanci per tutte le iterazioni
last_time = calendar.timegm(time.gmtime()) #Inizializzazione variabile temporale in secondi
	
for i in range(n): #Inizio lancio frecce definite da n
    punti = 0.0 #Inizializzazione punti
    tiri = 0.0 #Lanci per ogni iterazione
		
    while punti < 1 : #Esecuzione fino a quando la somma dei punti inferiore a 1
        tiri = tiri + 1 #somma dei tiri per ogni lancio
        punti = punti + random() #Punteggio casuale per ogni lancio

    totTiri = totTiri + tiri #Aggiunta dei lanci al totale per ogni uscita dal ciclo while

now = calendar.timegm(time.gmtime()) - last_time #Calcolo del tempo impiegato
print "N = " + str(n) + " Media = " + str(totTiri/n) + " Secondi = " + str(now) #Stampa Risultato rapporto tra il totale dei lanci e le iterazioni
