#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class bank_account
{
 char name[40];
 int acc_no;
 char type_acc[40];
 float bal;
 public:
 void data()
 {
   cout<<"Enter your Name: ";
   cin>>name;
   cout<<"Which type of Account: "<<endl;
   cout<<"Saving/Current\n";
   cin>>type_acc;
   cout<<"Enter your Account Number: ";
   cin>>acc_no;
   cout<<"Enter Balance:";
   cin>>bal;
 }
 float deposit()
 {
   float sum;
   cout<<"Enter the amount want to deposit: ";
   cin>>sum;
   bal=bal+sum;
   cout<<"Balance is: "<<bal;
   return bal;
 }
  void display()
 {
   cout<<"Name: "<<name<<endl;
   cout<<"Account Number: "<<acc_no<<endl;
   cout<<"Current Balance :" <<bal;
 }
  float withdraw()
 {
  float inr;
  cout<<"Your Current Balance: "<<bal<<endl;
  cout<<"Enter ammount: ";
  cin>>inr;
     if(bal>=inr)
    {
      bal=bal-inr;
      cout<<"Balance is: "<<bal;
    }
    else
    {
     cout<<"Not sufficient Balance";
    }
    return bal;
  }
};
 
int main()
{
  int ch,x;
  bank_account bank[4];
  
  for(int j=0;j<=4;j++)
  {  cout<<"enter data for "<<"customer "<< j+1<<endl;
      bank[j].data();
  }
   cout<<"enter custmer no.: "<<endl;
  cin>>x;
  x--;
do
  {
  cout<<"\n\n";
  cout<<"select"<<endl;
  cout<<"1.Display"<<endl;
  cout<<"2.Deposit"<<endl;
  cout<<"3.Withdraw"<<endl;
  cout<<"4.Exit"<<endl;
  cout<<"Enter your Choice: ";
  cin>>ch;
  switch(ch)
  {
   case 1:
   {
      bank[x].display();
       break;
   }
   case 2:
   {
       bank[x].deposit();
       break;
   }
   case 3:
      {
       bank[x].withdraw();
       break;
      }
   case 4:
       break;
  }
  }while(ch!=4);
getch();
return 0;
}
