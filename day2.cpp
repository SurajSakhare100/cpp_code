#include <iostream>
using namespace std;
int main(){

    //caluculator

    char x;
    int a,c;
    cout<<"enter num :";
    cin>>a;
    cout<<"enter num :";
    cin>>c;
    cout<<"operation :";
    cin>>x;
    switch (x){
        case '+': cout<<"your ans : "<<a+c<<endl;
        break;
        case '-':cout<<"your ans : "<<a-c<<endl;
        break;
        case '*': cout<<"your ans : "<<a*c<<endl;
        break;
        case '/':cout<<"your ans : "<<a/c<<endl;
        break;
    }

    //find chain for 1330 rs

    int e=1330;
    int b;
      switch (e){
        case 1330:b=e%100;
                  cout<<"100 rs notes are : "<<e/100<<endl;
                  e=b;
        case 2: b=e%50;
                  cout<<"50 rs notes are : "<<e/50<<endl;
                  e=b;
        case 3: b=e%20;
                  cout<<"20 rs notes are : "<<e/20<<endl;
                  e=b;
        case 4: b=a%1;
                  cout<<"1 rs notes are : "<<e/1<<endl;
                  e=b;

    }
    return 0;
}
