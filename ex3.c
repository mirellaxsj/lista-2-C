#include <stdio.h>
int main(){
	float salario;
	float descontoINSS;
	float salarioFinal;
	
    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 1212.00) {
        descontoINSS = salario * 0.075;
    } else if (salario <= 2427.35) {
        descontoINSS = salario * 0.09;
    } else if (salario <= 3641.03) {
        descontoINSS = salario * 0.12;
    } else if (salario <= 7087.22) {
        descontoINSS = salario * 0.14;
    } else {
        descontoINSS = 7087.22 * 0.14;
    }

    salarioFinal = salario - descontoINSS;

    printf("Desconto do INSS: R$ %.2f\n", descontoINSS);
    printf("Salário final: R$ %.2f\n", salarioFinal);

    return 0;
}

