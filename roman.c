/*
	CONVERTENDO NUMEROS ROMANOS

	Aluna: Marcella Pantarotto
	Matrícula: 13/0143880
	Disciplina: Métodos de Programação - UnB
	Professor: Jan Correa
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// funçao que analisa o numero romano inserido e faz as devidas conversoes para transforma-lo em numero decimal
int digit(char c){
	int value;
	switch(c){
		case 'I': value = 1; break;  // I pode ser usado no máximo 3 vezes em cada número
		case 'IV': value = 4; break; 
		case 'V': value = 5; break;
		case 'IX': value = 9; break; 
		case 'X': value = 10; break;
		case 'XL': value = 40; break; 
		case 'L': value = 50; break;
		case 'XC': value = 90; break; 
		case 'C': value = 100; break;
		case 'CD': value = 400; break; 
		case 'D': value = 500; break;
		case 'CM': value = 900; break; 
		case 'M': value = 1000; break;
		case '0': value = 0; break;
		default: value = -1;
	}
	return value;
}


int main(){
	char roman[30];
	long int number = 0;
	int i = 0;

	/*
	if (roman<=0 || roman>3000){
		printf("\n%s nao pode ser representado em numeros romanos.\n", roman);
		return -1;
	}
	*/

	printf("\n Escreva um numero romano (digitos validos: I, V, X, L, C, D, M): ");
	scanf("%s", roman);
	getchar();

	if(digit(roman[i]) < 0){
		printf("\n 1 Numero romano invalido: %c\n\n", roman[i]);
		return 0;
	}


	while(roman[i]!='\0' && ){
		if(digit(roman[i])){
			if (digit(roman[i]) >= digit(roman[i+1])){
				number = number + digit(roman[i]);
				i++;
			}else{
				number = number + (digit(roman[i+1]) - digit(roman[i]));
				i++;
			}
			//i++;
		}
	}

	printf("\n O numero na base decimal é igual a: %ld\n\n", number);

	return 0;
}
