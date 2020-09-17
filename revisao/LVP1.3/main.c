#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
 char M[3][3],x,comparacao[3], x1='X', o1='O';
 int index,i,j,cont=0,soma;
 
 for(i=0; i<3; i++){
    for(j=0; j<3; j++){
    M[i][j]='A';    
    }
 }    
 
while (cont == 0){
    for(index=0; index<9; index++){                   // | 1 2 3 |   0 1 2
        setbuf(stdin,NULL);                           // | 4 5 6 |
        scanf("%c %i %i",&x, &i, &j);                 // | 7 8 9 |
        M[i-1][j-1] = x;
         
        
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                comparacao[j] = M[i][j];
            }
            // for(j=0; j<3; j++){
            //     printf("%c ",comparacao[j]);    
            // }
            //printf("\n");
            if ((comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==x1) || (comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==o1)){
                printf ("\nJogador %c ganhou.", comparacao[0]);
                return 0;
            }
        }
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                comparacao[j] = M[j][i];
            }
            if ((comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==x1) || (comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==o1)){
                printf ("\nJogador %c ganhou.", comparacao[0]);
                return 0;
            }
        }
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(i==j){
                comparacao[j] = M[i][j];
                }
            }
        }
            if ((comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==x1) || (comparacao[0]==comparacao[1]) && (comparacao[1]==comparacao[2]) && (comparacao[0]==o1)){
                printf ("\nJogador %c ganhou.", comparacao[0]);
                return 0;
                }
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                soma=i+j;
                if(soma==2){
                comparacao[j] = M[i][j];
                }
            }
        }
                if (comparacao[0]==comparacao[1]==comparacao[2]==x1||comparacao[0]==comparacao[1]==comparacao[2]==o1){
                printf ("\n3Jogador %c ganhou.", comparacao[0]);
                return 0;
                }
                
    }
    cont++;
}
printf("\nEmpate.");
return 0;
 
 
 

        
        //printf("%c ",M[i][j]);
     }
//     printf("\n");
// }
 //for(a=0;a<3;a++){
 //    for(b=0;b<3;b++){
 //       for(a=0;a<3;a++){
 //           for(b=0;b<3;b++){
  //              for(a=0;a<3;a++){
 //                   for(b=0;b<3;b++){
  //                  }
 //               }
 //           }
 //       }
//    }
// }
 //
 //if(M[1][1]==M[1][2]==M[1][3]||M[1][1]==M[2][1]==M[][])
   // printf("Jogador O ganhou.");
   // printf("Jogador X ganhou.");
   // printf("Empate.");
//}