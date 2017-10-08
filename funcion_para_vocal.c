//Determinar que es vocal_manejo de funciones



# include <stdio.h>

int esVocal(char c);

int main(){
	
	int resultado;
	
	resultado = esVocal('a');
	if(resultado == 0){
		printf("no es vocal");
		
	}
	else {
		printf("Es vocal");
	}
	
	return 0;
}

int esVocal(char c){
	char vocales[5]= {'a', 'e', 'i', 'o', 'u'};
	int i;
	for (i = 0 ; i<5 ; i++){
		if(c==vocales[i]) return 1;
	}
}
