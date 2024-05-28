#include<iostream>
using namespace std;
void add(int a, int b);
void add(int a, int b,int c);
int main()
{
    add(10,20);
    add(40,20,90);
    return 0;
} 

void add(int a, int b)
{
    cout<<a+b<<endl;
}
void add(int a, int b,int c)
{
    cout<<b-a+c;
}

