#include<iostream>
using namespace std;
int area(int x,int y);
int area(int x);
void area(float x, float y);
int main()
{
    area(10,20);
    area(10);
    area(10,20);

}
int area (int x, int y)
{
    cout<<x*y<<endl;
}
int area (int x)
{
    cout<<x*x<<endl;
}
void area (float x, float y)
{
    cout<<0.5*x*y<<endl;
}