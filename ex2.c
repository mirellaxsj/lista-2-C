#include <stdio.h>
int main (){
	float salario;
	float salarioFamilia;
	float salarioFinal;
	int numFilhos;
	
	printf("Digite o salario do funcionario: ");
	scanf("%f" ,&salario);
	
	printf("Digite o numero de filhos: ");
	scanf("%d" ,&numFilhos);
	
	if(salario < 2000){
		salarioFamilia = numFilhos * 45;
		salarioFinal = (salario + salarioFamilia);
	}

	printf("O salario final eh: %2.f\n" ,salarioFinal); 
	
	return 0;
}
