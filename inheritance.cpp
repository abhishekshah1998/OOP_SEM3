#include <iostream>
using namespace std;
class personal_record
{
 protected:
           char name[20],city[15];
           char ph[15];
 public: void getinfo();
         void displayinfo();
};

class professional_record
{
 protected: char company[20],post[20],exp[15];
 public:    void getinfo();
            void displayinfo();
};

class academic_record
{
 protected: char college[15],deg[15];
            int marks;
 public:    void getinfo();
            void displayinfo();
};

void personal_record::getinfo()
{
 cout<<"Enter name,city and phone number of the Employee"<<endl;
 cin>>name;
 cin>>city;
 cin>>ph;
}

void personal_record::displayinfo()
{
 cout<<"Name :"<<name<<endl;
 cout<<"City :"<<city<<endl;
 cout<<"Phone Number :"<<ph<<endl;
}

void professional_record::getinfo()
{
 cout<<"Enter the name of company, post and the years of experience of the Employee"<<endl;
 cin>>company;
 cin>>post;
 cin>>exp;
}

void professional_record::displayinfo()
{
 cout<<"Company: "<<company<<endl;
 cout<<"Post: "<<post<<endl;
 cout<<"Experience: "<<exp<<endl;
}

void academic_record::getinfo()
{
 cout<<"Enter the college, marks and the degree of the employee"<<endl;
 cin>>college;
 cin>>marks;
 cin>>deg;
}

void academic_record::displayinfo()
{
 cout<<"College: "<<college<<endl;
 cout<<"Marks: "<<marks<<endl;
 cout<<"Degree: "<<deg<<endl;
}

class biodata :protected personal_record,professional_record,academic_record
{
 public: void getinfo();
         void displayinfo();
};

void biodata::getinfo()
{
  personal_record::getinfo();
  professional_record::getinfo();
  academic_record::getinfo();
}

void biodata::displayinfo()
{
  personal_record::displayinfo();
  professional_record::displayinfo();
  academic_record::displayinfo();
}

int main()
{
 int n,i;
 biodata b[100];
 cout<<"Enter the number of Employees to create the biodata"<<endl; 
 cin>>n;

 for(i=0;i<n;i++)
 {
   b[i].getinfo();
   cout<<endl;
 }

for(i=0;i<n;i++)
 {
   b[i].displayinfo();
   cout<<endl;
 }
 
 return 0;
}
