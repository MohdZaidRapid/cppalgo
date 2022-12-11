// CPP program to illustrate
// Initializing of pair STL
#include <iostream>
// #include <utility>
#include <bits/stdc++.h>

using namespace std;

// Driver Code

char getMaxiCharacter(string s)
{

	int arr[26] = {};

	for (int i = 0; i < s.length(); i++)
	{
		char ch = s[i];
		int number = 0;

		if (ch >= 'a' && ch <= 'z')
		{
			number = ch - 'a';
		}
		else
		{
			number = ch - 'A';
		}
		arr[number]++;
	}
	int maxi = -1, ans = 0;
	for (int i = 0; i < 26; i++)
	{
		if (maxi < arr[i])
		{
			ans = i;
			maxi = arr[i];
		}
		char finalAns = 'a' + ans;
		cout<<finalAns;
		return finalAns;
	}
}
int main()
{
	char a = getMaxiCharacter("rare");
	// defining a pair
	// pair<string, double> PAIR2("GeeksForGeeks", 1.23);

	// cout << PAIR2.first << " ";
	// cout << PAIR2.second << endl;

	return 0;
}

// private:
//     bool valid(char ch) {
//         if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
//             return 1;
//         }

//         return 0;
//     }

//     char toLowerCase(char ch) {
//     if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
//         return ch;
//     else{
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }

//  private:
//     bool valid(char ch){
//         if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))||(ch>='0'&& ch<='9')){
//             return 1;
//         }
//         return 0;
//     }
//    public:
//    char toLowerCase(char ch){
//         if((ch>="a"&&ch<="z")||(ch>="0"&&ch<="9")){
//             return ch;
//         }else{
//             char temp=ch-"A"+"a";
//             return temp;
//         }