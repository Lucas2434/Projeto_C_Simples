#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
 int  main(){
     //Criador: Lucas Samuel Barbosa
     setlocale (LC_ALL,"portuguese");
     printf ("\n Criador: Lucas Samuel Barbosa");
      printf ("\n Analise de idade para retirar o CNH");

    int idade=0;

  printf("\n informe a idade: ");
 scanf ("%i", &idade);
 if (idade >= 18)
    printf ("\n ent�o a pessoa est� apta a tirar CNH");
 else
    printf ("\n a pessoa ainda n�o atingiu a idade certa para tirar o CNH");
 return 0;

 }
