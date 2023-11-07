#include <iostream>
using namespace std;

class B;
class A
{
 private:
  int v1;
public:
 void getdata(int val)
{
 v1=val;
    }
int display()
{
    return v1;
}
 friend void exchange(A &x, B &y);
};

class B
{
 private:
  int v2;
public:
 void getdata(int val)
{
 v2=val;
    }
int display()
{
    return v2;
}
 friend void exchange(A &x, B &y);
};

void exchange(A &x, B &y)
{
    int temp;
    temp=x.v1;
    x.v1=y.v2;
    y.v2=temp;
}
int main() {
    A a;
    B b;
    a.getdata(10);
    b.getdata(20);
    cout<<"Before Excahnge.."<<endl;
    cout<<"a="<<a.display()<<endl;
    cout<<"b="<<b.display()<<endl;
    exchange(a,b);
    cout<<"After Excahnge.."<<endl;
    cout<<"a="<<a.display()<<endl;
    cout<<"b="<<b.display()<<endl;
    return 0;
}
