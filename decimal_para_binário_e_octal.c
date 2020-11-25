#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int n;
 int num = -1, num2;
 int resto, resto2;
 int r[10],j[10];
 int i=0,k=0;
 while(num < 0){
 printf("Insira o numero: ");
 scanf("%i", &num);
 n = num;
 num2=n;
}

 if(num == 1) {
  printf("Binario:");
  printf("%i\n", num);
  printf("Octal:");
  printf("%i\n", num);
 }
//----------------------//
 else {
  do {
   resto = num % 8;
   r[i] = resto;
   i++;                      //<--CALCULO OCTAL
   num = num / 8;

  } while(num >= 1);
//----------------------//
 }if(num2==1){}
 else{
    do{
   resto2 = num2 % 2;
   j[k] = resto2;
   k++;                      //<--CALCULO BINARIO
   num2 = num2 / 2;

  } while(num2 >= 1);
 }
//----------------------//

printf("\n");

 k = k - 1;
 i = i - 1;
 printf("Numero: %d", n);
 printf("\n");
 //------------------//
 printf("Binario: ");
 for(k;k>=0;k--){	        //<--IMPRESSAO BINARIO
 	printf("%d", j[k]);
 }
 printf("\n");
 //------------------//
 printf("Octal: ");
 for(i;i>=0; i--){	        //<--IMPRESSA OCTAL
 	printf("%d", r[i]);
 }
 printf("\n");
 //------------------//

 system("pause");
}
