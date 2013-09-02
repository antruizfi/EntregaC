#include<stdio.h>
#include<stdlib.h>
void main(){
	int angulo, mod, N=0, v, i;
	int *V=NULL;
	
	do{
		V=realloc((int *)V,(N+1)*sizeof(int));
		scanf("%d",&angulo);
		V[N]=angulo;
		N++;
	}while(angulo<=360);
		
	for(i=0;i<(N-1);i++){
			mod=V[i]%6;
		if(V[i]<=180){
			if(mod==0)
				printf("\nS");
			else
				printf("\nN");
		}
		else
			printf("\nEl angulo debe estar entre 0 y 180");
	}
	free(V);
	//printf("Ingresa un angulo entre 0 y 180 para ver si existe en el reloj\n");
	//scanf("%d",&angulo);
	
}