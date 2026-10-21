#include <iostream>
using namespace std;
class Rectangle{int w,h;public:Rectangle(int x,int y):w(x),h(y){}int area()const{return w*h;}};
int main(){Rectangle r(5,3);cout<<"Area: "<<r.area()<<'\n';}