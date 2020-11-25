#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
int N; //total de sapatos
int TAM[60]; 
int pe[100]; //direito ou esquerdo
int N[10];
int i;
int x;

scanf("%i",&N);

if(N==-99){
printf("oi");
//system("pause");	
}

else{
	for(i=0;i<N;i++){
		scanf("%i",&N[i]);
	}
	
	for(i=0;i<N;i++){
		for(x=i+1;x<N;x++){
			if(N[i]=N[x]){
				printf("%i",N[i]);
				
			}
		}
	}
	
}


 system("pause");
}
