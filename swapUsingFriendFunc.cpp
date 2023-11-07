#include<iostream>
using namespace std;

class Swap {
  private:
    int a, b;
  public:
    void getData() 
   {
      cout << "Enter Two Numbers: "<<endl;
      cin >> a >> b;
       cout<<a<<endl;
       cout<<b<<endl;
    }
  
  void display() {
      
    cout<< a << " " << b << endl;
  }
  friend void swapnumber(Swap & s);
};

void swapnumber(Swap & s) {
  int temp;
  temp = s.a;
  s.a = s.b;
  s.b = temp;
}

int main() {

  Swap obj;

  obj.getData();
  cout<<"Before Swapping:"<<endl;
  obj.display();

  swapnumber(obj);
  cout << "After swapping" << endl;
  obj.display();
  return 0;
}
