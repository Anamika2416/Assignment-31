/*
Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format
*/
#include<bits/stdc++.h>
using namespace std;
class Item
{
protected:
    int item_no;
    char name[40];
    float price;
public:
    float getprice()
    {
        return price;
    }
};
class Discounted_Item:public Item
{
    double discount_percent;
public:
    double getdispercent()
    {
        return discount_percent;
    }
    void accept()
    {
        cout<<"Enter item number : ";
        cin>>item_no;
       cout<<"Enter item name :  ";
       cin.ignore();
       cin>>name;
       cout<<"Enter price : ";
       cin>>price;
       cout<<"Enter Discount percentage : ";
       cin>>discount_percent;
    }
    void display()
    {
        cout<<"Item number : "<<item_no<<endl;
       cout<<"Item name : "<<name<<endl;
       cout<<"Price : "<<price<<endl;
       cout<<"Discount percentage : "<<discount_percent<<endl;
       cout<<"Discounted price : "<<price -(price *discount_percent)/100<<endl;
    }
};
int main()
{
    int n;
    float pri=0,dprice=0;
    cout<<"Enter no. of items ? :";
    cin>>n;
    Discounted_Item di[n];
    for(int i=0;i<n;i++)
    di[i].accept();
    cout<<endl<<"***********************************************************************************"<<endl;
    for(int i=0;i<n;i++)
    {
        pri=pri+di[i].getprice();
        dprice=dprice+di[i].getprice()-((di[i].getprice()*di[i].getdispercent())/100);
        di[i].display();
    }
    cout<<endl<<"*******************************************************************************************"<<endl;
    cout<<"Total bill : "<<pri<<endl;
    cout<<"Discount offered : "<<pri-dprice<<endl;
    cout<<"Total payable amount : "<<dprice<<endl;
    return 0;
}
