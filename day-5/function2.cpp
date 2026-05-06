//without argument with return type
#include<iostream>
using namespace std;

int add(int a=5,int b=5){
    return a+b;

}

int main(){
    cout<<add()<<endl;
    return 0;
}