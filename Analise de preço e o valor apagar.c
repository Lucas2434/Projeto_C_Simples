#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 int  main(){
  //criador: Lucas Samuel Barbosa
  setlocale (LC_ALL,"portuguese");
  printf ("\n Criador: Lucas Samuel Barbosa");
  printf ("\n Analise de preço e o valor apagar");

  float intem1, intem2, intem3, intem4, intem5, valortotal, vm, troco, valorfaltara;

  printf ("\n informe o valor em dinheiro disponivel para ser gasto: ");
  scanf ("%f", &vm);
  printf("\n informe valor do intem1: ");
  scanf ("%f", &intem1);
  printf("\n informe valor do intem2: ");
  scanf ("%f", &intem2);
  printf("\n informe valor do intem3: ");
  scanf ("%f", &intem3);
  printf("\n informe valor do intem4: ");
  scanf ("%f", &intem4);
  printf("\n informe valor do intem5: ");
  scanf ("%f", &intem5);
  valortotal = intem1 + intem2 + intem3 + intem4 + intem5;
  printf ("\n o valor total é %f", valortotal);
  troco = vm - valortotal;
  valorfaltara = valortotal - vm;
  if(vm >= valortotal)
    printf("\n você tem o dinheiro sufiiente e o valor de troco é %f", troco);
  else
    printf("\n você não tem o dinheiro suficente e vai faltar %f", valorfaltara);

  return 0;

}
