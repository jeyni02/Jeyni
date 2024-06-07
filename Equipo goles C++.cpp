/*Escribir un programa en C++ que reciba como datos de entrada los goles del equipo local (gl)
y los goles del equipo visitante (gv), imprima una cadena de caracteres indicando qué equipo ha ganado
(resultados posibles: “local”, “visitante”, “empate”). 
Autores: Claudia Vargas, Priscila Selva, Jeyni Orozco, Leana Cruz
Versión: Inicial
Fecha: 29/04/2024*/

#include <stdio.h>
#include <iostream>


int main()
{
   int gl, gv;


   // Solicitar los goles del equipo local y visitante
   printf("Ingrese los goles del equipo local: ");
   scanf("%d", &gl);
   printf("Ingrese los goles del equipo visitante: ");
   scanf("%d", &gv);


   // Determinar el resultado del partido
   if (gl > gv)
   {


       printf("Gano el equipo local");
   }
   else if (gl < gv)
   {
       printf("Gano el equipo visitante");
   }
   else
   {


       printf("Hubo un empate");
   }


   // Imprimir el resultado


   return 0;
}



