#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
    T* arr;
    int size;
    public:
        vector(int size){
            this->size=size;
            arr=new T[size];
        }
        T findSum(vector &v){
            T ans=0;
            for (int i = 0; i < size; i++)
            {
                ans+=this->arr[i];
            }
            return ans; 
        }
};

int main(){
    vector v(3);
    v.arr[0]=1;
    v.arr[1]=2;
    v.arr[2]=3;
    int ans=v.findSum(v);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}