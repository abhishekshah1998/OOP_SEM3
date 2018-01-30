#include "iostream"
#include "deque"
using namespace std;
class stack_demo
  {
    deque <int> d1;
    public:
           void pushb(int);
           void pushf(int);
           void show();
           int isempty();
           int popb();
           int popf();
  };
  
void stack_demo::pushb(int v)
  {
    d1.push_back(v);
  }
 
void stack_demo::pushf(int v)
  {
    d1.push_front(v);
  }
 
void stack_demo::show()
  {
    deque <int>::iterator i1;
    for(i1=d1.begin();i1!=d1.end();i1++)
    cout<<*i1;
    cout<<endl;
  }
  
int stack_demo::isempty()
  {
   if(d1.empty()==1)
   return 1;
   else
   return 0;
  }
  
int stack_demo::popb()
 {
   int v;
   v=d1.back();
   d1.pop_back();
   return v;
 }

 int stack_demo::popf()
 {
   int v;
   v=d1.front();
   d1.pop_front();
   return v;
 }

 int main()
  {
     stack_demo s;
     int ch,n,x,m,i;
     do
       {
         cout<<"1.Push the Elements at back of dqueue"<<endl<<"2.Push the Elements at front of dqueue"<<endl<<" 3.Pop Elements in the back of dqueue"<<endl<<"4.Pop elements in the front of dqueue"<<endl<<"5.display the elements of dqueue"<<endl<<"6.exit"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>ch;
         switch(ch)
           {
             case 1:
                     cout<<"How many elements you want to push in the dqueue?"<<endl;
                     cin>>n;
                     for(i=0;i<n;i++)
                      {
                        cout<<"Enter the element"<<endl;
                        cin>>x;
                        s.pushb(x);
                      }
                break;

            case 2:  cout<<"How many elements you want to push in the dqueue?"<<endl;
                     cin>>n;
                     for(i=0;i<n;i++)
                      {
                        cout<<"Enter the element"<<endl;
                        cin>>x;
                        s.pushf(x);
                      }
                   break;

             case 3: cout<<"How many Elements you want to pop?"<<endl;
                     cin>>m;
                     if(m>n)
                      cout<<"Oops! there are not enough elements in Queue"<<endl;
                     else
                       {
                         if(!s.isempty())
                          {
                            for(i=0;i<m;i++)
                             {
                               cout<<s.popb();
                             }
                          }
                          else
                             cout<<"The queue is empty"<<endl;
                        }
                    break;

             case 4:   cout<<"How many Elements you want to pop?"<<endl;
                     cin>>m;
                     if(m>n)
                      cout<<"Oops! there are not enough elements in Queue"<<endl;
                     else
                       {
                         if(!s.isempty())
                          {
                            for(i=0;i<m;i++)
                             {
                               cout<<s.popb();
                             }
                          }
                          else
                             cout<<"The queue is empty"<<endl;
                        }
                break;
 
               case 5: 
                         s.show();
                       
                      break;

               case 6:
                       cout<<"Thank You"<<endl;
             }
         
         }while(ch!=6);
                            

      return 0;
   }
