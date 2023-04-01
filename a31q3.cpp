/*
Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students
*/
#include<bits/stdc++.h>
using namespace std;
class Marks
{
private:
    float m1,m2,m3;
public:
    void setm1(float x)
    {
        m1=x;
    }
    void setm2(float y)
    {
        m2=y;
    }
    void setm3(float z)
    {
        m3=z;
    }
    int getm1()
    {
        return m1;
    }
    int getm2()
    {
        return m2;
    }
    int getm3()
    {
        return m3;
    }
};
class total:public Marks
{
   float total;
   public:
       void add()
       {
           total=getm1()+getm2()+getm3();
       }
       float gettotal()
       {
           return total;
       }
};
class percent:public total
{
    float percentage;
public:
    void percentcalc()
    {
        percentage=(gettotal()/3);
    }
    float getpercent()
    {
        return percentage;
    }
};
int main()
{
  percent p1;
  p1.setm1(90);
  p1.setm2(89);
  p1.setm3(78);
  cout<<"Marks obtained by student are : "<<p1.getm1()<<" , "<<p1.getm2()<<" & "<<p1.getm3()<<endl;
  p1.add();
  cout<<"Total marks obtained : "<<p1.gettotal()<<endl;
  p1.percentcalc();
  cout<<"Percentage : "<<p1.getpercent()<<endl;
  return 0;
}
