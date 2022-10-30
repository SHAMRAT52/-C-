#include<iostream>
using namespace std;

int main()
{
    int x,y;
    x=4,y=5;

    cout<<"The logical AND operator is= "<<(x>3 && x<5); //Logical AND operator.
    cout<<"\n The logical OR operator is= "<<(x>3 || x<2);//Logical OR operator.
    cout<<"\nThe logical NOT operator is ="<<!(x<5);//Logical NOT operator.

    return 0;
}
