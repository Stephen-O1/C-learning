/*I'm learning to add a comment to a C++ program. Comments have opening an closing.
Comments starts with the slash(/) followed by the star(*).
Comments are closed by the star(*) followed by the slash(/) symbols.
Comments are used for defining what a program or a function should do and can be useful when doing a ode review.*/

#include <iostream>
/*In the next line, I'll insert a function for calling the std:: function because I'm not planning to use it in the code*/
using namespace std;
int main()
{
    std::cout<<"This is a simple C++ line ";
    std::cout<<"How am I doing this?" <<std::endl;
    std::cout<<"This feels simple enough";
    //Using double slash to add a line comment
    cout<<"*****"<<endl;
    cout<<"*****"<<endl;
    cout<<"*****"<<endl;
    cout<<"*****"<<endl;
    //That marks the end of the little star-box

    //Defining Varibales
    int num1;
    int num2;
    int num3;
    int sum;

    //Assigning values or the inputs
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    cout<<"Enter the third number:";
    cin>>num3;

    //Calculation and storing of result
    sum=num1+num2+num3;

    //Displaying output
    cout<<"The sum is:"<<sum;

    /*I'll try another function where I get to use the cin and cout but with a different function.*/
    //I'll define the variables
    int num4;
    int num5;
    int num6;
    int difference;

    //Assigning value to the inputs
    cout<<"Enter the 4th number:";
    cin>>num4;
    cout<<"Enter the 5th number:";
    cin>>num5;
    cout<<"Enter the 6th number:";
    cin>>num6;

    //calculation and storing of results
    difference =num4+num5-num6;

    //Displaying the output
    cout<<"The difference is:"<<difference;
    return 0;
}