#include<bits/stdc++.h>
using namespace std;
int main(){
  int x=10;
  int y=x;
  y=x+2;
  cout<<x<<endl;
  int *p=&x;
  *p=*p+2;
  cout<<x<<endl;
  return 0;
}
