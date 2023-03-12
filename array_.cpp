#include <iostream>
using namespace std;

int main()
{
    string carros[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    int numeros[3] = {10, 20, 30};

    // acesso a 1 elemento do array
    cout << carros[1] << endl;
    // a saida deve ser BMW
    cout << numeros[0] << endl;
    // a saida deve ser 10

    // mudar elemento de um array
    carros[0] = "Opel";
    cout << carros[0] << endl;
    // a saida deve ser Opel

    // loops em array
    string carros2[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++)
    {
        cout << i << " = " << carros2[i] << "\n";
    }

    // for-each
    int numeros2[5] = {10, 20, 30, 40, 50};
    for (int i : numeros2)
    {
        cout << i << "\n";
    }

    // outra forma de percorrer uma array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(myNumbers) / sizeof(int); i++)
    {
        cout << myNumbers[i] << "\n";
    }

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // array multi-dimensional
    string letras[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}};

    cout << letras[0][2]; // saida deve ser "C"
    // loop
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letras[i][j] << "\n";
        }
    }

    string letters[2][2][2] = {
        {{"A", "B"},
         {"C", "D"}},
        {{"E", "F"},
         {"G", "H"}}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    cout << "/////////////////////////////////////////////////////////////////////////////////////////" << endl;
    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
        {0, 1, 1, 0},
        {0, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0}};

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4)
    {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << "Choose a row number between 0 and 3: ";
        cin >> row;

        // Ask the player for a column
        cout << "Choose a column number between 0 and 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column])
        {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << "Hit! " << (4 - hits) << " left.\n\n";
        }
        else
        {
            // Tell the player that they missed
            cout << "Miss\n\n";
        }

        // Count how many turns the player has taken
        numberOfTurns++;
    }

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
}