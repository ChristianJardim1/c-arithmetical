#include <stdio.h>

int i;

int fat(int x){
 int fa=1;
 for(i=1;i<=x;i++){
  fa=fa*i;
 }
  return(fa);
}

int main(){

int y,z;

printf("Digite um número positivo: ");
scanf("%i",&y);

z=fat(y);
printf("%i",z);

return 0;
}
