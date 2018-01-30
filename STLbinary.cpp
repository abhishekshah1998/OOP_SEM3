#include "iostream"
#include "stack"
using namespace std;
class binary
  {
    
   public: stack<int> s1,s2,s3;
           int x,i,r;
           void get();
           void show();
           void add();   
  };

void binary::get()
 {
   int n,m;
   cout<<"How many bit Binary Number do you want?"<<endl;
   cin>>n;
   
   for(i=0;i<n;i++)
    {
      cout<<"Enter the bit of First Binary number"<<endl;
      cin>>x;
      s1.push(x);
    }

   cout<<"How many bit Binary Number do you want?"<<endl;
   cin>>m;
   for(i=0;i<m;i++)
    {
      cout<<"Enter the bit of Second Binary number"<<endl;
      cin>>r;
      s2.push(r);
    }
 }

void binary::add()
  {
   int sum=0,carry=0;
   int r1,r2;
   while(!s1.empty() || !s2.empty())
    {
      if(!s1.empty())
       {
         r1=s1.top();
         s1.pop();
       }
      if(!s2.empty())
       {
         r2=s2.top();
         s2.pop();
       }
      sum=r1+r2+carry;
      carry=sum/2;
      sum=sum%2;
      s3.push(sum);
    }
    s3.push(carry);
  }

void binary::show()
  {
     while(!s3.empty())
	{
	  cout<<s3.top()<<" ";
	  s3.pop();
	}
  } 
  

int main()
 {
  binary b;
  b.get();
  b.show();
  b.add();
  b.show();
  return 0;
 }
