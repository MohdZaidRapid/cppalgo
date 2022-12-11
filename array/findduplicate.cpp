#include <iostream>
using namespace std;

int main(){
    int ans=0;
   int arr[5]={1,2,3,4,1};
    int n=5;
    for(int i=0;i<n;i++){
    ans=ans^arr[i];
    }
    cout<<ans<<" ";
    for(int i=1;i<n;i++){
        ans=ans^i; 
    }
    cout<<ans<" ";
    return ans;
    
}