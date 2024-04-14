#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // writing to a file
    ofstream ayushOut("this.txt");
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    ayushOut<<"Name is "+name;
    ayushOut.close();

    ifstream ayushIn("this.txt");
    string data;
    ayushIn>>data;
    cout<<data<<endl;

    return 0;
}