 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>
 
 int main (){
 	setlocale(LC_ALL,"");
 	
 	char nomes[4][200];
 	float notas [4][3] , somaNotas = 0;
	float media [4] ;
 	int i , j ;
 	
 	  
 	printf("===Solicitando dados para o usuario === \n");
 	
	 for (i = 0; i < 4; i++){
 		printf("Digite o nome do aluno :", i + 1);
 		scanf("%s", &nomes[i][j]);
 		
 		for (j = 0 ; j < 4; j++){
		 
 		 	printf("Digite a %iº nota: \n" , j + 1, notas[i][j] );
 			scanf("%f", &notas[i][j]);
 			
 			somaNotas += notas[i][j];
	}
		
	    media[i] = somaNotas / 3;
	    somaNotas = 0;
	  	
	  }
	  for (i = 0; i<4; i++){
	  
	  for	(j = 0; j < 3; j++) {
     	printf(" %1º nota : %1.f \n" , j + 1, notas[i][j]);
	}
		  	    
		  	    
			  }
			  
			   
	  

 	 return 0;
 	
 }
