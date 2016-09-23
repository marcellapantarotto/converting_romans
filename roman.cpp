#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "roman.hpp"


// funçao que analisa o numero romano inserido e faz as devidas conversoes para transforma-lo em numero decimal
int digit(char *c){
	int value=0, i;
	char aux;
	int tam = (int)(strlen(c)); 

	for(i=tam; i >= 0; i--){
		aux = c[i];
		switch(aux){

			//numero 1
			case 'i':
			case 'I':{
				if(value < 3){
				}else{
					if(value == 5 || value >= 10){
					}else{
						return -1;
					}
				}
				break;
			} 

			//numero 5
			case 'v':
			case 'V':{
				if(value < 5) value = value + 5;
				break;
			}

			//numero 10
			case 'x':
			case 'X':{
				if(value < 30){
					printf(" 1X v=%d\n", value);
				}else{
					if(value >= 50 || value >= 100){
						printf(" 2X v=%d\n", value);
					}else{
						return -1;
					}
				}
				break;
			}


			//numero 50
			case 'l':
			case 'L':{
				if(value < 60){
					value =  value + 50;
				}else{
					if((c[i+1] == 'L' && value < 60) || (c[i+1] == 'C' && value < 110)){
						value = value - 1;
					}else{
						return -1;
					}
				}
				break;
			}

			//numero 100
			case 'c':
			case 'C':{
				if(value < 300){
					value = value + 100;
				}else{
					if(value >= 500 || value >= 1000){
						printf(" 2C v=%d\n", value);
					}else{
						return -1;
					}
				}
				break;
			}

			//numero 500
			case 'd':
			case 'D':{
				if(value < 600){
					value =  value + 500; 
				}else{
					if((c[i+1] == 'D' && value < 600) || (c[i+1] == 'M' && value < 1100)){
						value = value - 100;
					}else{
						return -1;
					}
				}
				break;
			}

			//numero 1000
			case 'm':
			case 'M':{
				if(value < 3000){
					value = value + 1000;
				}
				break;
			}

			//default: return -1;
		}
	}
	return value;

}


int main(){
	char roman[30];
	int number;

	printf("\n Escreva um numero romano ate 3000 (digitos validos: I, V, X, L, C, D, M): ");
	scanf("%s", roman);
	getchar();

	number = digit(roman);

	if(number < 0){
		printf("\n Numero romano invalido: %d\n\n", number);
		return 0;
	}

	printf("\n O numero na base decimal é igual a: %d\n\n", number);

	return 0;
}
