/*Creating a program for concatenating the name
Given the first, initial and last names*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Defining the varibales
    string first;
    string initial;
    string last;
    string space =" ";
    string dot = ".";
    string fullName;

    //Inputting data for first, initial and last name
    cout<<"Enter the first name:";
    cin>>first;
    cout<<"Enter the initial name:";
    cin>>initial;
    cout<<"Enter the last name:";
    cin>>last;

    //Entering the full name using the concatenation operator
    fullName=first+space+initial+dot+space+last;
    cout<<"The full nane is:" <<fullName;

    return 0;

}