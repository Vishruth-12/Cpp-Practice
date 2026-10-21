#include <iostream>
using namespace std;
int main(){int a[]={12,7,25,4,18};int largest=a[0];for(int x:a)if(x>largest)largest=x;cout<<"Largest: "<<largest<<'\n';}