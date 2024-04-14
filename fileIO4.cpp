#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream inserting;
    inserting.open("C:\\Users\\ayush\\Desktop\\ayushbdkt.txt");
    cout<<"File created successfully"<<endl;
    inserting<<"MY name is Ayush";
    cout<<"data inserted successFully"<<endl;

    ifstream show;
    // show.open("C:\\Users\\ayush\\Desktop\\ayushbdkt.txt");
    string str;
    while(show.eof()==0){
        cout<<str;
        getline(show,str);
    }
    show.close();
    return 0;
}