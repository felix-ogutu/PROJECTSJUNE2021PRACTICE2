#include <iostream>
using namespace std;
int main() {
    int a[4];// declare the size of the array
    //initialization of the array
    a[0]=15;
    a[1]=16;
    a[2]=18;
    a[3]=20;
    cout<<a[1]<<endl;
    cout<<a[3]<<endl;
    cout<<"-------------------"<<endl;
    //declare the size of the array
    int b[5];
    int i;
    for(i=0;i<5;i++)
        b[i]=0;
    for(i=0;i<5;i++)
    cout<<a[i]<<endl;
    //multidimensional array
    int c[4][4];
    int k,j;
    for(k=0;k<4;k++)
    {
        for(j=0;j<4;j++)
        {
            a[i][j]=0;
            cout<<a[i][j]<<endl;
        }
    }




    return 0;
}