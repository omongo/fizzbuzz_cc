#include <iostream>
#include "fizzbuzz.h"

using namespace std;

int input(string, int&);

int main()
{
  int number;
  string prompt = "Please enter a positive integer: ";
  while (input(prompt, number) > 0)
    cout << fizzbuzz(number) << endl;
  return 0;
}

int input(string prompt, int& number)
{
  cout << prompt;
  cin >> number;
  return number;
}

