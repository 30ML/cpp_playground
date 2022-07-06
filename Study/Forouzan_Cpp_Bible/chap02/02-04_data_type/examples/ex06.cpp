#include <iostream>
using namespace std;

int main()
{
  int edge;
  int area;
  int perimeter;

  cout << "정사각형 변의 길이: ";
  cin >> edge;

  area = edge * edge;
  perimeter = edge * 4;

  cout << "면적: " << area << endl;
  cout << "둘레: " << perimeter;

  return 0;
}