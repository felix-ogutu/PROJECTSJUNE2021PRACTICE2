//C++ to show the function math
#include <iostream>
#include<cmath>
    using namespace std;

    int main() {
        cout << "Maximum" << max(5, 10) << endl;
        cout << "Minimum" << min(5, 10) << endl;
        cout << "Square Root" << sqrt(64) << endl;
        cout << "Round" << round(2.6) << endl;
        cout << log(2) << endl;
        int num2 = 23;
        if (num2 < 0)
            cout << "Negative number" << endl;
        else
            cout << "Positive number" << endl;
        //Programme to check whether number is even or odd

        int n;
        cout << "Enter an integer: ";
        cin >> n;//input by the user
        if ( n % 2 == 0)
            cout << n << " is even.";
        else
            cout << n << " is odd.";
        //Check Whether Number is Even or Odd using ternary operators
        int m;
        cout << "Enter an integer: ";
        cin >> m;

        (n % 2 == 0) ? cout << n << " is even." :  cout << m<< " is odd.";
        //programme to find the largest number among the three numbers
        int number1=23;
        int number2=24;
        int number3=25;
        if(number1>number2&&number1>number3)
            cout<<"Number 1 is the largest" <<number1<<endl;
        if (number2>number1&&number2>number3)
            cout<<"Number2 is the largest"<<number2<<endl;
        if(number3>number2&&number3>number1)
            cout<<"Number 3 is the largest"<<number3<<endl;


        return 0;
    }
