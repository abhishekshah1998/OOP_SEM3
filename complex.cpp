#include "iostream"
using namespace std;
class complex
{
 private: int real,img;
 public: friend ostream & operator << (ostream &, complex &);
         friend istream & operator >> (istream &, complex &);
         complex operator+(complex);
         friend complex operator -(complex,complex);
         complex operator*(complex);
         complex();
         complex(complex &);
};
complex::complex(complex &c)
{
 real=c.real;
 img=c.img;
 }
complex::complex()
{
 real=0;
 img=0;
}
istream & operator >> (istream &rin, complex &c)
{
 cout<<"Enter the Real and imaginary part ";
 rin>>c.real>>c.img;
 return rin;
}
ostream & operator << (ostream &rout, complex &c)
{
 rout<<"The complex number is"<<c.real<<"+"<<c.img<<"i"<<endl;
 return rout;
}
complex complex::operator+(complex c)
{
 complex cc;
 cc.real=real+c.real;
 cc.img=img+c.img;
 return cc;
}
 complex operator -(complex c2,complex c1)
{
 complex cc;
 cc.real=c2.real-c1.real;
 cc.img=c2.img-c1.img;
 return cc;
 }
 complex complex::operator*(complex c)
 {
  complex cc;
 cc.real=(real*c.real)+(-img*c.img);
 cc.img=(real*c.img)+(img*c.real);
 return cc;
 }
int main()
{
 complex c1,c2,c3;
 complex c4(c1);
 cin>>c1;
 cout<<c1;
 cin>>c2;
 cout<<c2;
 int ch;
 do
 {
  cout<<"1.Add 2.Subtract 3.Multiply 4.Exit"<<endl;
  cout<<"Enter your choice"<<endl;
  cin>>ch;
  switch(ch)
  {
  case 1:
         c3=c1+c2;
         cout<<c3;
         break;
  case 2: 
         c3=c1-c2;
         cout<<c3;
         break;
  case 3:
         c3=c1*c2;
         cout<<c3;
         break;
  case 4:
         cout<<"Thank You"<<endl;
  }
 }while(ch!=4);    
 return 0;
}
