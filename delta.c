#include <stdio.h>

int root(int a, int b, int c){
 int delta;
 delta= b + (- 4*a*c);
 printf("%i",delta); 
}

int main(){

int a, b, c;

printf("Digite os coeficientes: ");
scanf("%i %i %i",&a, &b, &c);

root(a, b, c);

return 0;
}
