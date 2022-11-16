#include <iostream>
using namespace std;
double reversemat(double *arr,int n);
double reversemat(double *arr,int n)
{ double temp;

   for(int i=0 ;i<n/2;i++)
    {
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout<<"your matrix after revers!: "<<endl;
    cout<<"  [";
    for(int x=0 ;x<n;x++)cout<<*(arr+x)<<" ";
    cout<<"]"<<endl;
        return 0;
}

int main()
{   double arr[100]={0};
    double x[100]={0};
    int n;
    cout<<"Enter the number of your matrix whould you reverse: "<<endl;
    cin>>n;
    cout<<">> ";
    for(int i =0 ; i<n ; i++)   cin>>x[i];
       reversemat(&x[0],n);

    return 0;


}
