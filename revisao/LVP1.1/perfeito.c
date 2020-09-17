#include "perfeito.h"

int numero_perfeito(int n)
{
  int soma = 0;
  
  for (int i = 1; i < n; i++)
    if(n%i == 0)
      soma += i;
  
  return soma == n;
}

void encontra_perfeito(int x, int y, char* string)
{
  int index = 0;
  sprintf(string, "%s", "\0");
    for(int i=x; i<=y; i++){
        if (numero_perfeito(i)){
            if(index == 0){
                sprintf(string,"%d",i);
                index++;
            }else{
                sprintf(string, "%s,%d", string, i);
            }
        }
    }
}
