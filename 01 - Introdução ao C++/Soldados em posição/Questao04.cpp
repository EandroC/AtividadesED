#include <iostream>

using namespace std;

int matriz[3][3];

void criarMatriz();
//void exibirMatriz();
int somaColunas();


int main(void) {

int resultado=0;

    criarMatriz();
    //exibirMatriz();

  resultado=somaColunas();
    cout<<resultado;
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

int somaColunas() {
	int i, j;
	int vetor[3];
	int contador=0;
	int soma=0;

	for (j = 0; j < 3; j++) {
		for (i = 0; i < 2; i++) {
            if(matriz[i][j]>matriz[i+1][j])
            contador++;
			vetor[j]=contador;
		}
        contador=0;
	}
	for(i=0;i<3;i++){
        soma+=vetor[i];
	}
	return soma;
}

