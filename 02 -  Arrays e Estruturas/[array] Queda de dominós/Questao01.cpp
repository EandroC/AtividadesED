#include <iostream>

using namespace std;

bool analisa(int *dominos, int tamanho);

int main(void) {

    int tamanho;

    cin >> tamanho;

    int dominos[tamanho];

    int i;

    for(i=0;i<tamanho;i++){
        cin >> dominos[i];
    }

    bool resposta = analisa(dominos,tamanho);

    if(resposta==false){
        cout<<"precisa de ajuste";
    }else{
        cout<<"ok";
    }
}

bool analisa(int *dominos, int tamanho){

    for(int i=0;i<tamanho-1;i++){
       if(dominos[i]>dominos[i+1]){
            return false;
            break;
       }
    }
    return true;
   
}
