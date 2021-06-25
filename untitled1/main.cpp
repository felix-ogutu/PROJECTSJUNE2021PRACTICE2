#include <iostream> //header files
using namespace std;
int main() {//main method
    int number=100000;//declaration and initialization of the number
    for(int i=1;i<=number;i++)//for loop to print the numbers 1 to 100000
    {
        if(i%3==0)//if condition to check whether the number is divisible by 3
        cout<<i<<endl;//to display numbers on the screen
    }
    return 0;
}