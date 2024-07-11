#include<stdio.h>

#include<stdlib.h>

typedef struct cellule cellule;

struct cellule

{int elem;

struct cellule *suivant; };

typedef cellule *liste;

void main()

{liste tete,L,p;

int i;

tete=NULL;

for(i=0;i<5;i++)

{p=malloc(sizeof(cellule));

printf("donner un element\n");

scanf("%d",&p->elem);

p->suivant=tete;

tete=p;

}

L=tete;
p=L;
while(p!=NULL){
	printf("%d | ",p->elem);
	p=p->suivant;
}
printf("donner un element : ");
scanf("%d",&p->elem);

p->suivant=L;
L=p;
while(p!=NULL){
	printf("%d | ",p->elem);
	p=p->suivant;
}


}