#include<iostream>
#include<cmath>
using namespace std;

int getSum(int num)
{
  int sum = 0;
  while (num>0)
  {
    sum+= (num%10)*(num%10);
    num /= 10;
  }
  return sum;
}

bool isHappy(int n)
{
  if (n == 1)
  {
    return n;
  }
  else if(n<=9){
    return false;
  }
  return isHappy(getSum(n));

}

int main(){
  int num = 52;
  cout<<isHappy(2);
}