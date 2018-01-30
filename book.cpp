#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class book
{
     char *aut, *pub, *title;
     int price, stock;

     public:
     book(char *, char *, char *, int, int);
     int search(char a[], char t[]);
     void display();   
     void available();  
     float buy(int,float *);
};

book :: book(char *aut, char *pub, char *title, int pr, int st)
   {
     this->aut = new char(strlen (aut));
     this->pub = new char(strlen (pub));
     this->title = new char(strlen (title));
     strcpy(this->aut, aut);
     strcpy(this->pub, pub);
     strcpy(this->title, title);
     price = pr;
     stock = st;     
   }     

int book :: search(char a[], char t[])
   {
     if(strcmp(a,aut)==0 && strcmp(t,title)==0)
     return 1;
     else
     return 0;
   }

void book :: display()
   {
	cout<<aut<<"\t"<<pub<<"\t\t"<<title<<"\t"<<price<<"\t"<<stock<<endl;
   }

void book :: available()
   {
     cout<<"Book is found"<<endl;
     if(stock>0)
	{
	 cout<<"Available Stock is: "<<stock<<endl;
	}
     else
	{
	  cout<<"No Stock Available"<<endl;
	}
   }	

float book :: buy(int buy, float *total)
   {
     if(stock>=buy)
	{
	  float tot;
	  cout<<"Thankyou for your Purchase"<<endl;		
	  stock = stock - buy;
	  tot = price*buy;
	  *total = tot + *total;
	  cout<<"Amount of the book: "<<price<<" x "<<buy<<" = Rs. "<<tot<<endl;
	  return tot;
	}
     else
	cout<<"Sorry that much stock is not available, ThankYou"<<endl;
    }		

int main()
{
     book *b[10];
     char aut[20], pub[30], title[25];
     int price, stock, ch, i, n, search, buy, flag;
     float total;
     
	do{
     cout<<"1. Enter the data of books"<<endl<<"2. Display the Database"<<endl<<"3. Search a book"<<endl<<"4. Buy a book"<<endl<<"5. Total Price to be Paid"<<endl<<"6. Exit"<<endl;
     cout<<"Enter the choice"<<endl;
     cin>>ch;

		
     switch(ch)
     {
          case 1:{ 
                    cout<<"Enter the number of books you want to enter "<<endl;
                    cin>>n;
                    for(i=0;i<n;i++)
                    {
                         cout<<"Enter the name of author for book " <<endl; cin>>aut;
                         cout<<"Enter the name of publication for book " <<endl; cin>>pub;
                         cout<<"Enter the title for book " <<endl; cin>>title;
                         cout<<"Enter the price for book " <<endl; cin>>price;
                         cout<<"Enter the stock for book " <<endl; cin>>stock;
                         b[i] = new book(aut, pub, title, price, stock);
                    }
                    break;
                 }    
				 
		case 2: cout<<"\nDatabase is:\n";
				cout<<"Author\tPublication\tTitle\tPrice\tStock\n";
								
				for(i=0;i<n;i++)
				{
					b[i]->display();
					cout<<endl;
				}
				
				break;                       
				
		case 3: cout<<"\nEnter the title and the author of the book to search the book";
	
			cout<<"\nAuthor: "; cin>>aut;
			cout<<"\nTitle: "; cin>>title;
			
			for(i=0;i<n;i++)
			{
				search = b[i]->search(aut,title);

				if(search==1)					
				{
					b[i]->available();
					flag=1;
					break;	
				}	
				
			}
			
			if(flag==0)
			{
				cout<<"\nBook is Not Found";
			}
			
			break;
			
		case 4: cout<<"\nEnter the title and the author of the book you want to buy";
				
			cout<<"\nAuthor: "; cin>>aut;
			cout<<"\nTitle: "; cin>>title;
			flag=0;
			for(i=0;i<n;i++)
			{
				search = b[i]->search(aut,title);

				if(search==1)
				{
					b[i]->available();
					cout<<"\nEnter the stock you want to buy"<<endl;
					cin>>buy;
					b[i]->buy(buy,&total);
					flag=1;
					break;
				}	
					
			}
			
			if(flag==0)
			{
				cout<<"\nBook is not Found";
			}
		

			break;
			
		case 5: cout<<"Total amount to be paid: "<<total; 			            	                
			    break;					

		case 6: exit(0);
     }
     
 	}while(1);
    return 0;
}
