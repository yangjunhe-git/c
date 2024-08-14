#include<iostream>
using namespace std;
int main(){
    int x=10;
    int *p=&x;
    cout<<p;
    cout<<*p;
    *p=*p+2;
    cout<<x;
    return 0;
}