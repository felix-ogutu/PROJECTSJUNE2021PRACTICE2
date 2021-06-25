#include <iostream>
#include <fstream>
using namespace std;
int main() {
    //to create a file and open a file
    ofstream MyFile("filename.txt");
    //to write in the file
    MyFile<<"Files are used to store data";
    //closing the file
    ofstream MyDoc("felix.txt");
    MyDoc<<"Felix is java programmer";

    // Read from the text file
    ifstream MyReadFile("filename.txt");
    MyFile.close();


    return 0;
}