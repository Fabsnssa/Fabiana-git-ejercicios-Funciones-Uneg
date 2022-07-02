/* Ejercicio 2. Escribir un programa que reciba como argumento un conjunto de números. Calcular la media mediante una función.*/

#include <stdio.h>
 
float ProcesoMediaN (float V1media, float V2media);// Aquí ingreso el prototipo de la función encargada de hacer la división de la media de lo ingresado

int main (){
	
	/* Aquí el usuario ingresará la cantidad de números que desee escribir en el programa, para luego dentro del ciclo for con tope como el límite de escritura,
	adjuntar los números que se irán a sumar en el proceso para obtener la media*/
	int i;
	float numero, limit,tope,acumm=0;
	printf("\n Ingrese la cantidad de numeros a calcular: "); scanf ("%f",&limit);
	tope=limit;
	
	for (i=1;i<=tope;i++){
		printf("\n Digite un numero: "); scanf ("%f",&numero);
		acumm=acumm+numero;
	
	}
 /* Es decir, el valor adjuntado dentro del printf será lo obtenido en la función float ProcesoMediaN entre: lo acumulado y sumado / el límite impuesto al inicio*/
	printf ("La media de todo lo ingresado es: %f", ProcesoMediaN (acumm,limit));
  	return 0;
}

/* En este espacio es la aplicación técnica final del promedio del número el cual es:
sumatoria de los datos dentro del for / cantidad delimitada en el limit*/
float ProcesoMediaN (float V1media,float V2media){
	return (V1media/V2media);
	}
