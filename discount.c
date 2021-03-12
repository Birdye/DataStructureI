/*
  Objetivo: Escriba un programa estructurado para calcular el precio de un producto en esta tienda.
  Autor: MRLE
  Fecha: 11/03/2021
  Notas: Las cantidades pueden ser + o - y pueden contener decimales.

*/


#include <stdio.h>

float damePrecio();
float calcDesc(float precio);
float impriDesc(float desc);

float damePrecio()
{
  float precio;

  printf("Dame precio: ");
  scanf("%f",&precio);
  return(precio);
}

float calcDesc(float precio)
{
  float desc = 0;
  if(precio > 2500){
    desc = precio - ((precio*12)/100);
  }
  else{
    desc = precio - ((precio*7)/100);
  }

return(desc);
}

float impriDesc(float desc)
{
  printf("El precio final del producto es: %.2f \n",desc);
}


int main()
{
  float precio, desc;
  precio = damePrecio();
  desc = calcDesc(precio);
  impriDesc(desc);
  return(0);
}
