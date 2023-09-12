#include <iostream>
using namespace std;
int main(){

//bubble sort
int arr[5]={12,7,1,45,9};
for(int i=1;i<5;i++){
for(int j=0;j<5-i;j++){
    if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
}}}
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
}