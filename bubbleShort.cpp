#include <iostream>
using namespace std;
void PrintArray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}
void BubbleShort(int arr[],int n){
    for(int j=0;j<n;j++){
    for(int i =0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    }
    }
}

int main() {
	int n;
	cin>>n;
	int input[100];
	for(int i=0;i<n;i++){
	    cin>>input[i];
	}
	 BubbleShort(input,n);
	 PrintArray(input,n);
	
	    
	return 0;
}
