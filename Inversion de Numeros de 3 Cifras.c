#include<stdio.h>
int a,b,c,valor,residuo1,residuo2,residuo3;
int main (){	
	printf("Programa para Inversion de Numeros de 3 Cifras. \n");
	printf("Introduce un numero de 3 cifras: ");
	scanf("%d", &valor);
	a = valor / 100;
	residuo1 = valor%100;
	b = residuo1 / 10;
	residuo2 = residuo1%10;
	c = residuo2 / 1;
	residuo3 = residuo2%1;
	printf("El numero %d en su Forma Invertida es = %d%d%d",valor,c,b,a);
	return 0;
}
