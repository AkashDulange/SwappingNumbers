#include <iostream>
using namespace std;
int main() {
    int a,b,temp;
    cout<<"Enter the Numbers:"<<endl;
    cin>>a>>b;
    cout<<"Numbers before Swapping"<<endl;
    cout<<a<<" ";
    cout<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"Numbers after Swapping"<<endl;
    cout<<a<<" ";
    cout<<b;
    return 0;
}
