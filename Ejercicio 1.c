/* Ejercicio 1: Escribir una función que sume dos números. Implemente un programa que la utilice. */
#include<stdio.h>

int sumatoriaInt (int valor1, int valor2); //Presentación de la función para recibir los 2 numeros.

int main () {
	//proceso básico para pedir al usuario los números
    int num1, num2,total;
    printf ("\n Digite dos numero para sumarlos: ");
    scanf ("%d %d",&num1,&num2);
    //suma = num1 + num2
    
    ///uso o llamado de la función sumatoriaInt para que arroje el resultado final
    total= sumatoriaInt (num1, num2); 
    
    /*Saldrá lo obtenido en la variable suma ya que:
    valor1=num1 ; valor2=num2;
    suma=valor1+valor2; por lo tanto: total=suma
    */
    printf ("Resultado : %d",total);
    return 0;
}

//ejecución de la función ejecutando la suma de num1 y num2
int sumatoriaInt (int valor1, int valor2) { 
    int suma=0;
    suma=valor1+valor2;
    return suma; //aquí devolverá el valor obtenido a 
}
