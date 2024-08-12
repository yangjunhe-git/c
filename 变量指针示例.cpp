#include<bits/stdc++.h>
using namespace std;

int main(){
  int x=10;
  //定义指针指向x地址
  //&取变量的地址
  //p是int*类型
  int *p=&x;
  //p地址*p不是地址
  cout<<p<<endl;
  cout<<*p<<endl;
  //通过指针修改变量值
  *p=*p+2;
  cout<<*p<<endl;
  p=p+2;
  return 0;
}
