#include <iostream>
#include <cstring>
using namespace std;
class Employee{
	private:
                           int EID;
		string name;
		int basic_salary;
		float da,IT, net_salary,gross_salary;
	public:
		void read(){
			cout<<"Enter the employee ID: "<<endl;
			cin>>EID;
			cout<<"Enter employee name: "<<endl;
			cin>>name;
			cout<<"Enter employee basic salary: "<<endl;
			cin>>basic_salary;
		}
		void gross_sal(){
			da = (basic_salary * 52)/100;
			gross_salary = basic_salary + da;
		}
		void net_sal(){
			IT = (gross_salary * 30)/100;
			net_salary = gross_salary - IT;
		}
		void display(){
			cout<<endl<<"Employee ID is: "<<EID<<endl;
			cout<<"Employee name is: "<<name<<endl;
			cout<<"DA is: "<<da<<endl;
			cout<<"IT is: "<<IT<<endl;
			cout<<"Employee Gross salary: "<<gross_salary<<endl;
			cout<<"Employee net salary is: "<<net_salary<<endl;
		}
};
int main(){
    int i,n;
    cout<<"Enter number of Employees:"<<endl;
    cin>>n;
    Employee e[n];
    for(i=0;i<n;i++){
	e[i].read();
	e[i].gross_sal();
	e[i].net_sal();
    }
    for(i=0;i<n;i++){
        e[i].display();
    }
     return 0;
}
