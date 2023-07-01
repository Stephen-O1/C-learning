/*Writing a program that extracts the part of a floating point number*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //Step1:Variable Definition
    double number;
    int intPart;
    double fractPart;

    //Step2: Input the number
    cout<<"Enter the number:";
    cin>>number;

    //Step3: Processing the number
    intPart = static_cast <int> (number);
    fractPart = number - intPart;

    //step4:Output the results
    cout<<fixed << showpoint << setprecision (2);
    cout<<"The original number is:"<<number<<endl;
    cout<<"The integer part of the number is:"<<intPart<<endl;
    cout<<"The fraction part of the number is:"<<fractPart<<endl;

    /*Developing a program that extracts the first digit of an integer*/
    //Step1: Define the varibale
    int givenNum, firstDigit;

    //Step2:Input of the number
    cout:"The given number is:";
    cin>>givenNum;

    //Step:Process for getting the first digit
    firstDigit= givenNum%10;

    //Step4: Output of the results
    cout<<"The given number is:"<<givenNum<<endl;
    cout<<"The first digit of the number is:"<<firstDigit<<endl;


    /*For the next exercise, we are going to process time into its constituent components.*/
    //Step1: Varibales Declarations
    unsigned long duration, hours, minutes, seconds;

    //Step2: prompting an input for the duration in seconds
    cout<<"Enter a positive integer for the number of given seconds:";
    cin>>duration;

    /*Step3: Processing the given information: 1hr=3600 seconds, 1 min=60seconds*/
    hours = duration/3600L;
    minutes = (duration- (hours*3600L))/60L;
    seconds = duration - (hours*3600L) - (minutes*60L);

    //Step4: Output the results
    cout<<"The given Duration is:"<<duration<<endl;
    cout<<"The result is:" << endl;
    cout<<hours<<"Hours,";
    cout<<minutes<<"minutes, and";
    cout<<seconds<<"seconds."<<endl;
    
    /*Exercise 3: Finding the average and deviation when given a set of 5 numbers*/
    //Ste1: Varibale declaration
    int num1,num2,num3,num4,num5;
    int sum;
    double average;
    double dev1,dev2,dev3,dev4,dev5;
    //step2: Prompting an input for the numbers.
    cout<<"ENter the first integer:";
    cin>>num1;
    cout<<"ENter the second integer:";
    cin>>num2;
    cout<<"ENter the third integer:";
    cin>>num3;
    cout<<"ENter the fourth integer:";
    cin>>num4;
    cout<<"ENter the fifth integer:";
    cin>>num5;
    //Step3:Processing the data
    sum=num1+num2+num3+num4+num5;
    average=static_cast<double>(sum)/5;
    dev1= num1-average;
    dev2=num2-average;
    dev3=num3-average;
    dev4=num4-average;
    dev5=num5-average;
    //Step4: Outputting the results
    cout<<fixed<<setprecision(2)<<showpos;
    cout<<"Sum of five numbers:"<<sum<<endl;
    cout<<"Average:"<<setw(9)<<average<<endl;
    cout<<"Deviation of number1:"<<setw(9)<<dev1<<endl;
    cout<<"Deviation of number2:"<<setw(9)<<dev2<<endl;
    cout<<"Deviation of number3:"<<setw(9)<<dev3<<endl;
    cout<<"Deviation of number4:"<<setw(9)<<dev4<<endl;
    cout<<"Deviation of number5:"<<setw(9)<<dev5<<endl;

    /*Another exercise: Write a program that, given a number of hours, calculates the number of weeks, 
    days, and hours included in that number.*/
    //step1: Define the integers
    unsigned long givenTime, weeks, days, hrs;
    //Step2: Input the Given Time
    cout<<"Enter the number of hours as a positive integer:";
    cin>>givenTime;
    //step3:Process the data to get the numer of weeks, days and hours
    weeks=givenTime/168L;
    days=(givenTime-(weeks*168L))/24L;
    hrs=givenTime-weeks*168L-days*24L;

    //step4:Output the data
    cout<<"The given time in hours is:"<<givenTime<<endl;
    cout<<"The result is ";
    cout<<weeks<<"Weeks, ";
    cout<<days<<"days, and ";
    cout<<hrs<<"hours."<<endl;

    /*Another exercise:Write a program that helps a cashier at a store find the amount of change given, 
    the amount of a purchase in dollars and cents, 
    and the amount of dollars and cents given by the customer. 
    The answer should be in dollars and quarters*/
    //Step1: Define the varibale
    double givenAmount, amountofPurchases, givenChange;
    //step2:Entering amount of purchases, given amount and given change
    cout<<"Enter the amount of purchase:";
    cin>>amountofPurchases;
    cout<<"Enter the amount given by the customer:";
    cin>>givenAmount;
    //step3: Getting the change
    givenChange=givenAmount-amountofPurchases;

    //Step4:Ouput of the information
    cout<<"The given amout is: $"<<givenAmount<<endl;
    cout<<"The amount of purchases is: $"<<amountofPurchases<<endl;
    cout<<"The change is: $"<<givenChange<<endl;

    return 0;
}