#include<iostream>
using namespace std;

int main()
{

  int sum1=20;

  sum1=sum1+100;

  cout<<"The  value of sum1 is="<<sum1;

  int sum2;
  sum2=sum1+20;

  cout<<"\nThe  value of sum2 is="<<sum2;

  int sum3= sum1+sum2;

  cout<<"\nThe value of sum3 is ="<<sum3;


cout<<"\n\nfrom here we work with some different types operator";


int a=10,b=5,Result1,Result2;

float Result3;


Result1=a-b;
cout<<"\n\n The result of subtraction is (a=10 & b=5) ="<<Result1;

Result2=a*b;

Result3=a/b;


cout<<"\nThe result of multiplication(a=10 & b=5)  is="<<Result2;

cout<<"\nThe result of multiplication(a=10 & b=5)  is="<<Result2;
cout<<"\n The result of divided is (a=10/ b=5) is="<<Result3;
cout<<"\n The result of modulus is (11 & 5) is="<< 11%5;

cout<<"\n\n The result of ++a(increment) is ="<<++a;
cout<<"\n\n The result of a++(increment) is ="<<a++;


int c=3;
cout<<"\n\n The result of a--(decrement) is ="<<--c;





  return 0;

}
