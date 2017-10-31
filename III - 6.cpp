#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i = 1 , nr1=0 , nr2=0 , nr3=0 , nr4=0 ;
    while (i < 40) {
        cout<<"*";
        nr1++;
        i++;
    }
    cout<<'\n';



    i = 1;
    do
    {
        cout<<"*";
        nr2++;
        i += 3;
    } while (i != 40);
    cout<<'\n';


    for (int i = 1; i<=40; i += 2){
        cout<<"*";
        nr3++;
    }
    cout<<'\n';



    for (int i = 1; i <= 40; i += 15)
        for (int j = 1; j <= i; j++){
            cout<<"*";
            nr4++;
        }
    cout<<'\n';

cout<<nr1<<" "<<nr2<<" "<<nr3<<" "<<nr4;

}
