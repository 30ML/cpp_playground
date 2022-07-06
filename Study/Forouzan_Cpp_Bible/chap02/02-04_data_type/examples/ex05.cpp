#include <iostream>
using namespace std;

int main()
{
  int first;
  int second;
  int third;
  int fourth;
  int sum;

  cout << "4개의 숫자를 입력하세요: ";
  cin >> first >> second >> third >> fourth;

  sum = first + second + third + fourth;

  cout << "총합: " << sum;

  return 0;
}