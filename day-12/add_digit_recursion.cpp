#include<iostream>
using namespace std;
int sumofdigits(int x){

    if(x==0){
        return 0;
    }
    return(x%10)+sumofdigits(x/10);
}

int main(){
    int n=2345;
    int ans=sumofdigits(n);
    cout<<ans<<endl;
    return 0;
}