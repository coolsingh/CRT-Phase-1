#include<iostream>
using namespace std;

int add(int a,int b=3){
    return a+b;
}

int main(){
    int a,b;
    cout<<"Enter value for addition:"<<endl;
    cin>>a>>b;
    int r=add(a);
    cout<<"The total is "<<r<<endl;
    return 0;
}