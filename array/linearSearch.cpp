#include <iostream>
using namespace std;

bool lineraSerach(int arr[],int size,int key){
for(int i=0;i<size;i++){
    if(arr[i]==key){
        return 1;
    }
}
return 0;
}

void reverseArray(int arr[],int n){
int start=0;
int end=n-1;

while(start<=end){
swap(arr[start],arr[end]);
start++;
end--;
}
}

void printArray(int arr[],int n){
  
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
  
}


int  main(){
    int arr[6]={5,7,-2,10,22,-2};
    int brr[5]={2,6,3,9,4};
  
  reverseArray(arr,6);
  printArray(arr,6);
  reverseArray(brr,5);
  printArray(brr,5);


    // whether 1 is present or not ?
  //   cout<<"Enter the element to search for "<< endl;
  //   int key;
  //   cin>>key;

  // bool found= lineraSerach(arr,10,key);
  // if(found){
  //   cout <<"Key is present ";
  // }else{
  //   cout <<"Key is not present ";
  // }

    return 0;


}