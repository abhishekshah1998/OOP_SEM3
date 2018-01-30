#include "iostream"
#include "fstream"
#include "string.h"
using namespace std;

class people
  {
   char name[25];
   long int ph;
   
   public:
          void get();
          void show();
          void search_name();
          void search_ph();
          void modify();
  };
  
void people::get()
  {
    int i=0,m;
    people p;
    ofstream of;
    of.open("rd.txt");
    if(of.fail())
      {
        cout<<"Oops! the file could not be opened"<<endl;
      }
    else
      {
       cout<<"How many records you want to enter"<<endl;
       cin>>m; 
	for(i=0;i<m;i++)
	  {
	   cout<<"Enter name of person"<<endl;
	   cin>>p.name;
	   cout<<"Enter the phone no. of student"<<endl;
	   cin>>p.ph;
	   of.write((char*)&p,sizeof(p) );
	  }
       }
     of.close();
   }
   
void people::show()
 {
  people p;
  ifstream fi;
  fi.open("rd.txt");
  if(fi.fail())
   {
     cout<<"Failed to open the file"<<endl;
   }
  else
   {
    cout<<"Name\t"<<"ph.no\n";
    while( fi.read((char*)&p,sizeof(p)))
     {
	cout<<p.name<<"\t"<<p.ph<<"\n";
     }
   }
  fi.close();
 }
 
void people::search_name()
  {
    char temp[25];
    cout<<"Enter name to be searched:"<<endl;
    cin>>temp;
    int flag=0;
    ifstream fi;
    people p;
    fi.open("rd.txt");
    if(fi.fail())
     {
	cout<<"Oops! The file could not be opened"<<endl;
     }
    else
     {
	while( fi.read((char*)&p,sizeof(p)))
	  {
	   if(strcmp(p.name,temp)==0)
	     {
		cout<<"The record is found"<<endl;
		cout<<"Name\t"<<"ph.no\n";
		cout<<p.name<<"\t"<<p.ph<<"\n";
		flag=1;
	     }
         }
	if(flag==0)
	  {
	   cout<<"The record not found"<<endl;
         }
      }
    fi.close();
  }
  
void people::search_ph()
  {
    int flag=0;
    ifstream fi;
    long int temp;
    people p;
    cout<<"Enter the no to be searched:"<<endl;
    cin>>temp;
    fi.open("rd.txt");
    if(fi.fail())
      {
	 cout<<"Oops! The file cannot be opened"<<endl;
      }
    else
	{
	  while( fi.read((char*)&p,sizeof(p)))
	    {
	      if(p.ph==temp)
		 {
		   cout<<"The Record is found"<<endl;
		   cout<<"Name\t"<<"ph.no\n";
		   cout<<p.name<<"\t"<<p.ph<<"\n";
		   flag=1;
		 }
	    }
	   if(flag==0)
	    {
		cout<<"The record cannot be found"<<endl;
	    }
	 }
   fi.close();
 }
 
void people::modify()
  {
    char temp[25];
    cout<<"Enter name whose ph no you want to edit"<<endl;
    cin>>temp;
    int flag=0,posn=0;
    fstream fi;
    people p;
    fi.open(("rd.txt"), ios::binary|ios::in|ios::out);
    if(fi.fail())
     {
	cout<<"Oops! The file cannot be opened"<<endl;
     }
    else
	{
	  while(fi.read((char*)&p,sizeof(p)))
	   {
	     if(strcmp(p.name,temp)==0)
		{
		  cout<<"The record is found"<<endl;
		  cout<<"Enter new ph no. for "<<p.name<<endl;
		  cin>>p.ph;
		  fi.seekp(posn*sizeof(p),ios::beg);
		  fi.write((char*)&p,sizeof(p));			 
		  flag=1;
		}
	      else
		{
		  posn++;
		}
	   }
	 if(flag==1)
	   {
	    cout<<"Record is Edited"<<endl;
	   }
	 else
	   {
	    cout<<"Record not found"<<endl;
	   }
	}
   fi.close();
 }
 
 int main()
 {
  int ch,i=0;
  people p;
  do
   {
    cout<<"1.Create Record 2.Display 3.Search by name 4.Search by ph no. 5.modify 6.Exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    switch(ch)
      {
        case 1:p.get();
                break;
        case 2: p.show();
               break;
        case 3: p.search_name();
               break;
        case 4: p.search_ph();
               break;
        case 5: p.modify();
               break;
        case 6: cout<<"Thank You"<<endl;
              break;
        default: cout<<"Enter the correct option"<<endl;
      }
    }while(ch!=6);
    return 0;
 }
              
        
