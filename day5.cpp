#include <iostream>
using namespace std;

// Linear search 
// if found location is i , otherwise return -1
int search(string arr[], int n, string x)
{
	int i;
	for (i = 0; i < n; i++){
		if (arr[i] == x){
			return i;
            }
            }
	return -1;
}

// searching  string
int main()
{
    int n;
    cout<<"length of arr : ";
    cin>>n;
	string arr[n];
    cout<<"your string array : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	string x;
    cout<<"search for arr : ";
    cin>>x;
	int index = search(arr, n, x);
	if (index == -1){
		cout << "Element is not present in the array";
        }
	else{
		cout << "Element found at position " << index;
    }
	return 0;
}
