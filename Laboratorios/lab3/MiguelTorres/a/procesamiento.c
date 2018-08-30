#include<stdio.h>
#include<math.h>
#include"defs.h" //va a tener a muestras


void genera_seno(float seno[])
{
	float f = 1000, fs=45000;
	register int n;
	for (n = MUESTRAS; n!=0 ; n--) //Este trabaja menos que el de abajo
	//for (n = 0; n < MUESTRAS ; n++)
	{
		seno[n] = sinf(2*n*M_PI*f/fs);
	}

}

