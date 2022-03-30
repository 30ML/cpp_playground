#include <iostream>
using namespace std;

int main()
{
  int hour;
  int minute;
  int second;
  int sum;

  cout << "시간을 입력하세요: ";
  cin >> hour;
  cout << "분을 입력하세요: ";
  cin >> minute;
  cout << "초를 입력하세요: ";
  cin >> second;

  sum = hour * 60 * 60 + minute * 60 + second;

  cout << "총 초: " << sum;

  return 0;
}