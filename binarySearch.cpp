#include <iostream>
using namespace std;

int binarySearch(int arr[],int s,int e,int key){
    int start=s;
    int end=e;
    
    int mid=start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            if(arr[mid]==key){
                return mid;
            }
            if(key>arr[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
    }
    return -1;
}

int main(){
    int arr[5]={5,6,7,8,9};
    int 
}