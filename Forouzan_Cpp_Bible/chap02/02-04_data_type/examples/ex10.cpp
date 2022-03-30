#include <iostream>
using namespace std;

int main()
{
  string city;
  string district;
  string streetName;
  string streetNumber;
  string postNumber;

  cout << "시/도 이름: ";
  cin >> city;
  cout << "구 이름: ";
  cin >> district;
  cout << "도로 이름: ";
  cin >> streetName;
  cout << "도로 번호: ";
  cin >> streetNumber;
  cout << "우편 번호: ";
  cin >> postNumber;

  cout << city << ", " << district << ", " << streetName << ", " << streetNumber << ", " << postNumber;

  return 0;
}