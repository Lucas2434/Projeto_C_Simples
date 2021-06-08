#include<stdio.h>
#include<locale.h>

int main(){
   //Aluno: Lucas Samuel Barbosa
   setlocale (LC_ALL,"portuguese");
   printf ("\n Aluno: Lucas Samuel Barbosa");
   printf ("\n comparação de numeros impar e par");

   int N1=0;
   setlocale (LC_ALL,"portuguese");
   printf ("\n informe um numero: ");
   scanf ("%i", &N1);

   if (N1%2==0)
    printf("\n o numero escolhido é par");
    else
    printf("\n o numero escolhido é impar");
   return 0;


}
