#include<iostream>
using namespace std;

int sorting(int arr[] , int index , int find)
{   
    for(int i=0 ; i<index ; i++)
    {
        if(arr[i]==find)
        {
           
            return i;
        }
    }
    return -1;

}

int main()
{
    int size , length , key;
    cout<<"Enter the size of the array :";
    cin>>size;
    int array[size];
    length = sizeof(array)/sizeof(int);
    cout<<"Enter the "<<size<<" elements in the array :";
    for(int i=0 ; i<size ; i++)
    {
        cin>>array[i];
    }
    cout<<"Enter the key you want to search :";
    cin>>key;

    cout<<key<<" found at index value : "<<sorting(array , length , key);
 return 0;
}

// int sorting(int arr[] , int index , int find)
// {
//     for(int i=0 ; i<index ; i++)
//     {
//         if(arr[i]==find)
//         {
//             cout<<find<<"found at index value :"<<i<<endl;
//             break;
//         }
//         else{
//             cout<<"-1"<<endl;
//         }

//     }
//     return find;
// }