#include <iostream>
using namespace std;
int main() {

    int firstNumber, secondNumber, sumOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;
    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    // Prints sum
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers<<endl;
    int num1=23;
    int num2=23;
    int sum;
    sum=num1+num2;
    cout<<"Sum ="<<sum<<endl;
    //programme to show the athrimetic operators
    int number1=100;
    int number2=50;
    int difference;
    int product ;
    int quotient;
    difference=number1-number2;
    product=number1*number2;
    quotient=number1*number2;
    //to display the result of operation the screen
    cout<<"Product of numbers"<<product<<endl;
    cout<<"Difference of numbers"<<product<<endl;
    cout<<"Quotient of numbers"<<product<<endl;

    return 0;

}