/*
. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include<bits/stdc++.h>
using namespace std;
class Worker
{
    protected:
    int code;
    char name[30];
    float salary;
    public:
    void setworker()
    {
        cout<<"Enter code : ";
        cin>>code;
        cout<<"Enter name of worker : ";
        cin.ignore();
        cin>>name;
        cout<<"Enter salary : ";
        cin>>salary;
    }
    void getworker()
    {
        cout<<"Worker Code : "<<code<<endl;
        cout<<"Worker name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
class Officer
{
   protected: 
   float da,hra;
   public:
   void setofficer()
   {
    cout<<"Enter dearness allowance : ";
    cin>>da;
    cout<<"Enter house rent allowance : ";
    cin>>hra;
   }
   void getofficer()
   {
    cout<<"Dearness Allowance : "<<da<<endl;
    cout<<"House rent Allowance : "<<hra<<endl;
   }
};
class manager:public Worker,public Officer
{
   protected:
   float ta;
   float gsal;
   public:
   void setgross()
   {
    ta=0.10*salary;
    gsal=da+hra+ta+salary;
   }
   void getgross()
   {
    cout<<"Total allowance : "<<ta<<endl;
    cout<<"Gross salary : "<<gsal<<endl;
   }
};
int main()
{
    int n,i;
    cout<<"Enter nuber of entries you want to do? ";
    cin>>n;
    manager m[n];
    for(i=0;i<n;i++)
    {
        m[i].setworker();
        m[i].setofficer();
        m[i].setgross();
    }
    cout<<"***************************************************"<<endl;
    cout<<"Details are: "<<endl;
    for(i=0;i<n;i++)
    {
        m[i].getworker();
        m[i].getofficer();
        m[i].getgross();
    }
    return 0;
}