#include <stdio.h>
#include <stdlib.h>
#include <math.h>
<<<<<<< HEAD
=======

int suma(int a , int b){
	return a + b;
}
int resta(int a, int b){
	return a - b;
}

>>>>>>> c7b069300c64701c34d07b40f567bddb320bcf62
int main(){
	int num1 = 12;
	int num2 = 3;
	int op1 = suma(num1,num2);
	printf("%i",op1);
	int op2 = resta(num1,num2);
	printf("%i",op2);
<<<<<<< HEAD
	
=======
	int op3 = multi(num1,num2);
	printf("%i",op3);
>>>>>>> c7b069300c64701c34d07b40f567bddb320bcf62
	return 0;
}