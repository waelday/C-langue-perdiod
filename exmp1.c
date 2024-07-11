#include <stdio.h>

int adition(int, int);
int soustract(int, int);
int multip(int, int);
float dive(int, int);

int main() {
    int a, b;
    printf("Donner deux nombres a et b : ");
    scanf("%d %d", &a, &b);
    
    int c = adition(a, b);
    printf("somme = %d \n", c);	
    
    int d = soustract(a, b);
    printf("a - b = %d \n", d);
    
    int e = multip(a, b);
    printf("a * b = %d \n", e);
    
    float s = dive(a, b);
    printf("a / b = %.2f \n",s);
    
    return 0;
}

int adition(int a, int b) {
    return (a + b);
}

int soustract(int a, int b) {
    return (a - b);
}

int multip(int a, int b) {
    return (a * b);
}

float dive(int a, int b) {
  float a1=(float)a;
   float b1=(float)b;
   return(a1/b1);
  
}
