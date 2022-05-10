#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int numero;
string n;

long double euler();
double fatorial();

int main ()
{
    int verifica= 0;

    bool i = true;

    while (i)
    {
        //cout << "Digite um valor inteiro positivo:\n";
        cin >> n;
        verifica = atoi(n.c_str());

        if(verifica<= 0)
        {
            cout << "\nO valor deve ser um inteiro positivo\n" << endl;
        }
        else
        {
            numero = verifica;
            i = false;
        }
    }

    cout << fixed<<setprecision(6);
    //cout << "\n";
    cout << euler() << endl;

}

long double euler()
{
    long double resultado = 0;

    for(; numero >= 0; numero--)
    {
        resultado = resultado + ( 1.0 /fatorial()) ;
    }

    return resultado;
}

double fatorial ()
{
    double resultado = 1.0;

    for(int i = numero; i > 0; i--)
    {
        resultado= resultado * i;
    }

    return resultado;
}
