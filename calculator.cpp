#include "iostream"
using namespace std;
class oper
{
 private: float n1,n2,r;
          char op,y,n,ch;
 public: void get();
         void show();
         void add();
         void sub();
         void mul();
         void div();
         void cal();
};
void oper::get()
{
 cout<<"Enter two numbers and operator"<<endl;
 cin>>n1>>op>>n2;
}
void oper::show()
{
 cout<<"You have entered"<<endl;
 cout<<n1<<op<<n2<<endl;
}
void oper::add()
{
 r=n1+n2;
 cout<<"The addition is"<<r<<endl;
}
void oper::sub()
{
 r=n1-n2;
 cout<<"The difference is"<<r<<endl;
 }
void oper::mul()
{
 r=n1*n2;
 cout<<"The multiplication is"<<r<<endl;
}
void oper::div()
{
 r=n1/n2;
 if(n2==0)
  {
    cout<<"The division is not possible"<<endl;
  }
 else
    {
      cout<<"The division is"<<r<<endl;
    }
}
void oper::cal()
{
 do
{
 switch(op)
{
 case '+':add();
break;
 case '-':sub();
break;
 case '*':mul();
break;
 case '/':div();
break;
 default: cout<<"You have entered wrong option";
}
cout<<"Do you want to repeat"<<endl;
cout<<"Enter y or n"<<endl;
cin>>ch;
}while(ch=='y');
}
int main()
{
 oper o;
 o.get();
 o.show();
 o.cal();
 return 0;
}
