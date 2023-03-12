#include<iostream>

using namespace std;

int main()
{
    string nome; // palavra
    int suaIdade, minhaIdade; // inteiro
    float salario; // ponto flutuante
    bool verdade; // verdadeiro ou falso
    double bonus; // ponto flutuante
    char sexo; // só uma letra
    const double segundosEmUmMinuto = 60; // imutavel


    
    cout << "Digite seu nome: ";
    cin >> nome;

    cout << endl <<"Digite sua idade: ";
    cin >> minhaIdade;

    cout << endl <<"Digite seu salario: ";
    cin >> salario;

    cout << endl <<"E verdade? ";
    cin >> verdade;

    cout << endl <<"Digite seu bonus: ";
    cin >> bonus;

    cout << endl <<"Digite seu sexo: ";
    cin >> sexo;


    cout << nome << endl << minhaIdade << endl << salario << endl << verdade << endl << bonus << endl <<sexo;

}