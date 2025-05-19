#include<iostream>
using namespace std;

int main(){
    int num = 1;
    while(num<=100){
        if(num%10==7 || (num/10)%10==7 || num%7==0)cout<<"Knock"<<endl;
        else cout<<num<<endl;
        num++;
    }
    return 0;
}