#include<iostream>
using namespace std;
double volume(double side)
{
    return side*side*side;
}
double volume(double length, double breadth, double height)
{
    return length* breadth*height;

}
double volume(double radius, double height)
{
    return 3.14159*radius*radius*height;

}
int main()
{
    double side,length,breadth,height,radius;
    cout<<"enter side of a cube: ";
    cin>>side;
    cout<<"volume of cube= "<<volume(side)<<endl;
    cout<<"enter length,breadth and height of cuboid: ";
    cin>>length>>breadth>>height;
    cout<<"voulume of cuboid= "<<volume(length,breadth,height)<<endl;
    cout<<"enter radius and height of cylinder: ";
    cin>>radius>>height;
    cout<<"volume of cylinder = "<<volume(radius,height)<<endl;
    return 0;
}