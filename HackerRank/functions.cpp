#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a ,int b , int c, int d );
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four( int a , int b ,int c , int d )
{  int MAX;
  int m[4]={ a , b , c , d};
    MAX = m[0];
     for(int j =0 ; j<4 ; j++)
     {
         if(MAX<m[j]) MAX= m[j];
     }
     return MAX;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
