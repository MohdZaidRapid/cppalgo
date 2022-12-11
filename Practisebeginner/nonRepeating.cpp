//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       int chars=256;
       int n=S.size();
       int arr[chars];
       
       fill(arr,arr+chars,0);
       
       for(int i=0;i<n;i++){
           arr[S[i]]++;
       }
       
        for(int i=0;i<n;i++){
           if(arr[S[i]]==1){
               return (char)S[i];
           }
       }
       return '$';
       
    }

};

//{ Driver Code Starts.

// int main() {
	
// 	int T;
// 	cin >> T;
	
// 	while(T--)
// 	{
	
// 	    string S;
// 	    cin >> S;
// 	    Solution obj;
//         char ans = obj.nonrepeatingCharacter(S);
        
//         if(ans != '$')
// 	    cout << ans;
//         else cout << "-1";
            
//         cout << endl;
	    
// 	}
	
// 	return 0;
// }

// } Driver Code Ends