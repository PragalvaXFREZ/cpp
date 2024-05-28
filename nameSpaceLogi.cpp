#include<iostream>
using namespace std;
namespace namespace1{
    int x=10;
}
namespace namespace2{
    int x=20;
}
int main()
{
    cout<<namespace1::x<<endl;
    cout<<namespace2::x<<endl;
    return 0;
}