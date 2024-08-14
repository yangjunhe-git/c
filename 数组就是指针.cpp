#include<iostream>
using namespace std;
int main(){
    int a[100]=[10,20,30,40,50];
    cout<<a<<" "<<&a<<" "<<&a[0]<<endl;
    int *p=a;
    cout<<p<<" "<<a[0]<<endl;
    *p=*p+2;
    cout<<p<<" "<<a[0]<<endl;
    p++;
    *p=*p+2;
    cout<<p<<" "<<a[1];
    return 0
}