#include<stdio.h>

int main (){	
	printf("Programa para Inversion de Numeros de 3 Cifras. \n");
	printf("Introduce el Primer Numero: ");
	int numero1 = 0;
	scanf("%d", &numero1);
	printf("Introduce el segundo Numero: ");
	int numero2 = 0;
	scanf("%d", &numero2);
	printf("Introduce el Tercer Numero: ");
	int numero3 =0;
	scanf("%d", &numero3);
	printf("El numero %d%d%d en su Forma Invertida es = %d%d%d", numero1,numero2,numero3,numero3,numero2,numero1);
	return 0;
}
