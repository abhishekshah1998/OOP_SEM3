#include <iostream>
using namespace std;


template <class T>
void accept(T data[], int n)
{
 int i;
 for(i=0;i<n;i++)
{
 cin>>data[i];
}
}


template <class T>
void selsort(T data[], int n)
{
 T min;
 int i,j,index;
 for(i=0;i<n;i++)
{
 min=data[i];
 index=i;
 for(j=i+1;j<n;j++)
{
 if(min>data[j])
{
 min=data[j];
 index=j;
}
}
data[index]=data[i];
data[i]=min;
}
}


template <class T>
void display(T data[], int n)
{
 int i;
 for(i=0;i<n;i++)
{
 cout<<data[i];
 cout<<endl;
}
}


int main()
{
 int n1,n2;
cout<<"Enter the number of Integer numbers in the array";
cin>>n1;
int data1[n1];
cout<<"Enter your Numbers"<<endl;
accept(data1,n1);
selsort(data1,n1);
cout<<"The sorted Array is:"<<endl;
display(data1,n1);
cout<<"Enter the number of Float numbers in the array";
cin>>n2;
float data2[n2];
cout<<"Enter your Numbers"<<endl;
accept(data2,n2);
selsort(data2,n2);
cout<<"The Sorted Array is:"<<endl;
display(data2,n2);
return 0;
}

