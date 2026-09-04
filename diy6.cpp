#include<iostream>
using namespace std;
inline int minval(int a, int b)
{
    return(a<b)?a:b;
}
inline int minval( int a , int b, int c)
{
    return minval(minval(a,b),c);
};
int main()
{
    cout<<"smaller of 10 and 20= "<<minval(10,20)<<endl;
    cout<<"smallest of 15, 8 and 12= "<<minval(15,8,12)<<endl;
    return 0;
}