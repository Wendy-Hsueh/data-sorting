#include<iostream>
#include<cstdlib>
using namespace std;
void temp(int a[])
{
     int temp;
     for(int i=0;i<10;i++)
     {
       for(int j=0;j<10;j++)
       {
         if (a[i]<a[j])
         {
           temp=a[i];
           a[i]=a[j];
           a[j]=temp;
           }
       }
     }
     cout<<"±Æ§Ç«á :";
     for(int i=0;i<10;i++)
     cout<<a[i]<<" ";
     cout<<endl;
}
int main(void)
{
    int array[10];
    cout<<"input number :";
    for(int i=0;i<10;i++)
    cin>>array[i];
    temp(array);
    
    system("pause");
    return 0;
}          
