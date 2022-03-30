#include <iostream>
using namespace std;

int main()
{
  // 변수 선언
  bool x = 123;
  bool y = -8;
  bool z = 0;
  bool t = -0;
  bool u = true;
  bool v = false;

  // 값 출력
  cout << "x의 값: " << x << endl; // 1(true)
  cout << "y의 값: " << y << endl; // 1(true)
  cout << "z의 값: " << z << endl; // 0(false)
  cout << "t의 값: " << t << endl; // 0(false)
  cout << "u의 값: " << u << endl; // 1(true)
  cout << "v의 값: " << v << endl; // 0(false)

  return 0;
}