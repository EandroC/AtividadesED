#include <iostream>
#include <iomanip>

using namespace std;

typedef struct
{   int matricula;
    char nome[100];
    double nota;
} Aluno;

void busca(Aluno *alunos, int quantidade,int matriculaBuscada);

int main(){
  int i,quantidade=0,matriculaBuscada;
  
  cin>>quantidade;
  
  Aluno alunos[4];
  
  
  for(i=0;i<4;i++){
      cin>>alunos[i].matricula;
      cin.ignore();
      cin.getline(alunos[i].nome,100);
      cin>>alunos[i].nota;
  }
  
  cin>>matriculaBuscada;
  
  busca(alunos,quantidade,matriculaBuscada);
  
  return 0;
}

void busca(Aluno *alunos, int quantidade, int matriculaBuscada){
    int i=0;
    bool busca=false;

     for(i=0;i<quantidade;i++){
        if(alunos[i].matricula==matriculaBuscada){
        cout<<alunos[i].nome<<endl;
        cout << fixed << setprecision(1);
        cout<<alunos[i].nota<<endl;
        busca=true;
        break;
        }
    }

    if(busca==false){
        cout<<"NAO ENCONTRADA"<<endl;
    }
}

