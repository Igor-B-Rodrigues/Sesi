  
  #include <stdlib.h>
  #include <stdio.h>
  #include <locale.h>
  #include <ctype.h>
  #include <string.h>
  
  int main(){
  setlocale(LC_ALL, "");
  
  int vetor [500000];
  int i;
  
 printf("Digite os elementos do vetor: \n");
for (i = 0 ; i<500000 ; i++){
fflush(stdin);
 printf("Elemento %d:" , i + 1);
 scanf("%d", &vetor);
 fflush(stdin);
 }
 for(i = 0; i<500000; i++){
 	printf(" %d: %d\n", i+ 1 , vetor [i]);
 }

  
  

  return 0;
  
  
  
  
  
  
  }
