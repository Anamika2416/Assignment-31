/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist*/
#include<bits/stdc++.h>
using namespace std;
class Student
{
    int id;
    string name;
    public:
    void setstu()
    {
        cout<<"Enter student id : ";
        cin>>id;
        cout<<"Enter student name : ";
        cin.ignore();
        cin>>name;
    }
    void getstu()
    {
        cout<<"Student id : "<<id<<endl;
        cout<<"Student Name : "<<name<<endl;
    }
};
class Exam : public Student
{
    protected:
    float marks1,marks2,marks3,marks4,marks5,marks6;
    public:
    void setmarks()
    {
        cout<<"Enter marks1 : ";
        cin>>marks1;
        cout<<"Enter marks2 : ";
        cin>>marks2;
        cout<<"Enter marks3 : ";
        cin>>marks3;
        cout<<"Enter marks4 : ";
        cin>>marks4;
        cout<<"Enter marks5 : ";
        cin>>marks5;
        cout<<"Enter marks6 : ";
        cin>>marks6;
    }
    void getmarks()
    {
        cout<<"Marks in 6 subjects are : "<<marks1<<" , "<<marks2<<" , "<<marks3<<" , "<<marks4<<" , "<<marks5<<" , "<<endl;
    }
};
class Result:public Exam
{
   float percent;
   public:
   float calper()
   {
    percent=(marks1+marks2+marks3+marks4+marks5)/5;
    return percent;
   }
   void getper()
   {
    cout<<"Percentage obtained : "<<percent<<endl;
   }

};
int main()
{
    int n;
    cout<<"ENter the number of details you want to enter ?";
    cin>>n;
    Result r[n];
    for(int i=0;i<n;i++)
    {
         r[i].setstu();
         r[i].setmarks();
         r[i].calper();
    }
    for(int i=0;i<n;i++)
    {
        r[i].getstu();
        r[i].getmarks();
        r[i].getper();
    }
    return 0;
}