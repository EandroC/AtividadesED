#include <iostream>

using namespace std;

int matriz[3][3];
int vetLinhas[3];
int vetColunas[3];

void criarMatriz();
//void exibirMatriz();
int somaDiagonalPrincipal();
int somaDiagonalSecundaria();
void somaLinhas();
void somaColunas();
int testaVetorLinha();
int testaVetorColuna();

int main(void) {

    criarMatriz();
    //exibirMatriz();

    int somaDPrincipal = 0, somaDSecundaria = 0;

    somaDPrincipal = somaDiagonalPrincipal();
	somaDSecundaria = somaDiagonalSecundaria();

	somaLinhas();
	somaColunas();

	int testaLinha, testaColuna;

	testaLinha = testaVetorLinha();
	testaColuna = testaVetorColuna();

	if (testaLinha && testaColuna && somaDPrincipal == somaDSecundaria && somaDPrincipal == vetLinhas[0]) {
		cout << "sim";
	} else {
		cout << "nao";
	}

	return 0;
}
void criarMatriz() {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
            cin >> matriz[i][j];
		}
	}
}

/*void exibirMatriz() {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			cout << matriz[i][j];
		}
		cout << "\n";
	}
}*/

int somaDiagonalPrincipal() {
	int i, soma = 0;
	for (i = 0; i < 3; i++) {
		soma += matriz[i][i];
	}
	return soma;
}

int somaDiagonalSecundaria() {
	int i, soma = 0;
	for (i = 0; i < 3; i++) {
		soma += matriz[i][3-i-1];
	}
	return soma;
}

void somaLinhas() {
	int i, j;
	for (i = 0; i < 3; i++) {
		vetLinhas[i] = 0;
		for (j = 0; j < 3; j++) {
			vetLinhas[i] += matriz[i][j];
		}
	}
}

void somaColunas() {
	int i, j;
	for (j = 0; j < 3; j++) {
		vetColunas[j] = 0;
		for (i = 0; i < 3; i++) {
			vetColunas[j] += matriz[i][j];
		}
	}
}

int testaVetorLinha() {
	int i;
	for (i = 1; i <  3; i++) {
		if (vetLinhas[i] != vetLinhas[i-1]) {
			return 0;
		}
	}
	return 1;
}

int testaVetorColuna() {
	int i;
	for (i = 1; i <  3; i++) {
		if (vetColunas[i] != vetColunas[i-1]) {
			return 0;
		}
	}
	return 1;
}