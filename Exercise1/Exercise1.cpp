#include <stdio.h>
#include <math.h>

//Skriv nu et program der anvender Pythagoras til at beregne l�ngden den
//lange side i en trekant n�r man kender l�ngderne af de to korte sider.
//I programmet skal man kunne indtaste v�rdierne for l�ngderne af de to korte
//sider. Programmet skal s� beregne (hint 1C) l�ngden af den lange side og
//udskrive denne p� sk�rmen.

//indtaste 2 kateter, programmet udregner hypotenusen.

int main(void)

{
	double lenght1;
	double lenght2;											//definerer de variable vi bruger
	double hypotenuse;

	printf_s("Enter 1th lenght in triangle:");
	scanf_s("%lf", &lenght1);
															//sp�rger brugeren om 2 kateter
	printf_s("Enter 2th lenght in triangle:");
	scanf_s("%lf", &lenght2);

	hypotenuse = sqrt(lenght1 * lenght1 + lenght2 * lenght2);			//udregner hypotenusen og printer det
	printf_s("The hypotenuse is equal to %lf", hypotenuse);


	return 0;
}