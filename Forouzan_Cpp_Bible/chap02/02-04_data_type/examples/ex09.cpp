#include <iostream>
using namespace std;

int main()
{
  const float comsumptionTax = 0.09;
  int salePrice;

  cout << "판매 금액을 입력하세요: ";
  cin >> salePrice;

  cout << "판매 금액: " << salePrice << endl;
  cout << "소비세: " << salePrice * comsumptionTax << endl;
  cout << "전체 금액: " << salePrice + (salePrice * comsumptionTax);

  return 0;
}