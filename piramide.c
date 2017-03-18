#include<stdio.h>
int main(){
  int numero,i,j,k,espacios,asteriscos;
  printf("Proporcione la altura de la piramide: ");
  scanf("%d",&numero );
  if(numero>=1&&numero<=80){
    asteriscos=1;
    for(i=1;i<=numero;i++){
      espacios=numero-i;
      for(j=espacios;j>0;j--){printf(" ");}
      for(k=0;k<asteriscos;k++){printf("*");}
      asteriscos=asteriscos+2;
      printf("\n");
    }
  }
  else
    printf("El numero proporcionado sale del rango de la altura de la piramide.");
}
