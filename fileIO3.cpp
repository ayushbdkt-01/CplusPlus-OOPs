#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream ayushOut;
    ayushOut.open("this.txt");
    ayushOut<<"Fuck you man ";
    ayushOut<<"ohh yeahh im loving it";
    ayushOut.close();


    ifstream ayushIn;
    string s,t;
    ayushIn.open("this.txt");
    while(ayushIn.eof()==0){
        getline(ayushIn,s);
        cout<<s<<endl;
    }
    ayushIn.close();
    return 0;
}