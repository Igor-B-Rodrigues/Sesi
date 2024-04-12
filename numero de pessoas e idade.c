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
 	
 	char nome[TAM];
 	int idade[TAM];
 	int i;
 	
 	 for (i = 0; i < TAM ; i ++){
	  
	printf("Digite o nome %dº:", i + 1 );
	scanf ("%sº", &nome[i]);
	fflush(stdin);
 	sleep(1);
     
	 printf("Digite a idade %dº:", i + 1 );
     scanf("%d", &idade[i]);
     fflush(stdin);
     sleep(1);
}
	




 
 return 0 ;

}

