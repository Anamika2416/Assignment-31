/*
Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary
*/
#include<bits/stdc++.h>
using namespace std;
class Person
{
protected://can be made private as we have made getter setter
    char name[50];
    int age;
public:
    void setName(char a[50])
    {
        strcpy(name,a);
    }
    void setAge(int x)
    {
        age=x;
    }
    int getAge()
    {
        return age;
    }
    char * getName()
    {
        return name;
    }
};
class Employee:public Person
{
protected://can be made private as we have made getter setter
    int empid;
    float salary;
public:
    void setEmpid(int y)
    {
        empid=y;
    }
    void setsalary(float x)
    {
        salary=x;
    }
    int getEmpid()
    {
        return empid;
    }
    float getSalary()
    {
        return salary;
    }
};
int main()
{
    Employee emp1;
    emp1.setName("Anamika");
    emp1.setAge(30);
    emp1.setEmpid(123);
    emp1.setsalary(600000);
    cout<<"Employee name is : "<<emp1.getName()<<endl;
    cout<<"Age is : "<<emp1.getAge()<<endl;
    cout<<"Employee id : "<<emp1.getEmpid()<<endl;
    cout<<"Salary is : "<<emp1.getSalary()<<endl;
    return 0;
}
