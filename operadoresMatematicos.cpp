#include<iostream>

using namespace std;

int main()
{
    int x = 20;
    int y = 5;
    int z = 10;
    int soma = x + y + z;
    int subtracao = x - y - z;
    int multiplicacao = x * z;
    int divisao = x / y;
    int resto = 6%5;

    cout << "soma: " << soma<< endl;
    cout << "subtracao: " << subtracao << endl;
    cout <<  "multiplicacao: " << multiplicacao << endl;
    cout << "divisao: " << divisao << endl;
    cout << "resto: " << resto << endl;

    cout << "incremento: " << ++x << endl;
    cout << "decremento: " << --x << endl;
}