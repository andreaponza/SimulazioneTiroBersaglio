import Cocoa


var n = 1000000000 //Numero di frecce da lanciare

var elapseTime = NSDate().timeIntervalSince1970 //Inizializzazione variabile temporale in secondi
var totTiri = 0.0 //Totale dei lanci per tutte le iterazioni

for i in 0 ..< n {//Inizio lanci frecce definite da n
    var punti = 0.0 //Inizializzazione punti
    var tiri = 0.0 //Lanci per ogni iterazione
    
    while punti < 1{ //Esecuzione fino a quando la somma dei punti è inferiore a 1
        tiri = tiri + 1 //somma dei punti per ogni lancio
        punti += drand48() //Punteggio casuale per ogni lancio
    }
    totTiri = totTiri + tiri //Aggiunta dei lanci al totale per ogni uscita dal ciclo while
}
elapseTime = NSDate().timeIntervalSince1970 - elapseTime //Calcolo del tempo impiegato

print("N = \(n) Media = \(totTiri/Double(n)) Second = \(Int(elapseTime))") //Stampa Risultato rapporto tra il totale dei lanci e le iterazioni

