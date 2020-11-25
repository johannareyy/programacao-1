#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
    int i, soldados = 0, count = 0, fila = 0;
	while(soldados != 99)
    {
		printf("Insira o numero de soldados: \n");
		scanf("%d", &soldados);

		for(i = 1; count < soldados; i++)
        {
			count += i;
			fila++;
		}

		if(count > soldados)
			printf("%d Filas Completas e 1 fila incompleta com %d soldados\n", fila - 1, soldados - (i-2)*(i-1)/2);
        else 
		    printf("%d Filas Completas", fila);
	}
}
