#include <iostream>

using namespace std;

int main()
{ int i =0;
  int id , d[5];
  int age , a[5];
  int level , l[5];
string name;
string n[5];

    while(i<5)
    {
     cout<<" Enter the name of student:\n";
     cin>>name;
     cout<<"Enter the Age of student:\n";
     cin>>age;
     cout<<"Enter the ID of student:\n";
     cin>>id;
     cout<<" Enter the level of student:\n";
     cin>>level;
     n[i]= name;
     a[i]= age;
     d[i]=id;
     l[i]= level;
     i++;
    }
    for(i=0 ; i<4 ; i++ )
        {
       cout<<"name: "<<n[i]<<endl<<endl;
       cout<<"Age: "<<a[i]<<endl<<endl;
       cout<<"ID: "<<d[i]<<endl<<endl;
       cout<<"Level: "<<l[i]<<endl<<endl;
        }
    return 0;
}
