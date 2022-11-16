#include<iostream>
#include <stdio.h>
using namespace std;

void update(int *a,int *b) {
   int atemp= *a+*b;
   int btemp =abs(*a-*b);
   *a=atemp;
   *b=btemp;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);
    return 0;
}
