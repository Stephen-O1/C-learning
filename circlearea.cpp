#include <iostream>
using namespace std;
int main()
{
    //Define the stored constant
    const double pi=3.14159;
    //Defining the three variables
    double radious;
    double perimeter;
    double area;

    //inputting value of radious
    cout<<"Enter the radious of the circle:";
    cin>>radious;

    //calculating perimeter and area and stroring them in variables
    perimeter = 2*pi*radious;
    area = pi*radious*radious;

    //outputting the values of radious,perimeter and area
    cout<<"The radius of the circle is:" <<radious<< endl;
    cout<<"The perimeter of the circle is:"<<perimeter<< endl;
    cout<<"The area of the circle is:"<<area;

    return 0;
}