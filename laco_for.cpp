#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << "\n";
    }

    // loop externo
    for (int i = 1; i <= 2; ++i)
    {
        cout << "externo: " << i << "\n"; // executa 2 vezes

        // loop interno
        for (int j = 1; j <= 3; ++j)
        {
            cout << " interno: " << j << "\n"; // executas 6 vezes (2 * 3)
        }
    }

    // for-each é usado para percorrer elementos de uma matriz
    int numeros[5] = {10, 20, 30, 40, 50};
    for (int i : numeros)
    {
        cout << i << "\n";
    }
}