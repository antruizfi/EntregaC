#include <stdio.h>
#include <stdlib.h>

void main() {
	int *V=NULL,*V2=NULL, *V3=NULL; 
	//int un, dos, tres;
	int N=0,i; char c;
	int v1, v2, v3;
	do {
		V=realloc((int *)V,(N+1)*sizeof(int));
		V2=realloc((int *)V2,(N+1)*sizeof(int));
		V3=realloc((int *)V3,(N+1)*sizeof(int));
		//printf("\nDame valor >>"); 
		scanf("%d %d %d",&v1,&v2,&v3);
		V[N]=v1;
		V2[N]=v2;
		V3[N]=v3;
		N++;
	} while ((v1!=0)&&(v2!=0)&&(v3!=0));
	
	for(i=0;i<(N-1);i++){
	
	if((V[i]<0)||(V2[i]<0)||(V3[i]<0)||(V[i]>13)||(V2[i]>13)||(V3[i]>13))
		printf("\nIntroduce sOlo valores entre 1 y 13");
	
	//Los 3 son iguales
	else if((V[i]==13)&&(V[i]==V3[i])&&(V[i]==V2[i]))
		printf("\n*");
	else if((V[i]==V2[i])&&(V[i]==V3[i]))
		printf("\n%d %d %d",V[i]+1,V2[i]+1,V3[i]+1);
		
	//PARA 13	
	else if((V[i]==13)&&(V[i]==V2[i])&&(V3[i]!=V[i]))
		printf("\n%d %d %d",V3[i]+1,V[i],V2[i]);
		
	else if((V[i]==13)&&(V[i]==V3[i])&&(V2[i])!=V[i])
		printf("\n%d %d %d",V2[i]+1,V[i],V3[i]);
		
	else if((V2[i]==13)&&(V3[i]==V2[i])&&(V[i])!=V2[i])
		printf("\n%d %d %d",V[i]+1,V2[i],V3[i]);
	
	//alguno es diferente
	else if((V[i]==V2[i])&&(V[i]!=V3[i])){
		if(V3[i]<V[i])
			printf("\n%d %d %d",V3[i],V[i]+1,V2[i]+1);
		else if(V3[i]>V[i])
			printf("\n%d %d %d",V[i]+1,V2[i]+1,V3[i]);
	}
	
	
	
	else if((V[i]==V3[i])&&(V[i]!=V2[i])){
		if(V[i]>V2[i])
			printf("\n%d %d %d",V2[i],V3[i]+1,V[i]+1);
		else if(V2[i]>V[i])
			printf("\n%d %d %d",V[i]+1,V3[i]+1,V2[i]);
		}
		

	else if((V2[i]==V3[i])&&(V2[i]!=V[i])){
		if(V2[i]>V[i])
			printf("\n%d %d %d",V[i],V2[i]+1,V3[i]+1);
		else if(V[i]>V2[i])
			printf("\n%d %d %d",V2[i]+1,V3[i]+1,V[i]);
	}
		
	//3 diferentes
	else if((V[i]!=V2[i])&&(V2[i]!=V3[i])&&(V3[i]!=V[i]))
		printf("\n%d %d %d",V[i],V[i],V3[i]);
	}
	
	free(V);
	free(V2);
	free(V3);
}

