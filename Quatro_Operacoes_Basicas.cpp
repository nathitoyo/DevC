// Programa em C++ para cacular as Quatro Opera��es Aritm�ticas B�sicas dado dois valores inteiros fornecidos pelo usu�rio.
// C�digo comentado por: Nathalia Toyonaga Rodrigues

// Usa os c�digos do Dev C++
#include<stdio.h> 

// fun��o principal
int main() {
	// as variaveis "valor1" e "valor2" s�o do tipo "int", ou seja, s�o numeros inteiros decimal e atribuiu o valor de "0" nas variaveis.
	int valor1, valor2 = 0;
	// as variaveis "soma", "subtracao", "multiplicacao" e "divisao" s�o do tipo FLOAT (que possui casas decimais).
	float soma, subtracao, multiplicacao, divisao;
	// mostra ao usuario que ele forne�a o primeiro valor.
	printf("Informe o primeiro valor: ");
	// o valor digitado foi atribuido a variavel "valor1".  
	scanf("%d", &valor1);
	// mostra na tela para o usuario inserir o segundo valor
	printf("Informe o segundo valor: ");
	// o valor digitado foi atribuido a variavel "valor2".  
	scanf("%d", &valor2);
	// a soma dos valores das variaveis "valor1" e "valor2" ser� atribuido a variavel "soma".
	soma = (valor1 + valor2);
	// a subtracao dos valores das variaveis "valor1" e "valor2" ser� atribuido a variavel "subtracao".
	subtracao = valor1 - valor2;
	// a multiplicacao dos valores das variaveis "valor1" e "valor2" ser� atribuido a variavel "multiplicacao".
	multiplicacao = valor1 * valor2;
	// a divis�o dos valores das variaveis "valor1" e "valor2" ser� atribuido a variavel "divisao".
	divisao = valor1 / valor2;
	// mostra ao usuario o resultado final da variavel soma. 
	//Na exibi��o do resultado soma, o ".0" antes do "f" mostra a qtdade de casas decimais que eu quero que o programa exiba depois da virgula, nesse caso, nenhum. 
	printf("\n O resultado da soma entre os dois valores eh: %.0f", soma);
	// mostra ao usuario o resultado final da variavel subtracao.
	printf("\n O resultado da subtracao entre os dois valores eh: %.0f", subtracao);
	// mostra ao usuario o resultado final da variavel multiplica��o.
	printf("\n O resultado da multiplicao entre os dois valores eh: %.0f", multiplicacao);
	// mostra ao usuario o resultado final da variavel divis�o. 
	printf("\n O resultado da divisao entre os dois valores eh: %.0f", divisao);
	//fim do programa
	return 0;
}
