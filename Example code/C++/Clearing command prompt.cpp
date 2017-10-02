/*
Angel Flores
Project Example Code
2017/10/2 8:16 AM
*/
#include <iostream>
#include <string>

using namespace std;

void clearScreen()
{
 cout << string( 100, '\n' );
}
int main()
{
 char hold = ' ';
 for(int i = 0;i < 10;i++)
 {
  clearScreen();
  cout << "Iteration: " << i << '\n';
 }
 cin >> hold;
}