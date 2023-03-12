#include <iostream>
using namespace std;

int main()
{
    // para o loop ser i == 4
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }

    // interrompe a interação ATUAL e volta para o inico se i == 4
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << "\n";
    }

    // no while
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            break;
        }
    }

    int b = 0;
    while (b < 10)
    {
        if (b == 4)
        {
            b++;
            continue;
        }
        cout << b << "\n";
        b++;
    }
}