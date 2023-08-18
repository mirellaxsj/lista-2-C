#include <stdio.h>
int main(){
	float a;
	float b;
	float c;
	
	printf("Digite o valor do lado a: ");
	scanf("%f" ,&a);
	
	printf("Digite o valor do lado b: ");
	scanf("%f" ,&b);
	
	printf("Digite o valor do lado c: ");
	scanf("%f" ,&c);
	
	if(a != b && a != c && b != c) {
		printf("Triangulo Escaleno");
	}else if(a == b && a == c){
		printf("Triangulo Equilatero");
	}else{
		printf("Triangulo Isosceles");
	}	
	return 0;
}
	
