#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n,ok=1;
    do{
        if(ok==0)
            cout<<"ERROR";
        cin>>n;
        ok=0;

    }while(n<0||n>90);
}
