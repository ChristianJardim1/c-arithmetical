#include <stdio.h>
#include <math.h>

int root(int a, int b, int c){
    
 int delta, raiz, raiz1, raiz2;
 
 delta= (b*b) + (- 4*a*c);
 raiz= sqrt(delta);
 if (raiz >= 0){
  raiz1= (-b + sqrt(delta))/2*a;
  raiz2= (-b - sqrt(delta))/2*a;
 }
 printf("As raízes são: %i e %i.",raiz1,raiz2); 
}

int main(){

int a, b, c;

printf("Digite os coeficientes:\n");
scanf("%i %i %i",&a, &b, &c);

root(a, b, c);

return 0;
}
