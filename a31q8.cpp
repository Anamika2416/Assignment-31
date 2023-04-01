/*In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.*/
#include<iostream>
using namespace std;
class Customer
{
   protected:
   string name;
   long long phone_no;
   public:
   void get()
   {
    cout<<"Enter name : ";
    cin>>name;
    cout<<" Phone number : ";
    cin>>phone_no;
   }
   void display()
   {
    cout<<endl<<"Details of customer"<<endl;
    cout<<"Customer name : "<<name<<endl;
    cout<<"Customer phone number : "<<phone_no<<endl;
   }
};
class depositor:public Customer
{
    protected:
    int accno;
    float bal;
    public:
    void getdata()
    {
        cout<<"Enter account number :";
        cin>>accno;
        cout<<"Enter balance : ";
        cin>>bal;
    }
    void print()
    {
        cout<<"Account number : "<<accno<<endl;
        cout<<"Account Balance : "<<bal<<endl;
    }
};
class borrower:public depositor
{
    protected:
    int loan_no;
    float loan_am;
    public:
    void setdata()
    {
        cout<<"Enter loan number : ";
        cin>>loan_no;
        cout<<"Enter loan amount : ";
        cin>>loan_am;
    }
    void displaydetails()
    {
        cout<<"Loan Number : "<<loan_no<<endl;
        cout<<"Loan Amount : "<<loan_am<<endl;
    }
};
int main()
{
    int n;
    cout<<"ENter number of enteries you want to make ?";
    cin>>n;
    borrower b[n];
    for(int i=0;i<n;i++)
    {
        b[i].get();
        b[i].getdata();
        b[i].setdata();
    }
    for(int i=0;i<n;i++)
    {
        b[i].display();
        b[i].print();
        b[i].displaydetails();
    }
    return 0;
}