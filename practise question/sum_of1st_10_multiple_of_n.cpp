#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "enter the number: ";
  cin >> n;
  int sum = 0;

  for (int i = 1; i <= 10; i++)
  {
    int counter = n * i;
    sum += counter;
  }
  cout << sum;

  return 0;
}