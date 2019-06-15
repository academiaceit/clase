#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int tam, fil, col;
	int *mat;
	int i,j;
	if (argc<4)
	{
		printf("Error en numero de argumentos");
		return (-1);
	}
	
	tam=atoi(argv[1]);
    fil=atoi(argv[2]);
	col=atoi(argv[3]);
	
	mat=(int *)malloc(tam*sizeof(int));
	
	srand(time(NULL));

	for (i=0;i<tam;i++)
	{
		for (j=0;j<tam;j++)
		{
			*(mat+tam*i+j)=rand()%10+1;
		}
		
	}	
	
	for (i=0;i<tam;i++){
	   for (j=0;j<tam;j++){
	   	   printf("%3d",*(mat+i*tam+j));
	   }
	   printf("\n");
}
	      
}


void compara(int *mat, int fil, int col, int tam)
{
	int sumafil=0;
	int sumacol=0;
	int i,j;
	for (j=0;j<tam;j++)
	{
		sumafil=sumafil+ (*mat+(fil-1)*tam+j);
	}
	
	for (i=0;i<tam;i++)
	{
		sumacol=sumacol+ (*mat+tam*i+col);
	}
	
	if (sumafil==sumacol)
	   printf("Las sumas son iguales");
	else
	   printf("Las sumas no son iguales");   
}
