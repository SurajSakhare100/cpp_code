#include <iostream>
using namespace std;
int main (){
    //task - add 2d array
    int m;
    int n;
    cout <<"enter row number : ";
    cin>>m;
    cout <<"enter column number : ";
    cin>>n;
cout<<endl;

    int arr[m][n];
    int arr1[m][n];
    int arr2[m][n];
//2 array -- user input 
for(int i=0;i<m;i++){
    for (int j =0;j<n;j++){
       cout<<"index of [" << i <<"," <<j <<"] : ";
       cin>>arr1[i][j];
    }
cout<<endl;

}
cout<<endl;
for(int i=0;i<m;i++){
    for (int j =0;j<n;j++){
       cout<<"index of [" << i <<"," <<j <<"] : ";
       cin>>arr2[i][j];
    }
cout<<endl;
}
//print 2 array
cout<<"your first array : \n";
for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
       cout<<arr1[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;
cout<<"your second array : \n";
for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
       cout<<arr2[i][j]<<"\t";
    }
    cout<<endl;
}
//addition of 2 array
cout<<endl;
cout<<"addition of 2 array : \n";
for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
       arr[i][j]=arr1[i][j]+arr2[i][j];
       cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;
cout<<"subtraction of 2 array : \n";
for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
       arr[i][j]=arr1[i][j]-arr2[i][j];
       cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}
cout<<endl;
cout<<"multiplication of 2 array : \n";
for(int i=0;i<m;i++){
    for (int j=0;j<n;j++){
       for (int k=0;k<2;k++){
        arr[i][j] += arr1[i][k] * arr2[k][j];
       }
       cout<<arr[i][j]<<"\t";
    }
    cout<<endl;
}

// cout <<"helloworld";
}