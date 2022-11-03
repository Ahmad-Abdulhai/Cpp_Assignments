#include <iostream>
using namespace std;

int fibonacci(int num);
int fibonacci(int num)
{
    if((num==1)||(num==0)) return num;
    else
        return(fibonacci(num-1)+fibonacci(num-2));
}


int main()
{  int num , i;
    cout<<"Enter your number of fibonacci: "<<endl;
    cin>>num;
    cout<<"----------------------------------------------"<<endl;
    while(i<num)
    {
      cout<<fibonacci(i)<<"\t";
      i++;
    }
    return 0;
}
