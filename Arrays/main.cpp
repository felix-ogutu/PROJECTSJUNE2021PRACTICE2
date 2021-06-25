#include <iostream>
using namespace std;
int main() {
    int numbers[5], sum = 0;//declaration and initialization of the array
    cout << "Enter 5 numbers: ";

    //  Storing 5 number entered by user in an array
    //  Finding the sum of numbers entered
    for (int i = 0; i < 5; ++i)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum = " << sum << endl;
    //declare and initialization of the array
    int mark[7];
    int sum1=0;
    for(int  y=0;y<7;y++)
        cin>>mark[y];
    sum1+=mark[y];
    cout<<"Total marks ="<<sum1<<endl;
    return 0;
}