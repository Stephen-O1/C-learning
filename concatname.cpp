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

    /*Below we start a program for dwaring a right and led triangle
    using the * element*/
    cout<<"*" <<endl;
    cout<<"**"<<endl;
    cout<<"***"<<endl;

    /*Writing a prgram that writes the Capetal H made of the capital letter H*/
    cout<<"H   H" <<endl;
    cout<<"H   H" <<endl;
    cout<<"HHHHH" <<endl;
    cout<<"H   H" <<endl;
    cout<<"H   H" <<endl;

    /*Wriitng a Program that inputs four integer values and calculates
    and prints the sum of them*/
    //Step one define the vaibales
    int no1;
    int no2;
    int no3;
    int no4;
    int sumNumbers;

    //Step2: Inputting the numbers
    cout<<"Enter the first integer number:";
    cin>> no1;
    cout<<"Enter the second integer number:";
    cin>> no2;
    cout<<"Enter the third integer number:";
    cin>> no3;
    cout<<"Enter the fourth integer number:";
    cin>> no4;

    //Finding the sume of the numbers
    sumNumbers = no1+no2+no3+no4;

    //Printing the sum of the integers
    cout<<"The sum of the integers is:"<<sumNumbers<<endl;

    /*The next task is to write a program that calculates the area and the perimeter of a square
    when the size of one side is given*/
    //For squares all side are equal, area is L*L
    //Step1:Define the variables
    int sideSquare;
    int areaSquare;
    int perimSquare;

    //Inputting the side of the square
    cout<<"Enter the size of the side of the square:";
    cin>>sideSquare;

    //Finding area and periemter of the square
    areaSquare=sideSquare * sideSquare;
    perimSquare = 4*sideSquare;

    //Outputting the area and perimeter of the square
    cout<<"The area of the square is:"<<areaSquare<<endl;
    cout<<"The Perimeter of the square is:"<<perimSquare<<endl;

    /*Writing a program that prints my Name in the format
    Your Full Namr is: last, first*/
    //Step one: Define the varibales
    string jina1;
    string jina2;
    string space2=" ";
    string fullJina;

    //Input the jina1 and jina 2
    cout<<"The first name/jina is:";
    cin>>jina1;
    cout<<"The Last name/Jina is:";
    cin>>jina2;

    //Inputting the full name (Jina Kamili)
    fullJina = jina2+space2+jina1;
    //Output of the full name
    cout<<"Your full name is:"<<fullJina<<endl;

    /*Writing a program that calculates the sales tax of a transaction given the sales ammount
    The tax is 9%. Use a constant to define the tax rate*/
    //Step 1: Define the variables
    int sales;
    const double taxRate=0.09;
    double taxAmount;
    double amountDue;

    //Step two: ENtering the sales amount
    cout<<"The sales amount is:";
    cin>>sales;

    //Step3: Calculate the tax
    taxAmount = taxRate * sales;
    amountDue = sales-taxAmount;

    //Step4: Output the tax result
    cout<<"The sales amount:"<<sales<<endl;
    cout<<"The Tax amount:"<<taxAmount<<endl;
    cout<<"Total Amount Due:"<<amountDue<<endl;

    /*Last task of chapter 2: Writing a program that prints the address when given the Street number,
    Street name, City name, State name and Zip code.
    The format should be: street-number. street city, state zip-code*/

    //Step1: Define the variables
    string streetNumber;
    string streetName;
    string cityName;
    string stateName;
    string zipCode;
    string address;
    string space3=" ";
    string comma=",";

    //Step2: Entering the variables names
    cout<<"Street number is:";
    cin>>streetNumber;
    cout<<"Street Name is:";
    cin>>streetName;
    cout<<"City Name is:";
    cin>>cityName;
    cout<<"State Name is:";
    cin>>stateName;
    cout<<"Zip Code is:";
    cin>>zipCode;

    //Step3: Formula for adding the address
    address = streetNumber+comma+space3+cityName+comma+space3+stateName+comma+space3+zipCode;

    //Step4: Output for the address
    cout<<"The address is:"<<address<<endl;

    /*End of Chapter 2 tasks. I performed quite well. I had a grasp of data types. I learnt integers, characters, Booleans, strings and floats.
    Throughout the chapter, I have practised manipulating data. Giving inputs and getting outputs. I have also learned operators.*/

    return 0;

}
