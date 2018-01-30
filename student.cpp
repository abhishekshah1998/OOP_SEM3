#include "iostream"
#include "string.h"
using namespace std;
class student
{
 private:int roll;
         char name[20],bg[5],div[10],DOB[10];
 public: void get();
         void show();
         int retroll();
         void modify();
         student();
 };
 student::student()
 {
  strcpy(name," ");
  roll=0;
  strcpy(div," ");
  strcpy(DOB," ");
  strcpy(bg," ");
  }
 void student::get()
 {
  cout<<"Enter Name,Roll No.,Division,DOB and bg"<<endl;
  cin>>name>>roll>>div>>DOB>>bg;
  }
 void student::show()
 {
  cout<<"You have Entered"<<endl;
  cout<<"Name:"<<name<<endl;
  cout<<"Roll No:"<<roll<<endl;
  cout<<"Division:"<<div<<endl;
  cout<<"DOB:"<<DOB<<endl;
  cout<<"Blood Group:"<<bg<<endl;
  cout<<endl;
  }
  int student::retroll()
  {
   return roll;
   }

void student::modify()
{
 int ch;
     cout<<"1.Name 2.Roll No. 3.Division 4.DOB 5.Blood Group"<<endl;
    cout<<"Enter the parameter to be modified"<<endl;
    cin>>ch;
    
 switch(ch)
{
 case 1:cin>>name;
       break;
 case 2:cin>>roll;
       break;
 case 3:cin>>div;
        break;
 case 4:cin>>DOB;
       break;
 case 5:cin>>bg;
       break;
}
}

int main()
{
 int n,i,ch,key,v,flag=0,j;
 student s[100];
 cout<<"Enter the number of students in class"<<endl;
 cin>>n;
 for(i=0;i<n;i++)
 {
 s[i].get();
 }
 for(i=0;i<n;i++)
 {
  s[i].show();
  }
do
{

  cout<<"1.Display 2.Search 3.Modify 4.Delete 5.Exit"<<endl;
 cout<<"Enter your choice"<<endl;
  cin>>ch;
  switch(ch)
  {
   case 1:
          for(i=0;i<n;i++)
          {
           s[i].show();
           }
           break;
   case 2: flag=0;
          cout<<"Enter the roll number to be searched"<<endl;
          cin>>key;
          for(i=0;i<n;i++)
          {
           v=s[i].retroll();
           if(v==key)
           {
           cout<<"Found"<<endl;
           flag=1;
           }
           }
           if(flag==0)
           {
            cout<<"Not found"<<endl;
           }
break;
      case 3: flag=0;
             cout<<"Enter the roll number you want to modify"<<endl;
             cin>>key;
             for(i=0;i<n;i++)
             {
             v=s[i].retroll();
             if(key==v)
             {       
               s[i].modify();
               flag=1;
             }
             }
               if(flag==1)
                {
                 cout<<"The record is modified successfully"<<endl;
                }
               else
               {
                cout<<"The student is not in record"<<endl;
                }
               
break;

      case 4:flag=0;
              cout<<"Enter the roll number you want to delete"<<endl;
             cin>>key;
             for(i=0;i<n;i++)
             {
             v=s[i].retroll();
             if(key==v)
             {
              for(j=i+1;j<n;j++)
              {
               s[j-1]=s[j];
               flag=1;
               }
              
	     }
           }
if(flag==1)
{
 cout<<"The student is deleted successfully"<<endl;
}
else
{
cout<<"The student is not in record"<<endl;
}
 n--;
}
 
   }while(ch!=5);
 
 return 0;
}
