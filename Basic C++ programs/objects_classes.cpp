#include "iostream"
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string name, int salary, int sp) // constructor
    {
        this->name = name;
        this->salary = salary;
        this->secretpassword = sp;
    }

    void printdetails()
    { // defining module
        cout << "Name: " << this->name << endl;
        cout << "Salary: " << this->salary << endl;
    }

    void getsecretpassword()
    {
        cout << "Password is: " << this->secretpassword << endl;
    }

private:
    int secretpassword;
};

int main()
{
    Employee e("Saksham", 100000, 2345); // constructor called

    // e.salary = 100000;
    // e.name = "Saksham";

    // cout << "Name: " << e.name << endl;
    // cout << "Salary is: " << e.salary << endl;

    e.printdetails();
    e.getsecretpassword();
}