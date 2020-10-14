#include <stdio.h>
#include <math.h>

//Skriv nu et program der anvender Pythagoras til at beregne længden den
//lange side i en trekant når man kender længderne af de to korte sider.
//I programmet skal man kunne indtaste værdierne for længderne af de to korte
//sider. Programmet skal så beregne (hint 1C) længden af den lange side og
//udskrive denne på skærmen.

//indtaste 2 kateter, programmet udregner hypotenusen.

int main(void)

{
	double lenght1;
	double lenght2;											//definerer de variable vi bruger
	double hypotenuse;

	printf_s("Enter 1th lenght in triangle:");
	scanf_s("%lf", &lenght1);
															//spørger brugeren om 2 kateter
	printf_s("Enter 2th lenght in triangle:");
	scanf_s("%lf", &lenght2);

	hypotenuse = sqrt(lenght1 * lenght1 + lenght2 * lenght2);			//udregner hypotenusen og printer det
	printf_s("The hypotenuse is equal to %lf", hypotenuse);


	return 0;
}