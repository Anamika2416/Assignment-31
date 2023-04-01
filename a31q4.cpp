/*
Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
*/
#include<bits/stdc++.h>
using namespace std;
class Person
{
protected://can be made private as we have made getter setter
    char name[50];
    char address[60];
    long long phone_no;//we can also take unsigned int
};
class Employee:public Person
{
protected://can be made private as we have made getter setter
    int eno;
    char ename[50];
};
class Manager:public Employee
{
   char designation[60], department_name[60];
    float basic_salary;
public:
    float getSalary()
    {
        return basic_salary;
    }
    char * getename()
    {
        return ename;
    }
    void accept()
    {

        cout<<"Enter employee number : ";
        cin>>eno;
        cout<<"Enter employee name : ";
        cin.ignore();
        cin>>ename;
        cout<<"Enter address : ";
        cin.ignore();
        cin>>address;
        cout<<"Enter phone no. :";
        cin>>phone_no;
        cout<<"Enter Designation of  :";
        cin.ignore();
        cin>>designation;
        cout<<"Enter Department name : ";
        cin.ignore();
        cin>>department_name;
        cout<<"Enter salary : ";
        cin>>basic_salary;
    }
    void display()
    {
        cout<<"Employee number : "<<eno<<endl;
        cout<<"Employee name : "<<ename<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Phone number : "<<phone_no<<endl;
        cout<<"Designation : "<<designation<<endl;
        cout<<"Department name : "<<department_name<<endl;
        cout<<"Basic Salary : "<<basic_salary<<endl;
    }
};
int main()
{
    int n,i,temp;
    cout<<"How many managers do u want to Enter ? : ";
    cin>>n;
    Manager m[n];
    for(i=1;i<=n;i++)
    {
        m[i].accept();
    }
    temp=0;
    for(i=1;i<=n;i++)
    {
        if(m[temp].getSalary()<m[i].getSalary())
        {
            temp=i;
        }
    }
    cout<<endl<<"Manager with highest salary is : "<<m[temp].getSalary();
    cout<<endl<<"And,His name is : "<<m[temp].getename()<<endl;
    return 0;
}
