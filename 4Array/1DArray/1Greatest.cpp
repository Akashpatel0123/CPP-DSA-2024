#include<iostream>
using namespace std;

int find(int arr[5])
{
   int maximum = arr[0];
   int min = arr[0];
   for(int i=0 ; i<5 ; i++)
   {
    if(arr[i] > maximum)
    {
        maximum = arr[i];
    }

    if(arr[i]<min)
    {
        min = arr[i];
    }

   }
   cout<<"Greatest :"<<maximum<<endl;
   cout<<"Smalllest : "<<min<<endl;
   cout<<"arr:"<<arr<<endl;
   return maximum , min;

}

int main()
{
    int array[5] = { 100  , 45 , 66 , 32 , 96 } ;
    cout<<"array :"<<array<<endl;
   find(array);

return 0;
}
