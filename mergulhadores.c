#include <stdio.h>

int main()
{
    int tripulacao[128];
    int i, voltou, input;

    scanf("%i", &input); //Pessoas que tripulacao
    for (i = 1; i <= input && i < 127; i++)
        tripulacao[i] = i;
    tripulacao[i] = 0;

    scanf("%i", &input); //Pessoas que voltou
    for (i = 1; i <= input; i++)
    {
        scanf("%i", &voltou);
        tripulacao[voltou] = -1;
    }

    //Agora só exibir
    for (i=1; tripulacao[i]!=0; i++)
        if(tripulacao[i]>0)
            printf("%i", tripulacao[i]);
}
