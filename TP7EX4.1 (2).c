#include<stdio.h>


void hanoi(int,char,char,char);

void hanoi(int n,char a,char b,char c)

{if(n==1)
{
printf(" deplacement de %cvers %c\n",a,b);}

else

{hanoi(n-1,a,c,b);

hanoi(1,a,b,c);

hanoi(n-1,c,b,a);

}
}
void main()

{int nb_disq;

char a,b,c;

printf("donnez le nombre de disques");

scanf("%d",&nb_disq);

printf("donner premiere tour");

scanf(" %c",&a);

printf("donner deuxieme tour");

scanf(" %c",&b);

printf("donner troisieme tour");

scanf(" %c",&c);

hanoi(nb_disq,a,b,c);

}