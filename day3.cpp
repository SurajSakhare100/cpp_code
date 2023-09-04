#include <iostream>
using namespace std;
int main(){
    // if - else condinals...

    // your are adult check..

    // cout<<"enter a num : ";
    // int a;
    // cin>>a;
    // if(a>18){
    //     cout<<"your are adult";
    // }
    // else{
    //     cout<<"your are not adult";
    // }  
    
    // check +ve/-ve number

    // cout<<"enter a num : ";
    // int b;
    // cin>>b;
    // if(b>0){
    //      cout<<"Num is positive";
    // }
    // else if (b<0){
    //      cout<<"Num is negitive";
    // }  
    // else{
    //     cout<<"Num is zero";
    // }

    // tricy question tell output ??

    //Q1

    // int a=2;
    // int b=a+1;
    // if((a=3)==b){
    //      cout<<a;
    // } 
    // else{
    //     cout<<a+1;
    // }

    //Q2

    // int a=24;
    // if(a>20){
    //      cout<<"I";
    // }
    // else if (a==24){
    //      cout<<"love";
    // }  
    // else{
    //     cout<<"my india ";
    // }

//  while loop , do while loop, for loop ..
    // int n;
    // int a=1;
    // cout<<"enter a num : ";
    // cin>>n;
    // while(a<=n){
    //     cout<<a;
    //     a=a+1;
    // }
// 1+2+3+4+...+n=sum
// tell sum??

    int n;
    int sum=0;
    cout<<"enter a num : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
        cout<<i<<" ";
        sum+=i;
        }
    }
    cout<<endl;
    cout<<"the sum of 1 to n even num is: "<<sum;

    return 0;

}