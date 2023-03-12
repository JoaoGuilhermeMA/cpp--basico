#include <iostream>
using namespace std;

int main()
{
  int dia = 5;
  switch (dia)
  {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
  }
  // é pra sair Friday (dia 5)
  cout << endl;

  int day = 4;
  switch (day)
  {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
  } 
}
  // É pra sair == "Looking forward to the Weekend"