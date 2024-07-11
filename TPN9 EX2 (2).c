#include <stdio.h>
#define N 10
void main(){
int tab[N]={1, 2, 3, 4, 5, 6, 7, 8, 9,10};
int *p;
for(p=tab;p<tab+N;p++){
	printf("%d\n",*p);}
	for(p=tab+N-1;p>=tab;p--){
		printf("%d\n",*p);}
	}