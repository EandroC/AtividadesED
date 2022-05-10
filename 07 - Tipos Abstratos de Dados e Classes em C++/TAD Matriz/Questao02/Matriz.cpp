// Implementacao do TAD Matriz
#include "Matriz.h"
#include <iostream>
#include <ostream>
#include <iomanip>

using namespace std;

Matriz::Matriz(int l, int c){
    this->_l = l;
    this->_c = c;

    _M = new float*[_l];
    for (int i = 0; i < _l; ++i){
        float *v = new float[_c];
        _M[i]=v;
    }
}

Matriz::~Matriz(){
    for(int i=0;i<_l;i++){
        delete[] _M[i];
    }
    delete[] _M;

    std::cout<<"matriz liberada"<<endl;
}

int Matriz::linhas(){
    return _l;
}

int Matriz::colunas(){
    return _c;
}

void Matriz::imprime(int largura){
    for(int i=0;i<_l;i++){
        for(int j=0;j<_c;j++){
            cout<<setw(largura)<<_M[i][j];
        }
        cout<<"\n";
    }
}

float Matriz::valor(int i, int j){
    return _M[i][j];
}

void Matriz::atribui(float v, int i, int j){
    _M[i][j]=v;
}

Matriz *Matriz::soma(Matriz *B){

    if(this->_l==B->_l&&this->_c==B->_c){

        Matriz* C=new Matriz(B->_l,B->_c);
        float resultado;

        for(int i=0;i<B->_l;i++){
            for(int j=0;j<B->_c;j++){
                resultado=this->_M[i][j]+B->_M[i][j];
                C->atribui(resultado, i,j);
            }
        }
        return C;
    }else{
       return nullptr;
    }

}

Matriz *Matriz::multiplica(Matriz *B){

    if(this->_c==B->_l){

        Matriz* C=new Matriz(B->_l,B->_c);
        float resultado;

        for(int i=0;i<B->_l;i++){
            for(int j=0;j<B->_c;j++){
                resultado=0;
                for(int r=0;r<B->_l;r++){
                    resultado+=this->_M[i][r]*B->_M[r][j];
                }
                C->atribui(resultado, i,j);
            }
        }
        return C;
    }else{
        return nullptr;
    }

}

