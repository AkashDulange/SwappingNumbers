#include <iostream>
using namespace std;
class Swap
{
 public:
 int a,b,temp;
 void swapnumbers(int n1,int n2)
{
    a=n1;
    b=n2;
    cout<<"Before Swapping:"<<endl;
    cout<<a<<" "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
}
void display()
{
    cout<<"After Swapping:"<<endl;
    cout<<a<<" "<<b<<endl;
}
};
int main() {
    Swap obj;
    obj.swapnumbers(5,10);
    obj.display();
    return 0;
