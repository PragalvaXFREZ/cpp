#include <iostream>
using namespace std;
int main()
{
    int intarray[5];
    cout<<"input the values of an array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>*(intarray+i);
    }
     for (int i = 0; i < 5; i++)
    {
        cout<<*(intarray+i);
    }
    
}