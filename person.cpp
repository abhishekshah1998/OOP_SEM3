#include "iostream"
#include "string.h"
using namespace std;
class Person
{
 int age,veh;
 float inc;
 string city;

public:int getage(int age);
       float income(float inc);
       int vehicle(int veh);
       int getcity(string city);
       void show();
};

int Person::getage(int age)
  {
    this->age=age;
    int flag=0;
    try
      {
       if(age<18 || age>55)
        {
          throw ('x');
        }
       else
        {
          return 1;
        }
      }
   catch(char x)
    {
      cout<<"You have entered invalid age!"<<endl;
    }
      return 0;
  }

float Person::income(float inc)
   {
    this->inc=inc;
    try
      {
       if(inc<50000 || inc>100000)
        {
          throw (1.0);
        }
       else
         return 1;
      }
    catch(float x)
      {
        cout<<"You have entered invalid income!"<<endl;
      }
     return 0;
   }

int Person::vehicle(int veh)
   {
    this->veh=veh;
    try
      {
        if(veh!=4)
         {
           throw (1);
         }
        else
          return 1;
      }
   catch(int x)
     {
       cout<<"You have entered invalid vehicle!"<<endl;
     }
      return 0;
   }

int Person::getcity(string city)
   {
     this->city=city;
     try
      {
        if((city!="Pune") && (city!="Mumbai") && (city!="Bangalore") && (city!="Chennai"))
        {
          throw('x');
        }
        else 
          return 1;
      }
     catch(char x)
      {
        cout<<"You have entered invalid city!"<<endl;
      }
     return 0;
   }
void Person::show()
{
 cout<<"Age: "<<age<<endl;
 cout<<"Income: "<<inc<<endl;
 cout<<"City: "<<city<<endl;
 cout<<"Vehicle: "<<veh<<endl;
}


int main()
    {
     int age,veh,ret;
     float inc;
     string city;
     Person p;

     do
       {
        cout<<"Enter your age"<<endl;
        cin>>age;
        ret=p.getage(age);
       }while(ret==0);

     do
       {
        cout<<"Enter your Income"<<endl;
        cin>>inc;
        ret=p.income(inc);
       }while(ret==0);

     do
       {
        cout<<"Enter your city (Starting letter Capital) "<<endl;
        cin>>city;
        ret=p.getcity(city);
       }while(ret==0);

     do
       {
        cout<<"Enter your Vehicle  Eg.2 for Two-Wheeler and 4 for four-Wheeler"<<endl;
        cin>>veh;
        ret=p.vehicle(veh);
       }while(ret==0);

       p.show();
       return 0;
     }
   

 
