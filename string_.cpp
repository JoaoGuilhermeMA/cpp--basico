#include<iostream>

using namespace std;

int main() 
{
    //contenação de string
    string primeiroNome = "Joao ";
    string sobrenome = "Guilherme";
    string nomeComposto = primeiroNome + sobrenome;

    cout << nomeComposto << endl;
    
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName << endl;
    //

    //tamanho da string
    string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << alfabeto.length() << endl;
    cout << alfabeto.size() << endl;

    //acessar posições especificas de uma sting
    string minhaString = "Ola";
    cout << minhaString[0] << endl;
    // a saida deve ser "O"

    string myString = "rola";
    myString[0] = 'J';
    cout << myString << endl;
    // a saida deve ser "Jola" inves de "rola"
    //

    //caracteres especiais
    string txt = "We are the so-called \"Vikings\" from the north.";
    cout << txt << endl;
    //

    

}