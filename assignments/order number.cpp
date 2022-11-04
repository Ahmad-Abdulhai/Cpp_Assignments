#include <iostream>
#include <stdarg.h>
using namespace std;
const int N = 1e5+7;
int x[N];
int sort_number (int num1 ...);

int sort_number ( int  num1, ...)
{
    va_list myList;
    va_start(myList,num1);
    for(int i=0; i<num1; i++){
        x[i]= va_arg(myList, int );
    }
    va_end(myList);
    cout<<"-------------------"<<endl;
    int t=0;
    for(int i=0 ; i<num1-1 ; i++)
        for(int j=i+1 ; j<num1 ; j++)
            if(x[j]<x[i])
            {
                t=x[j];
                x[j]=x[i];
                x[i]=t;
            }
    for(int i = 0; i<num1 ; i++)
        cout<<x[i]<<endl;
    return 0;

}
int sort_number1(int num1,...)
{
    va_list myList;
    va_start(myList,num1);
    for(int i=0; i<num1; i++){
        x[i]= va_arg(myList, int );
    }
    va_end(myList);
    cout<<"-------------------"<<endl;
    int t=0;
    for(int i=0 ; i<num1-1 ; i++)
        for(int j=i+1 ; j<num1 ; j++)
            if(x[j]>x[i])
            {
                t=x[j];
                x[j]=x[i];
                x[i]=t;
            }
    for(int i = 0; i<num1 ; i++)
        cout<<x[i]<<endl;
    return 0;
}
int main()
{
    int n;
    char L;
    cout<<"Enter your type of sorting Ascending or Descendant[A,D]"<<endl;
    cin>>L;
    cout<<"Enter the number whould you sort"<<endl;
    cin>>n;
    cout<<"----------------------"<<endl;
      if(L=='A')
      {
        sort_number(n,10,41,47,8,4,3,1323,6);
      }
      else
        sort_number1(n,10,41,47,8,4,3,1323,6);



    return 0;
}
