#include <stdio.h>
#define N 10
void main(){
int tab[N]={1, 2, 2, 4, 5, 6, 7, 7, 9,10};
int x,nb,i;
printf("saisir un entier \n");
scanf("%d",&x);
nb=0;
	for(i=0;i<N;i++){
		if(tab[i]==x){
		nb=nb+1;}
	}
	
		printf("le nombre occurence de%d est %d",x,nb);
	}