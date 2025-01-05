/*
********** Lab Exercise 3 **********
            Question 6
Name            : Cheong Yi Shien
Section         : 02
Matric number   :A24CS0058
*/

#include <iostream>
using namespace std;
double getLength();//function prototype to input length
double getWidth();//function prototype to input width
double getArea(double, double);//function prototype to calculate area
void displayData(double,double,double);

int main()
{
    double length,width,area;
    length=getLength();//function call to input length
    width=getWidth();//function call to input width
    area=getArea(length,width);//function call to calculate area
    displayData(length,width,area);//function call to display output
}

//function definition to input length
double getLength()
{
    double length_;
    cout<<"Enter the length of the rectangle: ";
    cin>>length_;
    return length_;
}

//function definition to input width
double getWidth()
{
    double width_;
    cout<<"Enter the width of the rectangle: ";
    cin>>width_;
    return width_;
}

//function definition to calculate area
double getArea(double length_, double width_)
{
    double area_;
    area_=length_*width_;
    return area_;
}

//function definition to display output
void displayData(double length,double width,double area)
{
    cout<<"------------------------------------------------"<<endl;
    cout<<"Length\t: "<<length<<endl;
    cout<<"Width\t: "<<width<<endl;
    cout<<"Area\t: "<<area<<endl;
}