#include<iostream>
using namespace std;

class Employee {
private:
string name;
float salary;
public:
//Constructor
Employee(string name, float salary) {
this->name = name;
this->salary = salary;
cout<<"Constructing "<<this->name<<endl;
}
//Destructor
~Employee() {
cout<<"Destructing "<<this->name<<endl;
}
//Getters
string getName() {
return name;
}
float getSalary() {
return salary;
}
//Setters
void setName(string name) {
this->name = name;
}
void setSalary(float salary) {
this->salary = salary;
}
//Friend function
friend float bonus(Employee e);
};

//Defining the friend function
float bonus(Employee e) {
return (e.salary * 55) / 100;
}

int main() {
Employee e1("John", 5000);
cout<<"Employee Name: "<<e1.getName()<<endl;
cout<<"Employee Salary: "<<e1.getSalary()<<endl;
cout<<"Employee Bonus: "<<bonus(e1)<<endl;
return 0;
}
