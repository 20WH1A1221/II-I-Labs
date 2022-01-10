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
         void display(){
              cout<<"value of a is"<<a<<endl;
         }
};
class derived:public Base{
           public:
               int b;
               derived(){
                  a=10;
               }
               void read(){
                    cout<<"enter the value of b"<<endl;
                    cin>>b;
               }
               void display(){
                    cout<<"value of a is"<<a<<endl<<"value of b is"<<b<<endl;
               }
};
int main(){
    Base obj1;
    derived obj2;
    obj1.read();
    obj1.display();
    obj2.read();
    obj2.display();
    return 0;
}                  
