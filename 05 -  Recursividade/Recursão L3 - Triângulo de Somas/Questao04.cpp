#include <iostream>

using namespace std;

void printVetor(int *v, int n){
    if(n>0){
        printVetor(v,n-1);
        cout <<v[n-1]<<" ";
    }
}


void triangulo(int* v, int n){

    if(n>0){
        int aux[n-1];
        for(int i=0;i<n;i++){
            aux[i]=v[i]+v[i+1];
        }
        triangulo(aux,n-1);

        cout<<"[";
        printVetor(v,n);
        cout<<"]\n";

    }
}


int main()
{
   int n;

   cout<<"n:";
   cin>>n;

   int v[n];

   cout<<"vetor:";

   for(int i=0;i<n;i++){
        cin>>v[i];
   }
    triangulo(v,n);
    return 0;
}
