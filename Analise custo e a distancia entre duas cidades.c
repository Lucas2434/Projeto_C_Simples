#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
 int  main(){
   //criador: Lucas Samuel Barbosa
    setlocale (LC_ALL,"portuguese");
  printf ("\n Criador: Lucas Samuel Barbosa");
  printf ("\n Analise custo e a distancia entre duas cidades");

     char NOMECIDADE1,NOMECIDADE2;
     int  Distancia;
     float valorpos, mediacons, valorcomb, valorconsigopagar;
     printf ("\n informe o nome da cidade 1: ");
     scanf ("%s", &NOMECIDADE1);
     printf ("\n informe o nome da cidade 2: ");
     scanf ("%s", &NOMECIDADE2);
     printf ("\n informe a distancia entre as duas cidades: ");
     scanf ("%d", &Distancia);
     printf ("\n informe o dinheiro disponivel para gasto: ");
     scanf ("%f", &valorpos);
     printf ("\n informe a média de consulmo de combustivel do veiculo:");
     scanf ("%f", &mediacons);
     printf ("\n informe o valor do combustivel: ");
     scanf("%f", &valorcomb);
     valorconsigopagar = (Distancia / mediacons) * valorcomb;
     if (valorconsigopagar <= valorpos)
        printf("\n a viagem é viavel,o valor a ser gasto é %f ", valorconsigopagar," a distancia é %d", Distancia);
     else
        printf ("\n a viagem não é viavel pois você não tem dinheiro suficiente");
    return 0;
 }
