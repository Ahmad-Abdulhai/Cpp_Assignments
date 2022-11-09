#include <iostream>
using namespace std;
double temp;
double sortx (double arr[],int n,char type_sort);
double sortx (double arr[],int n,char type_sort )
{
    for(int i=0 ; i<n-1 ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(type_sort=='a' && arr[j]<arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
             else if(type_sort=='d' && arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
            cout<<"\nyour matrix after sorting! :"<<endl;
            cout<<"[ ";
    for(int i = 0; i<n ; i++)
        cout<<arr[i]<<"\t"; cout<<"]";
    return 0;
}
int main()
{
    char type_sort;
    int n,z;
    double arr[100]={0};
    bool error = 1;
    while(error){
    cout<<"Enter your type of sorting Ascending or Descendant[a,d]"<<endl;
    cin>>type_sort;
    if(type_sort =='a'||type_sort=='d') error=0;
    else cout<<"Enput Error!! you should input [a or d] !"<<endl<<endl;
    }
    cout<<"Enter the number whould you sort"<<endl;
    cin>>n;
    cout <<" >> ";
    for(int h =0 ; h < n  ;h++)cin>>arr[h];
    cout<<"you will sort this number! :";
    for(int g =0 ; g < n   ;g++)cout<<arr[g]<<"\t";
    cout<<endl<<endl<<"-----------------------------------"<<endl;
        sortx(arr,n,type_sort);


    return 0;
}
