#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int i,f1=0,f2=0,f3=0,f4=0,f5=0,f6=0,f7=0,f8=0,f9=0,fs=0;
    char n[100];
    cin.get(n,100);
    for(i=0;i<=strlen(n);i++)
    switch( n[i] ) {
     case '1':
         f1++;
         break;
     case '2':
         f2++;
         break;
     case '3':
         f3++;
         break;
     case '4':
         f4++;
         break;
      case '5':
         f5++;
         break;
     case '6':
         f6++;
         break;
     case '7':
         f7++;
         break;
     case '8':
         f8++;
         break;
      case '9':
         f9++;
         break;
     case ' ':
         fs++;
         break;
 }


}
