#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*Write a code fragment to add 4 to an integer variable num if a float variable 
    amount is greater than 5.4.*/

   /* int num;
    float num2;

    cout<<"Enter the number:";
    cin>>num;
    cout<<"Enter float variable:";
    cin>>num2;

    if(num2>5.4)
    {
        num+=4;
    }
    else
    {
        num+=0;
    }
    cout<<"The new number is:"<<num<<endl;

    int divisor;
    int dividend;
    double quotient;
    cout<<"Enter the dividend:";
    cin>>dividend;
    cout<<"Enter the divisor:";
    cin>>divisor;

    if (divisor!=0)
    {
        quotient=(dividend/divisor);
    }
    else
    {
        quotient=divisor;
    }
    cout<<"The dividend is: "<<dividend<<endl;
    cout<<"The divisor is: "<<divisor<<endl;
    cout<<"The quotient is: "<<quotient<<endl; */

    /*Write a code fragment that tests the value of an integer num1. If the value is 10, 
    square num1. If it is 9, read a new value into num1. If it is 2 or 3, multiply num1 
    by 99 and print out the result. Implement your code using nested if statements, not 
    a switch statement.
    int numb1;
    
    cout<<"Enter number:";
    cin>>numb1;

    if(numb1==10)
    {
        numb1=numb1*numb1;
    }
    else
    {
        if(numb1==9)
        {
            cout<<"Enter a new number:";
            cin>>numb1;
        }
        else
        {
            if(numb1==2 || numb1==3)
            {
                numb1= numb1*99;
                cout<<"Numb1*99 is: "<<numb1<<endl;
            }
        }
    }

    cout<<"The value of Number 1 is: "<<numb1<<endl;

    /*Write a program that, given the type of vehicle (‘c’ for car, ‘b’ for bus, ‘t’ for 
    truck) and the hours a vehicle spent in the parking lot, returns the parking charge 
    based on the rates shown below*/
    /*char vehicle;
    int hours;
    double parkingCharge;

    cout<<"Enter the type of Vehicle t or c or b: ";
    cin>>vehicle;
    cout<<"Enter the number of hours: ";
    cin>>hours;

    if (vehicle=="t")
    {
        parkingCharge = hours*4;
    }
    else if (vehicle=="c")
    {
        parkingCharge= hours*2;
    }
    else if (vehicle=="b")
    {
        parkingCharge=hours*3;
    }

    cout<<"Vehicle Type is:"<<vehicle<<endl;
    cout<<"The total parking hours is: "<<hours<<endl;
    cout<<"Total parking Charge is: "<<parkingCharge<<endl;

    /*Write a program that determines a student’s grade. It reads three test scores 
    (between 0 and 100) and calculates the grade based on the following rules*/
    
    /*int test1Score, test2Score, test3Score;
    double averageScore;

    cout<<"Enter the score of Test 1";
    cin>>test1Score;
    cout<<"Enter the score of Test 2";
    cin>>test3Score;
    cout<<"Enter the score of Test 3";
    cin>>test3Score;

    averageScore=(test1Score+test2Score+test3Score)/3;

    if(averageScore>=90)
    {
        cout<<"The grade is A";
    }
    else if(averageScore>=80 && averageScore<90 && test3Score>90)
    {
        cout<<"The grade is A";
    }
    else if(averageScore>=80 && averageScore<90 && test3Score>90)
    {
        cout<<"The grade is B";
    }
    else if(averageScore>=70 && test3Score>80)
    {
        cout<<"The grade is B";
    }
    else if(averageScore>70 && test3Score>70)
    {
        cout<<"The grade is C";
    }
    else if(averageScore<60 && test3Score>60)
    {
        cout<<"The grade is D";
    }
    else if(averageScore<60 && test3Score<60)
    {
        cout<<"The grade is F"<<endl;
    }

    /*Write a program that calculates and prints a student's total tuition at a college
    The student pays a fee of $10 per unit for upto 12 units; once they have paid
    for 123 units, they have no additional per-unit fee. The registration fee is$10 per student*/
   
   
   /* double registrationFee;
    int units;
    double tuitionFees;

   registrationFee=10.00;
   cout<<"Enter units being taken: ";
   cin>>units;
   if(units<=12)
   {
    tuitionFees = registrationFee+(units*10);
   }
   else
   {
    if(units>12)
    {
        tuitionFees=registrationFee+(12*10);
    }
   }

   cout<<"Registration Fee is: $"<<registrationFee<<endl;
   cout<<"Total Units taken is: $"<<units<<endl;
   cout<<"The total tution fees is: $"<<tuitionFees<<endl;
*/

   /*Write a program that, given the quantity and unit price of an item, calculates
   the toral price after thr discount*/
   double price;
   double discount;
   int totalItems;
   double priceBeforeDiscount;
   double totalCost;

   cout<<"Enter the number of Items bought:";
   cin>>totalItems;
   cout<<"Enter the price of the item: ";
   cin>>price;
   priceBeforeDiscount=price*totalItems;

   if(totalItems<=9)
   {
    discount=priceBeforeDiscount*0;
   }
   else if(totalItems>=10||totalItems<=49)
   {
    discount=priceBeforeDiscount*0.03;
   }
   else if(totalItems>=50||totalItems<=99)
   {
    discount=priceBeforeDiscount*0.03;
   }
   else if(totalItems>=100)
   {
    discount=priceBeforeDiscount*0.1;
   }

   totalCost=priceBeforeDiscount-discount;

   cout<<"The Items bough are: "<<totalItems<<endl;
   cout<<"The price of each Item is "<<price<<endl;
   cout<<"The total price of the items is "<<priceBeforeDiscount<<endl;
   cout<<"The total discount is "<<discount<<endl;
   cout<<"The total price after discount is "<<totalCost<<endl;


    return 0;
}