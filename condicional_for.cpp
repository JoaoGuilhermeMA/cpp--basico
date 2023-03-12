#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int y = 18;

    // se x for maior que y faça
    if (x > y)
    {
        cout << "x e maior que y" << endl;
    }
    //

    // se x for maior que 18 faça
    if (x > 19)
    {
        cout << "e maior" << endl;
    }
    // senão faça
    else
    {
        cout << "Nao e maior" << endl;
    }
    //

    // se x for maior que 10 faça
    if (x > 22)
    {
        cout << "e maior" << endl;
    }
    // senao se x for igual a 20 faça
    else if (x == 20)
    {
        cout << "igual" << endl;
    }
    //senão faça
    else
    {
        cout << "menor" << endl;
    }
    //

    //if abreviado
    string result = (x > 19) ? "e maior" : "nao e maior";
    cout << result;

    

}