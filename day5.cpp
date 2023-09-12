#include <iostream>
using namespace std;

// Linear search by function
// if found , then return location i , otherwise return -1


// int linearSearch(string arr[], int n, string x)
// {
// 	int i;
// 	for (i = 0; i < n; i++){
// 		if (arr[i] == x){
// 			return i;
//             }
//             }
// 	return -1;
// }

// binary search using function

// int binarySearch(int arr[],int size,int key){
//     int low =0;
//     int high=size-1;
//     int mid=(low +high)/2;
//     while(low<=high){
//         if (arr[mid]==key){
//             return mid;
//         }
//         //left side
//         if(key>arr[mid]){
//             low=mid+1;
//         }
//         else{ 
//         //right side
//            high=mid-1;
//         }
//           mid=(low +high)/2;
//     }
//     return -1;
// }
int main()
{
    // ***** Linear search *****
    // int n;
    // cout<<"length of arr : ";
    // cin>>n;
	// string arr[n];
    // cout<<"your string array : ";
    // for (int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for (int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
	// string x;
    // cout<<"search for arr : ";
    // cin>>x;
	// int index = linearSearch(arr, n, x);
	// if (index == -1){
	// 	cout << "Element is not present in array";
    //     }
	// else{
	// 	cout << "Element found at position " << index;
    // }
    

    // ****** binery search ****

    // int size;
    // cout<<"size of array: ";
    // cin >>size;
    // int arr[size];
    // for(int i =0;i<size;i++){
    //     cin>>arr[i];
    // }
    // cout<<"your of array: ";
    // for(int i =0;i<size;i++){
    //     cout<<arr[i]<< " ";
    // }
    // cout<<endl;
    // int key;
    // cout<<"enter your key: ";
    // cin>>key;
    // int array=binarySearch(arr,7,key);
    // if(array==-1){
    // cout<<"your key is not present"<<endl;
    // }
    // else{
    //     cout<<"index of key is: "<<array<<endl;
    // }

    //**********bubble sort***********
    int arr[5]={12,7,1,45,9};
    for(int i=1;i<5;i++){
    for(int j=0;j<5-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
    }}}
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
    
}
