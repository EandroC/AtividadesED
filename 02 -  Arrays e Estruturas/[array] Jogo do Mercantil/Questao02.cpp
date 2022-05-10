#include <iostream>

using namespace std;

void analisa(float*valorReal, float *jogador1, string *jogador2, int quantidade);

int main(void) {

    int quantidade;

    cin >> quantidade;

    float valorReal[quantidade];
    float jogador1[quantidade];
    string jogador2[quantidade];

    int i;
    
    for(i=0;i<quantidade;i++){
        cin >> valorReal[i];
    }
     for(i=0;i<quantidade;i++){
        cin >> jogador1[i];
    }
    cin.ignore();
     for(i=0;i<quantidade;i++){
        cin >> jogador2[i];
    }


   analisa(valorReal,jogador1,jogador2,quantidade);
}

void analisa(float*valorReal, float *jogador1, string *jogador2, int quantidade){
int i;
int pontuacao1=0, pontuacao2=0;

for(i=0;i<quantidade;i++){
    if(jogador1[i]==valorReal[i]){
        pontuacao1++;
    }else if(jogador1[i]>valorReal[i]&&jogador2[i]=="m"){
        pontuacao2++;
    }else if(jogador1[i]<valorReal[i]&&jogador2[i]=="M"){
        pontuacao2++;
    }else if(jogador1[i]<valorReal[i]&&jogador2[i]=="m"){
        pontuacao1++;
    }else if(jogador1[i]>valorReal[i]&&jogador2[i]=="M"){
        pontuacao1++;
    }
}
    if(pontuacao1>pontuacao2){
        cout<<"primeiro";
    }else if(pontuacao1<pontuacao2){
        cout<<"segundo";
    }else{
        cout<<"empate";
    }
}

