// Data in input la spesa totale in un negozio, scrivere un programma in linguaggio C che stampa a video 
// l'importo da pagare con il 30% di sconto
#include <stdio.h>
int spesa;
const float sconto = 0.7;
int main (void) {
	printf("Inserisci la spesa da pagare");
	scanf("%d", spesa);
	spesa = spesa * sconto;
	printf("L'importo da pagare è %d", spesa);
	return 0;
	}