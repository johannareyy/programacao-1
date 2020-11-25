#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    char fita[10];
    int i, soma=0;
    
    setbuf(stdin,NULL);

    for (i=0;i<11;i++){
        scanf("%c",&fita[i]);
        fita[i] = 0;
    }

    while (fita[0] != '-'){
        soma=0;
        for(i=0;i<11;i++){
            scanf("%c",&fita[i]);
            if (fita[i] == 'o') soma += pow(2,(8-i));
        }
        printf("%c",soma);
    
    }

    return 0;
}