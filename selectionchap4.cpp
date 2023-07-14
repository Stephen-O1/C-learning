#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*define a simple operation that calculates the weekly earnings of a an employee.
    Mimimum working hours is 40 hours. Earning per hour is $20 while overtime is $10 per hour*/
    double hours;
    double rate;
    double regularPay;
    double overtimePay;
    double totalPay;

    //input the date
    cout<<"Enter the total hours worked:";
    cin>>hours;
    cout<<"Enter the Pay rate:";
    cin>>rate;
    //Calculate the pay the does not depend on overpay
    regularPay=hours*rate;
    overtimePay = 00.0;
    //Calcuate pay if there is overtime
    if(hours>40)
    {
        overtimePay=(hours-40)*10;
    }
    //calculate the toal
    totalPay=regularPay+overtimePay;

    //output the data
    cout<<"The hours wroked is:"<<hours<<endl;
    cout<<"The regularl Pay is:"<<regularPay<<endl;
    cout<<"The overtime pay is:"<<overtimePay<<endl;
    cout<<"Total Pay is:"<<totalPay<<endl;

    /*A program for Rating grades as pass or fail
    The goal of this exercise is to learn if-else statement aka-two-way selection statements*/
    //step1: Define the inputs
    double grade;
    //Step2:Enter the grade
    cout<<"Enter the student's grade:";
    cin>>grade;
    //step3: Defining the statements
    if(grade>60)
    {
        cout<<"The student has Passed"<<endl;
    }
    else
    {
        cout<<"The student has failed and he needs to repeat the subject"<<endl;
    }

    /*Creating a program that takes two integers, compares them and then prints the largest one.*/
    //Step1:Define the integers variables
    int Num1;
    int Num2;
    int Large;
    //Step2: Input the nnumbers
    cout<<"Insert the first number:";
    cin>>Num1;
    cout<<"Insert the second number:";
    cin>>Num2;
    //Statement for getting the large number
    if(Num1>Num2)
    {
        Large=Num1;
    }
    else
    {
        Large=Num2;
    }
    //last step:Output the large number
    cout<<"The largest number is:"<<Large<<endl;

    /*To learn and master Nested if-esle statement, write a program that
    m that determines if one number is greater than, equal to, or less than a second number*/
    //Step1: capture the variables
    int number1, number2;

    //Step2: insert the two numbers.
    cout<<"Enter the first number:";
    cin>>number1;
    cout<<"enter the second number:";
    cin>>number2;

    //step3: Define the comparison using if else statement
    if(number1>=number2)
    {
        if(number1>number2)
        {
            cout<<"The first number is greater than the second number"<<endl;
        }
        else
        {
            cout<<"The first number equals the second number"<<endl;
        }
    }
    else
    {
        cout<<"The first number is lesser than the second number"<<endl;
    }

    /*Multiway selection and the introduction of else if/compact version of if else statements
    In this program we are goign to design a grading system using marks.
    0-29 E, 30-49D, 50-59C, 60-69B,70+A */
    //Step1: Define the variables
    int marks;
    char grad3;
    //step2: Enter the marks
    cout<<"Enter the Marks score of the student:";
    cin>>marks;

    //step3: Define the steps required to get the grades
    if(marks>=70)
    {
        grad3='A';
    }
    else if(marks>=60)
    {
        grad3='B';
    }
    else if(marks>=50)
    {
        grad3='C';
    }
    else if(marks>=40)
    {
        grad3='D';
    }
    else
    {
        grad3='E';
    }

    //Output the grade
    cout<<"The grade is:"<<grad3<<endl;


    
    return 0;
}