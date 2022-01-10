#include <iostream>
#include <string.h>
using namespace std;
class Base{
      public:
         int a;
         void read(){
              cout<<"enter the value of a"<<endl;
              cin>>a;
         }
         virtual void display()=0;
};        
class derived:public Base{
      public:
          int b;
          derived(){
              b=15;
          }                  
          void display(){
                cout<<"value of b"<<b<<endl;
          }
};
int main(){
    Base *ptr;
    derived obj;
    ptr=&obj;
    ptr->read();
    ptr->display();
    return 0;
}    
