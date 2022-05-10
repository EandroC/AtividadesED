#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

bool primo(int i);

int main ()
{
    int numero1;
    string n1;

    int numero2;
    string n2;

    int verifica= 0;
    bool resultado=false;

    bool i = true;

    while (i)
    {
        cout << "Digite o PRIMEIRO valor inteiro positivo:\n";
        cin >> n1;
        verifica = atoi(n1.c_str());

        if(verifica<= 0)
        {
            cout << "\nO PRIMEIRO valor deve ser um inteiro positivo\n" << endl;
        }
        else
        {
            numero1 = verifica;
            i = false;
        }
    }

    i = true;

    while (i)
    {
        cout << "Digite o SEGUNDO valor inteiro positivo:\n";
        cin >> n2;
        verifica = atoi(n2.c_str());

        if(verifica<= 0 || verifica<numero1)
        {
            cout << "\nO SEGUNDO valor deve ser um inteiro positivo e maior que o primeiro valor\n" << endl;
        }
        else
        {
            numero2 = verifica;
            i = false;
        }

    }

    for(int i = numero1;i<=numero2;i++)
    {
        resultado = primo(i);
        if(resultado==true)
        {
            cout << i;
            cout<<"\n";
        }

    }

}

bool primo(int verifica)
{
    int cont=0;
    for(int i = 1; i <= verifica;i++)
    {
        if(verifica%i==0)
        {
            cont++;
        }
    }

    if(cont==2)
    {
        return true;
    }else
    {
        return false;
    }
}


