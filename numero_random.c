// Numero random
#include <stdio.h>
#include <stdlib.h>

int main(){

int i, r, valor;

for ( i=0 ; i<100 ; i++){
	
	srand(time(NULL));
	valor = (r%100) +1 ;
	printf("%d\t", valor);
	
}
	

	system ("pause");
	return 0;
}

//Ejercicio práctico -Laboratorio
