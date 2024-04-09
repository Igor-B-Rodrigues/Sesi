// escreva 5 numeros e mostre eles usando vetores :)

#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <stdlib.h>
#define  TAM 5
int main (){
	setlocale(LC_ALL, "");
	
	int num [TAM] ;
	int	numMaior = INT_MIN;
	int numMenor = INT_MAX;
	int i ;
		
  printf ("Digite 5 numeros: \n");
  for (i= 0; i < TAM; i++){
  
  printf("Digite um numero: ");
  scanf("%i", &num[1]);
  if (num[i] < numMenor){
 numMenor = num[i];
}
if (num [i]> numMaior){
	numMenor = num[i];
	
	}
}
printf("\Exibindo os numeros");
  for (i= 0; i<TAM; i++){
  
  }
  
  	
  
  return 0;
  
  
  
  
	
	
	
	
}
