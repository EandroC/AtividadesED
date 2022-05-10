#include <iostream>
#include <string.h>

using namespace std;

void ordena(char** v, int n){
    
    for(int i =0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            
            if(strcmp(v[j],v[j+1])>0){
                char* aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}

int main()
{
    int n,i;
    cin>>n;

    char** v= new char *[n];

    int l;
    char *aux;
    
    for(i = 0;i<n;i++){
        cin>>l;
        aux=new char[l+1];
        cin.ignore();
        cin.get(aux,l+1);
        v[i]=aux;
    }

    ordena(v,n);

    for(i=0; i<n;i++){
        cout<<v[i]<<"\n";
    } 
    
    for(i=0;i<n;i++){
        delete v[i];
    }
    delete[] v;

    return 0;
}

