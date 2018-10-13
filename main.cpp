#include <iostream>
#include "./greetings.h"
using namespace std;

const double PI = 3.14159;
const char newline = '\n';


int addition (int a, int b) {
  return a + b;
}

void duplicate (int& a)
{
  a *= 2;
}

int main()
{
  hello();

  int a = 2, b = 4;
  cout << addition(a, b) << newline;

  // Passing by reference
  duplicate(a);
  cout << a << newline;

  double r = 5.0, circle = 2 * PI * r;
  cout << circle << newline;

  int age;
  cin >> age;
  if (age % 2 == 0) {
    cout << "The number was beautiful." << newline;
  } else {
    cout << "The number was ugly." << newline;
  }

  for (int n = 10; n > 0; n--) {
    cout << n << ", ";
  }
  cout << "liftoff!" << newline;

  return 0;
}
