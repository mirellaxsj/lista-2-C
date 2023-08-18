#include <stdio.h>
int main() {
    char nomeMercadoria[100];
    float preco; 
	float novoPreco;

    printf("Digite o nome da mercadoria: ");
    fgets(nomeMercadoria, sizeof(nomeMercadoria), stdin);

    printf("Digite o preco da mercadoria: ");
    scanf("%f", &preco);

    if (preco < 1000) {
        novoPreco = preco * 1.05; 
    } else {
        novoPreco = preco * 1.07; 
    }
    
    printf("Nome da mercadoria: %s", nomeMercadoria);
    printf("Novo preco da mercadoria: %.2f\n", novoPreco);

    return 0;
}

