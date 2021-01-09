// Programa em C++ para cacular as Quatro Operações Aritméticas Básicas dado dois valores inteiros fornecidos pelo usuário.
// Código comentado por: Nathalia Toyonaga Rodrigues

// Usa os códigos do Dev C++
#include<stdio.h> 

// função principal
int main() {
	// as variaveis "valor1" e "valor2" são do tipo "int", ou seja, são numeros inteiros decimal e atribuiu o valor de "0" nas variaveis.
	int valor1, valor2 = 0;
	// as variaveis "soma", "subtracao", "multiplicacao" e "divisao" são do tipo FLOAT (que possui casas decimais).
	float soma, subtracao, multiplicacao, divisao;
	// mostra ao usuario que ele forneça o primeiro valor.
	printf("Informe o primeiro valor: ");
	// o valor digitado foi atribuido a variavel "valor1".  
	scanf("%d", &valor1);
	// mostra na tela para o usuario inserir o segundo valor
	printf("Informe o segundo valor: ");
	// o valor digitado foi atribuido a variavel "valor2".  
	scanf("%d", &valor2);
	// a soma dos valores das variaveis "valor1" e "valor2" será atribuido a variavel "soma".
	soma = (valor1 + valor2);
	// a subtracao dos valores das variaveis "valor1" e "valor2" será atribuido a variavel "subtracao".
	subtracao = valor1 - valor2;
	// a multiplicacao dos valores das variaveis "valor1" e "valor2" será atribuido a variavel "multiplicacao".
	multiplicacao = valor1 * valor2;
	// a divisão dos valores das variaveis "valor1" e "valor2" será atribuido a variavel "divisao".
	divisao = valor1 / valor2;
	// mostra ao usuario o resultado final da variavel soma. 
	//Na exibição do resultado soma, o ".0" antes do "f" mostra a qtdade de casas decimais que eu quero que o programa exiba depois da virgula, nesse caso, nenhum. 
	printf("\n O resultado da soma entre os dois valores eh: %.0f", soma);
	// mostra ao usuario o resultado final da variavel subtracao.
	printf("\n O resultado da subtracao entre os dois valores eh: %.0f", subtracao);
	// mostra ao usuario o resultado final da variavel multiplicação.
	printf("\n O resultado da multiplicao entre os dois valores eh: %.0f", multiplicacao);
	// mostra ao usuario o resultado final da variavel divisão. 
	printf("\n O resultado da divisao entre os dois valores eh: %.0f", divisao);
	//fim do programa
	return 0;
}
