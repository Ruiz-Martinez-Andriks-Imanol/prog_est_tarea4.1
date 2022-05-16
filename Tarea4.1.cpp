/* Autor: Andriks Imanol Ruiz Martínez, Realizado: 24/02/2022
Escuela: Universidad del Valle de Mexico Campus Villahermosa
Materia: Programación Estructrada
Ciclo: 01/2022

Este es un programa de ciclos y condicionales en Lenguaje C de la materia de Programación Estructurada<br>
Muestra el uso de:

    -Variables flotantes y enteras
    -printf para mostrar mensajes y variables
    -scanf
    -El uso de include para las librerías
    -Ciclos
    -Contador
    -Condicionales
    -Comentarios para la documentación interna del programa
*/
#include<stdio.h>
int main(){
	//Declaración de variables
	float numero, positivo=0, negativo=0, cero=0;
	int i=0;
	//Ciclo para la introducción de los numeros
	do{
		printf("Introduce un numero: ");
		scanf("%f",&numero);
		if(numero<9999) {
			i++;
			if(numero>0){ //Condicionales
				positivo++;
			}
			if(numero<0){
				negativo++;
			}
			if (numero==0){
				cero++;
			}
		}
	}while (numero<9999);
	//Salida
	printf("Numeros introducidos positivos: %.f\n", positivo);
	printf("Numeros introducidos negativos: %.f\n", negativo);
	printf("Numeros que son cero: %.f\n", cero);
	return 0;
}
