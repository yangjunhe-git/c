#include <iostream>
using namespace std;

struct Student{
	int num;
	string name;
	double height;
} s;

int main() {
	s.num=1;
	s.name="ÕÅÈı";
	s.height=1.72;
	cout<<s.num<<" "<<s.name<<" "<<s.height<<endl;
	Student *p=&s;
	cout<<p->num<<" "<<p->name<<" "<<p->height<<endl;
	cout<<(*p).num<<" "<<(*p).name<<" "<<(*p).height<<endl;
	return 0;
}