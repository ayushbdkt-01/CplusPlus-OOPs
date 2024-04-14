#include<iostream>
using namespace std;

class test{

    int a,b;
    public:
        // test(int i,int j): a(i),b(j){
        // test(int i,int j): a(i),b(i+j){
        // test(int i,int j): a(i),b(2*j){
        // test(int i,int j): b(j),b(j+a){
        test(int i,int j): b(j),a(j+b){  // ->garbage value bc 'a' is declared before 'b'
            cout<<"Constructor called "<<endl;
            cout<<a<<"  "<<b<<endl;
        }

};
int main(){
    test a(12,13);
    return 0;
}