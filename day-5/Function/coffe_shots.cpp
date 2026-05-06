#include<iostream>
using namespace std;

int coffee_shots(int cs){
    return cs * 30;

}

int main(){
    int cs;
    cout<<"Enter no of coffee shots:"<<endl;
    cin>>cs;
    int r=coffee_shots(cs);
    cout<<"Total coffee "<<r<<" ml"<<endl;
    return 0;
}