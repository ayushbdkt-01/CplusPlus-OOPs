#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // string s="Elvish bhaiiiiiii ...koi bol skta h kya";
    // ofstream out("sample.txt");  // opening file by constructor
    // out<<s;    // writing in file
    // string s2;
    // ifstream in("sample2.txt"); // reading from a file
    // getline(in,s2);
    // cout<<s2<<endl;

    // string s1="Ayush King king king";
    // ofstream ayushWriting("sample.txt");
    // ayushWriting<<s1;

    // string s2="";
    // ifstream ayushRead("sample.txt");
    // ayushRead>>s2;
    // getline(ayushRead,s2);
    // cout<<s2<<endl;

    ofstream write("sample.txt");
    string s1="AYush New Sample";
    write<<s1;

    ifstream read("sample.txt");
    string s2;
    getline(read,s2);
    cout<<s2<<endl;

    return 0;
}