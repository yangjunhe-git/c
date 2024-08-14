#include<bits/stdc++.h>
using namespace std;
int main(){
  int x=10;
  int *p=&x;
  cout<<p;
  cout<<*p;
  cout<<&(*p);//p
  cout<<* &(*p);//*p
  return 0;
}
