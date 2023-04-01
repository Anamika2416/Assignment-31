/*
Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).
*/
#include<iostream>
using namespace std;
class B;
class A
{
    int num1;
public:
    A()
    {
        num1=10;
    }
    void show()
    {
        cout<<endl<<"Number 1 is : "<<num1<<endl;
    }
    friend void swap(A *x,B *y);
};
class B
{
    int num2;
public:
    B()
    {
        num2=20;
    }
    void show()
    {
        cout<<endl<<"Number 2 is : "<<num2<<endl;
    }
    friend void swap(A *x,B *y);
};
void swap(A *x,B *y)
{
    x->num1=x->num1+y->num2;
    y->num2=x->num1-y->num2;
    x->num1=x->num1-y->num2;

}
int main()
{
    A a;
    B b;
    a.show();
    b.show();
    swap(&a,&b);
    a.show();
    b.show();
    return 0;
}
