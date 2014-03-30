#include <string>

using namespace std;

string from_factor(int number, int factor, string word) {
  string result = "";
  bool divisible_by_factor = number % factor == 0;
  if (divisible_by_factor)
    result = word;
  return result;
}

string fizzbuzz(int number)
{
  string result = "";
  result += from_factor(number, 3, "Fizz");
  result += from_factor(number, 5, "Buzz");
  if (!result.length())
    result = to_string(number);
  return result;
}

