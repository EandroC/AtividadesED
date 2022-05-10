#include <iostream>

using namespace std;

typedef struct
{
    char nome[80];
    int matricula;
    char disciplina[120];
    double nota;
} Aluno;

void recebeDados();
void resultado(Aluno novoAluno);

int main()
{
    recebeDados();
    //cout << "Hello world!" << endl;
    return 0;
}

void recebeDados(){
    Aluno novoAluno;

    cin>>novoAluno.nome;
    cin>>novoAluno.matricula;
    cin.ignore();
    cin>>novoAluno.disciplina;
    cin>>novoAluno.nota;
    
    resultado(novoAluno);
}

void resultado(Aluno novoAluno){

    if(novoAluno.nota>=7){
    cout<<novoAluno.nome<<" aprovado(a) em "<<novoAluno.disciplina <<endl;
    }else{
    cout<<novoAluno.nome<<" reprovado(a) em "<<novoAluno.disciplina <<endl;
    }
}
