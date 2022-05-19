/* autor:Oscar Vivaldi Partido Ramirez fecha: 17/02/2022

capitulo 4 ejercicio 15 programa que imprimira el numero de cuenta

tipo de servicio, numero de minutos de uso, y el monto a pagar

-pedirle al usuario que escriba su numero de cuenta

-el tipo de servicio que pagara 1-regular 2.premium

numero de minutos de uso del servicio

*/

#include <stdio.h>

int main(){

//declarar variables

int regular, premium, tipoServicio,diaNochePremium ;

float numeroCuenta, minutosPremium, minutosRegular, total;

float minutosNochePremium, minutosDiaPremium;

float totalPremium,totalRegular,totalNoche;

printf("Introduce tu numero de cuenta:");

scanf("%f",&numeroCuenta);

printf("Introduce el tipo el tipo de servicio que le gustaria contratar\n (1.regular)(2.premium)");

scanf("%d",&tipoServicio);

//proceso

regular=10;

premium=25;

if (tipoServicio==1){

printf("El usuario contrato el servicio regular\n");

printf("Introduce la cantidad de minutos del servicio regular:");

scanf("%f",&minutosRegular);

}

if(tipoServicio==2){

printf("El usuario contrato el servicio premium\n");

printf("Marcaste en el Dia o en la Noche?\n(3-dia)(4-noche): ");

scanf("%d",&diaNochePremium);

}

if (minutosRegular<=50){

printf("no supero los 50 minutos gratis, favor de pagar: %d \n",regular);

printf("%10.2f\n",numeroCuenta);

}

else if (minutosRegular>=51){

totalRegular=(minutosRegular*0.20+regular)-50;

printf("numero de cuenta:%10.2f\n",numeroCuenta);

printf("%f",totalRegular);

}

if(diaNochePremium==3){

printf("El usuario marco en el Dia\n");

printf("Introduce la cantidad de minutos del servicio premiun durante el dia :");

scanf("%f",&minutosDiaPremium);

}

if(minutosDiaPremium<=75){

printf("no excedio los minutos gratis pague:%d\n",premium);

printf("numero de cuenta:%10.2f\n",numeroCuenta);

}

else if (minutosDiaPremium>=76){

totalPremium=(minutosDiaPremium*0.10+premium)-75;

printf("%f\n",numeroCuenta);

printf("%f\n",totalPremium);

}

if (diaNochePremium==4){

printf("El usuario marco en la Noche\n");

printf("Introduce la cantidad de minutos del servicio premium durante la noche:");

scanf("%f",&minutosNochePremium);

}

if (minutosNochePremium<=100){

printf("El usuario no excedio los minutos gratuitos\nsolo pagara: %d del servicio premium.\n",premium);

printf("numero de cuenta:%10.2f\n",numeroCuenta);

}

else if (minutosNochePremium>=101){

totalNoche=(minutosNochePremium*0.05+25)-100;

printf("%f\n",totalNoche);

printf("numero de cuenta:%10.2f\n",numeroCuenta);

}

else{

printf("error al introducir los numeros indicados.");


}

}
