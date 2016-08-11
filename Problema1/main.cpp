#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, s, perdio=0, b, jugo=0, r, a;
	float pc;

	printf("\tBIENVENIDOS!");
	printf("\n\nHay alguna persona que desee jugar?: S/N ");
	r=getch();
	r=tolower(r);

	while(r=='s'){
		jugo++;
		printf("\n\n\nIngrese un numero entero: ");
		scanf("%d", &n);
		
		a=-2+8;
		b=a+n;
		
	if(b>=-2 && b<=8){
		printf("\n\tGANADOR");
		printf("\nEl numero se encuentra dentro del rango.");
	}
	else{
		printf("\nLo sentimos, perdio.");
		printf("\nEl numero no se encuentra dentro del rango.");
		perdio++;
	}
	printf("\n\nDesea jugar otra vez?: S/N");
	r=getch();
	r=tolower(r);
}
	pc=(perdio*100)/jugo;
	printf("\n\nEl porcentaje de las veces que salio del rango es: %.2f", pc);
	system("pause");
	return 0;
}
