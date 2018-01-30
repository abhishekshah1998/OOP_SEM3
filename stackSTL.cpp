#include "iostream"
#include "list"
using namespace std;
class stack_demo
  {
    list <int> l1;
    public:
           void push(int);
           void show();
           int isempty();
           int pop();
           int popq();
  };
  
void stack_demo::push(int v)
  {
    l1.push_back(v);
  }
  
void stack_demo::show()
  {
    list <int>::iterator i1;
    for(i1=l1.begin();i1!=l1.end();i1++)
    cout<<*i1;
    cout<<endl;
  }
  
int stack_demo::isempty()
  {
   if(l1.empty()==1)
   return 1;
   else
   return 0;
  }
  
int stack_demo::pop()
 {
   int v;
   v=l1.back();
   l1.pop_back();
   return v;
 }

int stack_demo::popq()
  {
    int v;
   v=l1.front();
   l1.pop_front();
   return v;
  }
 
 int main()
   {
     stack_demo s;
     int ch,n,x,m,i;
     do
       {
         cout<<"1.Push the Elements in stack"<<endl<<"2.Pop the Elements of stack"<<endl<<"3.Display the Elements of stack"<<endl<<"4.Push elements in Queue"<<endl<<" 5.Pop Elements in Queue"<<endl<<" 6.Display Elements of Queue"<<endl<<" 7.End"<<endl;
         cout<<"Enter your choice"<<endl;
         cin>>ch;
         switch(ch)
           {
             case 1:
                     cout<<"How many elements you want to push in the stack?"<<endl;
                     cin>>n;
                     for(i=0;i<n;i++)
                      {
                        cout<<"Enter the element"<<endl;
                        cin>>x;
                        s.push(x);
                      }
                break;

             case 2: cout<<"How many Elements you want to pop?"<<endl;
                     cin>>m;
                     if(m>n)
                      cout<<"Oops! there are not enough elements in stack"<<endl;
                     else
                       {
                         if(!s.isempty())
                          {
                            for(i=0;i<m;i++)
                             {
                               cout<<s.pop();
                             }
                          }
                        }
                    break;
 
               case 3: 
                       
                         s.show();
                      
                      break;

               case 4:
                       cout<<"How many elements you want to push in the Queue?"<<endl;
                     cin>>n;
                     for(i=0;i<n;i++)
                      {
                        cout<<"Enter the element"<<endl;
                        cin>>x;
                        s.push(x);
                      }
                      break;
             
               case 5: 
                       cout<<"How many Elements you want to pop?"<<endl;
                     cin>>m;
                     if(m>n)
                      cout<<"Oops! there are not enough elements in Queue"<<endl;
                     else
                       {
                         if(!s.isempty())
                          {
                            for(i=0;i<m;i++)
                             {
                               cout<<s.popq();
                             }
                          }
                        }
                       break;

              case 6:
                       s.show();
                       break;

             case 7:
                     cout<<"Thank You"<<endl;
             }
         
         }while(ch!=7);
                            

      return 0;
   }
        
