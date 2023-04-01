/*
Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of �n� employees.
2. Display the details of �n� employees.
3. Search a given Employee by emp-code.
*/
#include<iostream>
using namespace std;
class Employee
{
    public:
    int emp_code;
    char name[30];
    public:
    void get()
    {
        cout<<"Enter employee code : ";
        cin>>emp_code;
        cout<<"Enter employee name : ";
        cin.ignore();
        cin>>name; 
    }
};
class Fulltime:public Employee
{
    protected:
    int nofdays;
    float salary,daily_rate;
    public:
    void getdata()
    {
        cout<<"For full time :"<<endl;
        cout<<"Enter No. of working days : ";
        cin>>nofdays;
        cout<<"Enter daily rate : ";
        cin>>daily_rate;
    }
    void cal()
    {
            salary=nofdays*daily_rate;
    }
    void show()
    {
         cout<<"Employee code : "<<emp_code<<endl;
        cout<<"Employee name : "<<name<<endl;
        cout<<"For full time :"<<endl;
        cout<<"No. of working days : "<<nofdays<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Daily rate : "<<daily_rate<<endl<<endl;
    }
};
class Parttime:public Employee
{
    protected:
    int nofwh;
    float salary,hourly_rate;
public:
    void accept()
    {
        cout<<"For part time : "<<endl;
        cout<<"Enter no. of working hours : ";
        cin>>nofwh;
        cout<<"ENter hourly rate : ";
        cin>>hourly_rate;
    }
    void sal()
    {
        salary=nofwh*hourly_rate;
    }
    void display()
    {
        cout<<"For part time : "<<endl;
        cout<<"No. of working hours : "<<nofwh<<endl;
        cout<<"Hourly rate : "<<hourly_rate<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};
int main()
{
    int n,var=0,var1=0;
    cout<<"Enter no. of values ? :";
    cin>>n;
    Fulltime f1[n];
    Parttime p1[n];
    int x,i;
    do
    {
       cout<<"\n";
       cout<<"\n1.Enter Record"<<endl;
       cout<<"2.Display record."<<endl;
       cout<<"3.Search record."<<endl;
       cout<<"4.Quit"<<endl;
       cout<<"Enter your choice number: "<<endl;
       cin>>x;
       switch(x)
       {
        case 1:
        int y;
        cout<<"1.Full Time"<<endl;
        cout<<"2.Part time"<<endl;
        cout<<"Enter your job type : ";
        cin>>y;
        switch(y)
        {
            case 1: f1[var].get();
            f1[var].getdata();
            f1[var].cal();
            var++;
            break;
            case 2:
            p1[var1].get();
            p1[var1].accept();
            p1[var1].sal();
            var1++;
            break;
        } 
        break;
        case 2:  
        for(i=0;i<var;i++)
        {
            f1[i].show();
        }  
        for(i=0;i<var1;i++)
        {
            p1[i].display();
        }
        break;
        case 3:
        int a;
        cout<<"ENter employee id ";
        cin>>a;
        for(int i=0;i<var;i++)
        {
            if(f1[i].emp_code==a)
            {
                f1[i].show();
            }
             if(p1[i].emp_code==a)
            {
                p1[i].display();
            }
        }
        break;
        case 4: exit(1);
        break;
        default:cout<<"\n Wrong choice number "<<endl;
        }

    } while (1);
    
    return 0;
}
