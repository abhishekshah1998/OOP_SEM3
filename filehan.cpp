#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
  {
    char r1[100];
    char ch,ch1;
    int vow=0,spa=0,character=0,line=0,count=0;
    
	cout<<"\nEnter the first string:";
    cin.getline(r1,100);
    
	ofstream fout("rd.txt");
    if(fout.fail()==1)
    cout<<"\nError in opening the file";
    else
    {
	cout<<"\nThe file is successfully opened";
    	fout<<r1<<endl;
	cout<<"\nEnter the first string:";
	cin.getline(r1,100);
	fout<<r1<<endl;
    	fout.close();
	}
    
	ifstream f("rd.txt");
    cout<<"\nThe text written in file is:";
    while(f.get(ch)) 
     {
     	count++;
      
		cout<<ch;
     }
     cout<<count;
     f.close();
    
    f.open("rd.txt");
   line=0;
   count=0;
   cout<<"\nAfter";
    while( f.get(ch) )
       {
       
         cout<<ch;
	 count++;
         if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
          {
            vow++;
          }
         if(ch==' ')
          {
            spa++;
          }
         if((int(ch)>=65 && int(ch)<=90) || (int(ch)>=97 && int(ch)<=122))
          {
            character++; 
          }
          if(ch=='\n')
          {
            line++;
          }
	   }
	    f.close();
      
       
     cout<<"\nThe number of vowels are: "<<vow;
     cout<<"\nThe number of spaces are: "<<spa;
     cout<<"\nThe number of characters are: "<<character;
     cout<<"\nThe number of lines are: "<<line<<" "<<count;
     return 0;
   }      
