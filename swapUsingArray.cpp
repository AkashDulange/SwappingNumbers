#include <iostream>
using namespace std;
class B;
class A
{
  private:
  int a[5];
  public: 
    void getdata(int a1[])
   {
     for(int i=0;i<5;i++)
         {
             a[i]=a1[i];
         }
    }
    void display()
   {
    cout<<"Array A:"<<endl;
    for(int i=0;i<5;i++)
         {
             cout<<a[i]<<" ";
         }
       cout<<endl;
    }
friend void exchange(A &x,B &y);
};


class B
{
  private:
  int b[5];
  public: 
    void getdata(int b1[])
   {
     for(int i=0;i<5;i++)
         {
             b[i]=b1[i];
         }
    }
    void display()
  {
      cout<<"Array B:"<<endl;
    for(int i=0;i<5;i++)
         {
             cout<<b[i]<<" ";
         }
      cout<<endl;
  }
friend void exchange(A &x,B &y);
};

void exchange(A &x,B &y)
{
    int temp[5];
    for(int i=0;i<5;i++)
        {
            temp[i]=x.a[i];
            x.a[i]=y.b[i];
            y.b[i]=temp[i];
        }
}
int main() {
    int a1[5]={1,2,3,4,5};
    int b1[5]={6,7,8,9,10};
    A a;
    B b;
    a.getdata(a1);
    b.getdata(b1);
    cout<<"Before Swapping:"<<endl;
    a.display();
    b.display();
    exchange(a,b);
    cout<<"After Swapping:"<<endl;
    a.display();
    b.display();
    
    return 0;
}
