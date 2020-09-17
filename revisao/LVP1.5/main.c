#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int num_casos, quant_muros, quant_maiores=0, quant_menores=0;
    
    
    scanf ("%d", &num_casos);
    
    for (int j=0; j < num_casos; j++){
        quant_menores = 0;
        quant_maiores = 0;
        
        scanf ("%d", &quant_muros);
        
        int alturas[(quant_muros)];
        scanf("%d", &alturas[0]);
        
        for (int i=1; i < (quant_muros); i++){
        scanf("%d", &alturas[i]);
        
        if (alturas[i-1] > alturas[i]) quant_menores++;
        
        if (alturas[i-1] < alturas[i]) quant_maiores++;
        
        }
        
    printf ("Caso %d: %d %d\n", j+1, quant_maiores, quant_menores);
    }
   
    return 0;

}