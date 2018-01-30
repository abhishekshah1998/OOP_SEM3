#include <iostream>
#include <math.h>
using namespace std;
class poly
{
 int aa,bb,cc;
 public:
        friend ostream & operator << (ostream &, poly &);
        friend istream & operator >> (istream &, poly &); 
        poly operator+(poly);
        void eval();
        void root();
        poly();
        
        
};
 poly::poly()
 {
  aa=0;
  bb=0;
  cc=0;
}

 istream & operator >> (istream &pin, poly &p)
 {
  cout<<"Enter the variables"<<endl;
  pin>>p.aa>>p.bb>>p.cc;
  return pin;
  }
 ostream & operator << (ostream &pout, poly &p)
 {
  pout<<p.aa<<"x\u00b2+"<<p.bb<<"x+"<<p.cc<<endl;
  return pout;
  }
 poly poly::operator+(poly p)
 {
  poly pp;
  pp.aa=aa+p.aa;
  pp.bb=bb+p.bb;
  pp.cc=cc+p.cc;
  return pp;
  }
  void poly::eval()
  {
   int e,l;
   cout<<"Enter the value of x"<<endl;
   cin>>e;
   l=(aa*e*e)+(bb*e)+cc;
   cout<<"Evaluated polynomial is"<<l<<endl;
   }
   
void poly::root()
{
 int r1,r2;
 if(((bb*bb)-(4*aa*cc))<0)
  {
    cout<<"The roots are imaginary"<<endl;
  }
  else
 {
  r1=((-bb)+sqrt((bb*bb)-(4*aa*cc)))/(2*aa);
  r2=((-bb)-sqrt((bb*bb)-(4*aa*cc)))/(2*aa);
  cout<<"The roots are"<<endl;
  cout<<r1<<endl<<r2<<endl;
 }
}
  int main()
  {
   poly p1,p2,p3;
   cin>>p1;
   cout<<p1;
   cin>>p2;
   cout<<p2;
   int ch;
   do
   {
      cout<<"1.Add 2.Evaluate 3.Roots 4.Exit"<<endl;
   cout<<"Enter your choice"<<endl;
   cin>>ch;
    switch(ch)
   {
    case 1:
          p3=p1+p2;
          cout<<"The addition is"<<endl;
          cout<<p3;
          break;
    case 2:
           p1.eval();
           break;
    case 3:
          p1.root();
          break;
    case 4:
          cout<<"Thank You"<<endl;
          break;
         
    default:
            cout<<"You entered wrong option";
   }
   
}while(ch!=4);
   return 0;
   }
