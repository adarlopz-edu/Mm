#include <conio.h>
#include <stdio.h>
int main()
{
	int viNumero = 0;
	int viNumero2 = 0;
	printf("\n\n\n");
	printf("escribe un primer valor numerico entero:\n");
	scanf("%i", &viNumero);
	printf("escribe un segundo valor numerico entero:\n");
	scanf("%i", &viNumero2);

	if (viNumero == viNumero2) {
		printf("Los numeros son iguales");
	}
	else {
		if (viNumero > viNumero2) {
			printf("El numero mayor es el primer valor");
		}
		else
		{
			printf("El numero mayor es el segundo valor");
		}
	}
}

