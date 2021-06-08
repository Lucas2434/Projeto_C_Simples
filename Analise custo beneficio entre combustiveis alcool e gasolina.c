#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
 int  main(){
   //Criador: Lucas Samuel Barbosa
    setlocale (LC_ALL,"portuguese");
  printf ("\n criador: Lucas Samuel Barbosa");
  printf ("\n Analise custo beneficio entre combustiveis alcool e gasolina");

    float valgas, valalcc, qtdgas, qtdalcc, consulmogas, consulall, qtfctan, mediacongas, mediaconsalcc, fator, tanquecheio;
    printf ("\n informe o valor da gasolina: ");
    scanf  ("%f", &valgas);
    printf ("\n informe o valor do alcool: ");
    scanf  ("%f", &valalcc);
    printf ("\n informe a quantidade a ser abastecida com gasolina: ");
    scanf  ("%f", &qtdgas);
    printf ("\n informe a quantidade a ser abastecida com alcool: ");
    scanf  ("%f", &qtdalcc);
    printf ("\n informe a quilometragem quando o tanque estava cheio: ");
    scanf  ("%d", &tanquecheio);
    printf ("\n informe  quilometragem quando o motorista foi completar o tanque: ");
    scanf("%f", &qtfctan);
    consulmogas = (qtfctan - tanquecheio) / qtdgas;
    consulall = (qtfctan - tanquecheio) / qtdalcc;
    fator =  consulall / consulmogas ;
    mediacongas = fator * valgas;
    mediaconsalcc = fator * valalcc;

    if (mediacongas < mediaconsalcc)
        printf ("\n então gasolina é mais viavel para abastecer, o seu consulmo com gasolina é %f", consulmogas);
    else
        printf ("\n então alcool é mais viavel para abastecer,  o seu consulmo com alcool é %f", consulall);
    return 0;
 }
