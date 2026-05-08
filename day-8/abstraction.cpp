#include<iostream>
#include<string>
using namespace std;

class ATM {
private:
    int balance;
public:
    ATM(int balance){
        this->balance = balance;
    }
    void Withdraw(int amount){
        if(amount>balance){
            cout<<"Insufficient balance"<<endl;
        }
        else{
            balance=balance-amount;
            cout<<"Withdrawal successful"<<endl;
        }
    }
    void ShowBalance(){
        cout<<"Updated Balance = "<<balance<<endl;
    }
};
int main(){
    ATM a (1000);
    a.Withdraw(500);
    a.ShowBalance();



    return 0;
}