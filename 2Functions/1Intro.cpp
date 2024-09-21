#include<iostream>
using namespace std;

    void hello()
    {
        cout<<"Hello World !"<<endl;
    }

    void assistant(){
        hello();
        cout<<"Work done"<<endl;
    }

    int main()
    {
        assistant();
        return 0;
    }
