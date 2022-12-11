#include <iostream>
using namespace std;



void printArray(int arr[],int size){
    cout<<" printing the array "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<" printing done "<<endl;
}

int main(){
    int n=20;
    int arr[20]={1,2,3,4,5,6,7,8};
    printArray(arr,n); 

}