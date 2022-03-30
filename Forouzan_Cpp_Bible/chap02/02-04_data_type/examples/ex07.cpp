#include <iostream>
#include <string>
using namespace std;

int main()
{
  string firstName;
  string lastName;
  string fullName;
  char space = ' ';
  char comma = ',';

  cout << "성을 입력하세요: ";
  cin >> lastName;
  cout << "이름을 입력하세요: ";
  cin >> firstName;

  fullName = firstName + comma + space + lastName;

  cout << "서양식 이름 표현: " << fullName << endl;

  cout << "서양식 이름 표현: " << firstName << comma << space << lastName;

  return 0;
}