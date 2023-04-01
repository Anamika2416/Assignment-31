/*
Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.
*/
#include<bits/stdc++.h>
using namespace std;
class A
{
    int a,b;
public:
    void seta(int x)
    {
        a=x;
    }
    void setb(int x)
    {
        b=x;
    }
    void accept()
    {
        cout<<"enter 2 nos. : ";
        cin>>a>>b;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    void display()
    {
        cout<<"Two numbers are : "<<a<<" , "<<b<<endl;
    }
};
class B:public A
{
public:
    void add()
    {
        cout<<"Sum of "<<geta()<<" & "<<getb()<<" is "<<geta()+getb();
    }
};
int main()
{
    B obj;
    obj.accept();
    obj.display();
    obj.add();
    return 0;
}
