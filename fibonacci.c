/*Rodrigo Mayett Guzman
el programa imprime los numeros de la serie de fibonacci*/
#include <stdio.h>
//metodo iterativo fibonacci
int fibonacci(int n){
	int a=0,b=1,c;
	if (n<2)
	{
		return n;
	}
	for (int i = 1; i < n; ++i){
		c=a+b;
		a=b;
		b=c;
		printf("el fibonacci de: %d es: %d\n",i+1,c);
	}
	return c;
}
//metodo recursivo de fibonacci
int fibonaccirec(int n){
	if (n<2)
	{
		return n;
	}
	return fibonacci(n-2)+fibonacci(n-1);
}
//metodo principal del programa
int main()
{
	
	fibonacci(201);
	//fibonaccirec(201);	
	return 0;
}