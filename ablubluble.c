 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 #define  TAM 5
 #include <time.h>
 #include <limits.h>
 #include <ctype.h>
 #include <string.h>
 
 int main (){
 	setlocale(LC_ALL,"");
 	
 	int nome[TAM];
 	int idade[TAM];
 	int i;
 	
 	for ( i = 0; i < TAM ; i++){
		printf("idade %iº:", i + 1 );
		scanf("%i", &idade[i]);
		
		
	  (int i = 0; i <TAM; i++)
	printf("nome %iº:", i + 1 );
		scanf("%i", &nome[i]);
		
 }
 return 0;
}
