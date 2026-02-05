#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int targetement){  // Binary search function
    int low=0, high=size-1;     // Initialize low and high pointers
    while (high>=low){     // Loop until low exceeds high
        int mid=(high+low)/2;
        if(arr[mid]>targetement)
         high=mid-1;
        else if(arr[mid]<targetement)
         low=mid+1;
        else
         return mid;
    }
    return -1;    // Return -1 if element is not found
}
void display(int result){     //display the result
    if(result!=-1){
        cout<<"TargetElement found at index = "<<result<<endl;
    }
    else{
        cout<<"TargetElement not found in the array."<<endl;
    }
}
int main ( ) {
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the TargetElement to search: ";
    cin>>key;
    
    int result=binarysearch(arr,n,key);    // Call binary search function
    display(result);     // Pass the result to the display function

return 0;
}