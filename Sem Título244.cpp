  #include <stdio.h>
  #include <stdlib.h>
  #include <locale.h>
  #define NUM 2
 
   int main(){
   setlocale(LC_ALL,"");
   
   int numeroUm, numeroDois , resultado = 0;
   int soma,subtracao, multiplicacao, divisao ;
   char operacao; 
   
    printf("Digite o 1º numero:");
   scanf("%i",&numeroUm);
   fflush(stdin);
   printf("Digite o 2º numero :");
   scanf("%i", &numeroDois);
   fflush(stdin);
   
   printf("Digite a operacao desejada:");
   scanf("%c", &operacao);
   fflush(stdin);
   
   switch (operacao){
  
   case '+':
   resultado = numeroUm + numeroDois;
   break;
   
   case '-':
   resultado = numeroUm - numeroDois;
   break;
   
   case '*':
   resultado = numeroUm * numeroDois;
   break;
   
   case '/':
   resultado = numeroUm / numeroDois;
   break ;
   
   }
   printf("\nResultados é %.1f", resultado);
   
  return 0;
 }
