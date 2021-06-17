#include <stdio.h>

int main (){



char opcionDeseada = '-';

	printf( " \t marque la opcion deseada \n");
	printf( " \t familiar [1] \n");
	printf( " \t amigos [2] \n");
	printf( " \t trabajo [3] \n");
	printf( " \t publicidad [4] \n");
	


scanf ( "%c" , &opcionDeseada );

switch (opcionDeseada) {

case '1': 
printf( "deje su mensaje luego de la senial  \n");
break;

case '2': 
printf( " deje su mensaje y llame mas tarde \n");
break;

case '3': 
printf( "numero equivocado \n");
break;

case '4': 
printf( " :(  \n");
break;


default: 
printf(" ingreso inválido \n");
break;

}




	return 0; 
}
