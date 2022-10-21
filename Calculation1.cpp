#include<iostream>
using namespace std;

int main()
{

    int a=100;
    int sum=a+100;

    cout<<"The result of sum is="<<sum;



    int sum1;
    sum1=sum+100;


    cout<< "\nThe result of sum1 is="<<sum1;


    int sum2=10;
    int sum3=10;;

    sum2+=sum1;
    sum3-=sum2;


    cout<<"\nThe result (addition)of sum2 is="<<sum2;
    cout<<"\n The result (Substraction) of sum3 is="<<sum3;



    return 0;

}
