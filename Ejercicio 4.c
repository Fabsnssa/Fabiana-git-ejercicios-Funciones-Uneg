/* Escribir una función que calcule y presente las raíces reales de la ecuación de segundo grado
ax2+bx+c=O
utilizando la fórmula cuadrática.
Suponer que a, b y c son argumentos en coma flotante con valores dados y que x1 y que x2 son variables en coma flotante. 
Suponer también que b'>4*a*c, de forma que las raíces calculadas son siempre reales.*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

//Determinación del prototipo de la función para realizar el cálculo de la función cuadrática
double EcCuadratuca (double vA, double vB, double vC, double Rx1, double Rx2);

int main (){
//Es el proceso normal de ingreso de datos por parte del usuario donde solo debe digitar 3: A, B Y C para realizar la fórmula
	double NumA,NumB,NumC,ResultX1,ResultX2;
	printf ("\n Digite el valor de a: "); scanf("%lf",&NumA);
	printf ("\n Digite el valor de b: "); scanf("%lf",&NumB);
	printf ("\n Digite el valor de c: "); scanf("%lf",&NumC);
	
	
	//Con lo obtenido se imprime en pantalla lo obtenido en EcCuadratica tanto para X1 como para X2
	EcCuadratuca (NumA,NumB,NumC,ResultX1,ResultX2);
	
	printf ("\n El resultado de Raiz X1 es: %lf",ResultX1);
	printf ("\n El resultado de Raiz X2 es: %lf",ResultX2);

	
	getch ();
	return 0;
}

//Aquí se vería la operación tanto para la obtención de X1 como de X2 por el signo positivo y negativo que les cambia
double EcCuadratuca (double vA, double vB, double vC, double Rx1, double Rx2){
	Rx1= ( - vB + sqrt ( pow(vB,2) - (4 * vA * vC))) / ( 2 * vA); 
	Rx2= ( - vB - sqrt ( pow(vB,2) - (4 * vA * vC))) / ( 2 * vA);
	
}

