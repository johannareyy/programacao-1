#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char alf[28]="\0", msg[2000]="\0", aux[3]="\0",string[2000];
int s=0,t,i;

printf("Numero de mensagens T: ");
scanf("%i",&t);

for(i=0;i<t;i++){
    s=0;
    printf("Ordem de atribuicao de letras em numeros: ");
    setbuf(stdin, NULL);
    fgets(alf,28,stdin);
    printf("Mensagem codificada: ");
    setbuf(stdin, NULL);
    fgets(msg,2000,stdin);
    

    while (s<strlen(msg)){
        aux[0]=msg[s];
        aux[1]=msg[s+1];
        string[s/2]=alf[atoi(aux)-1];
        s=s+2;
    }
    printf("Mensagem decodificada: %s\n", string);
}
return 0;
}