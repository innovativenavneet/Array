// BRUTE FORCE APPROACH 

/*the time coplexity is = O(n^3)*/

#include<iostream>
using namespace std;
int largestsum(int *arr,int n){
    int largestsum= 0;// for storing the value of the largest sum

    for(int i=0;i<n;i++){// this loop acts as a staring point of subarray
        for(int j=i;j<n;j++){// this loop acts as a ending point of subarray
            int pairsum=0;
            for(int k=i;k<=j;k++){
                pairsum += arr[k]; //this will store the value of the arrpairs+pairsum to pairsum variable

            }
            largestsum= max(largestsum,pairsum);//this will store the max value to largestsum

        }
    }
    return largestsum;
}
int main(){ 
    int arr[]={45,96,66,48,12,37,91,49};
    int n= sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
}
cout<<largestsum(arr,n);

    return 0;
}