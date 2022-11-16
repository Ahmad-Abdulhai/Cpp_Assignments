#include <iostream>
using namespace std;
double swapnum (double& num1 , double& num2);
double swapnum (double& num1 , double& num2) {
    double temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    return 0;
}
int main()
{  double x ,y;
    cout<<"Enter tow number whould you swap"<<endl;
    cin>>x>>y;
    cout<<">> number1 = "<<x<<"\tAdress memory  "<<&x<<endl;
    cout<<">> number2 = "<<y<<"\tAdress memory  "<<&y<<endl;
    swapnum(x,y);
    cout<<"--------------------------------";
    cout<<"\nYour number after swap!: "<<endl;
    cout<<"number1 = "<<x<<"\tAdress memory  "<<&x<<endl;
    cout<<"number1 = "<<y<<"\tAdress memory  "<<&y<<endl;
    return 0;
}
