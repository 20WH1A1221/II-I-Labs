#include <iostream>
#include <cstring>
using namespace std;
class Employee{
	public:
		int EID;
		string name;
		int basic_salary;
		float DA,IT, net_salary;
		void read(){
			cout<<"Enter the employee ID: "<<endl;
			cin>>EID;
			cout<<"Enter employee name: "<<endl;
			cin>>name;
			cout<<"Enter employee basic salary: "<<endl;
			cin>>basic_salary;
			cout<<"Enter employee DA: "<<endl;
			cin>>DA;
			cout<<"Enter employee IT: "<<endl;
			cin>>IT;
		}
		void net_sal(){
			net_salary = basic_salary + DA - IT;
		}
		void display(){
			cout<<endl<<"The details of employee are"<<endl;
			cout<<"Employee ID is: "<<EID<<endl;
			cout<<"Employee name is: "<<name<<endl;
			cout<<"Employee Basic Salary is:"<<basic_salary<<endl;
			cout<<"DA is:"<<DA<<endl;
			cout<<"IT is:"<<IT<<endl;
			cout<<"Employee net salary is: "<<net_salary<<endl;
		}
};
int main(){
	Employee e;
                  e.read();
	      e.net_sal();
	      e.display();
	return 0;
}
