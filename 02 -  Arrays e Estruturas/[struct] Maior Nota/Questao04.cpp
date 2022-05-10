#include <iostream>
#include <iomanip> 

using namespace std;

typedef struct
{
    char nome[80];
    int matricula;
    char disciplina[120];
    double nota;
} Aluno;

void recebeDados();
void resultado(Aluno *alunos);

int main()
{
    recebeDados();
 
    return 0;
}

void recebeDados(){
    Aluno alunos[2];
    int i;

    for(i=0;i<2;i++){
        cin>>alunos[i].nome;
        cin>>alunos[i].matricula;
        cin.ignore();
        cin>>alunos[i].disciplina;
        cin>>alunos[i].nota;
    }
    resultado(alunos);
}

void resultado(Aluno *alunos){
    
    int i=0;

    if(alunos[i].nota==alunos[i+1].nota){
        
    cout<<alunos[i].nome<<" e "<<alunos[i+1].nome<<" , ";
    cout << fixed << setprecision(1);
    cout<<alunos[i].nota<<endl;
    
    }else if(alunos[i].nota>alunos[i+1].nota){
        
    cout<<alunos[i].nome<<" , ";
    cout << fixed << setprecision(1);
    cout<<alunos[i].nota<<endl;
    
    }else{
        
    cout<<alunos[i+1].nome<<" , ";
    cout << fixed << setprecision(1);
    cout<<alunos[i+1].nota<<endl;
    
    }
}
