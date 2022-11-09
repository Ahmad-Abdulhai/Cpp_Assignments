#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n ,temp;
     int arr[1000]={0};
     cin>>n;
     for(int i =0 ; i<n ; i++)cin>>arr[i];
     for(int j =0; j<n/2; j++)
     {
     temp=arr[j];
     arr[j]=arr[n-1-j]; 
     arr[n-1-j]=temp;
     }
     for(int g=0 ;g<n; g++)
     cout<<arr[g]<<" ";
     
     
    return 0;
}
