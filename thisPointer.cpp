#include<iostream>
using namespace std;
class a{
    int b;
    public:
        a set(int b){
            this->b=b;
            return *this;
        }
        void print(){
            cout<<b<<endl;
        }
};
int main(){
    a ayush;
    ayush.set(12).print();
    return 0;
}