#include <stdio.h>
int main (){
	
	float preco;
	
	printf("Digite o preco do produto: ");
	scanf("%f",&preco);
	
	if(preco > 1000) {
		preco = preco * 0.92;
	}
	printf("O preco final eh: %2.f\n" ,preco);
	
	return 0;

}
