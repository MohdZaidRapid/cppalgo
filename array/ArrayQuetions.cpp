#include <iostream>
using namespace std;

void alternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
       
    }
}

void printArray(int arr[],int size){
for(int i=0;i<size;i++){
cout<<arr[i]<<" ";
}
}

void swap(int arr[]){
    int temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
}

int main(){

    int arr[5]={1,2,3,4,5};
    int size=5;
    alternate(arr,size);
    printArray(arr,size);
    cout<<endl;

    return 0;
}