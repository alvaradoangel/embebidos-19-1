#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"defs.h"

void guarda_datos(float seno[])
{
	FILE *ap; //apuntador = ap
	register int n;
	ap = fopen("seno.dat","w"); //este es el que se genera el seno.dat

	if(!ap) //Si ap no es nulo
	{
		perror("Error al abrir el archivo");
		exit(EXIT_FAILURE);
	}
	for (n = 0 ; n < MUESTRAS; n++)
	{

		fprintf(ap, "%f \n",seno[n]);
	}
	fclose(ap);
	printf("Termina\n");
}
