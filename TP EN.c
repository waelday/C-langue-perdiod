#include <stdio.h>
#include <string.h>
typedef struct {
     int jour;
     char mois[20];
     int annee;
}date;
 date liredate() {
 	date d;
     printf("Entrez le jour : ");
     scanf("%d", &d.jour);
     printf("Entrez le mois : ");
     scanf("%s", d.mois);
     printf("Entrez l'annee : ");
     scanf("%d", &d.annee);
return d;
}
void ecriredate(date dd) {
    printf("il est le:%d-%s-%d",dd.jour,dd.mois,dd.annee);
}
void main(){
	date d=liredate();
	ecriredate(d);
}