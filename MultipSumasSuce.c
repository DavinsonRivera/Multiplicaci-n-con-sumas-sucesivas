// Multiplicacion de dos numeros usando sumas sucesivas
// Por: Davinson Rivera

#include <stdio.h>

int suma_sucesiva(x, y)
{
	int i, j;
	
	printf ("\n------------------------------------------------------------------\n");
	printf ("\nDigite el numero a multiplicar y presione Enter: \n");
	scanf ("%i", &x);
	printf ("\nDigite numero multiplicador y presione Enter: \n");
	scanf ("%i", &y);
	
	for (i=0, j=0; i<y; i++)
	{
		j= j + x;	
	}
	
	printf ("\n%i X %i = %i \n", x, y, j);
}

int main()
{	
	int continuar;
	
	suma_sucesiva();
	
	printf ("\nPresione: 1 para continuar \nPresione: 0 para terminar \nPosteriormente presione Enter\n");
	printf ("\nDesea Continuar? \n");
	scanf ("%i", &continuar);
	
	while (continuar == 1)
	{
		suma_sucesiva();
		printf ("\nPresione: 1 para continuar \nPresione: 0 para terminar \nPosteriormente presione Enter\n");
		printf ("\nDesea Continuar? \n");
		scanf ("%i", &continuar);
	}
	
	return 0;
}

