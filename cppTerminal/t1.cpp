#include <iostream>
#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE

    freopen("input1.txt", "r", stdin);

    freopen("output1.txt", "w", stdout);

#endif
    unordered_set<int> s;

    // loop across the unordered set
    // display the value
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    cout << "number of elements  in uordered_set " << s.size() << endl;

    // s.clear();

    cout << "number of elements  in uordered_set size after clear " << s.size() << endl;

    int key = 20;
    if (s.find(key) != s.end())
    {
        cout << "key found" << endl;
    }
    if (s.find(key) == s.end())
    {
        cout << "key not found" << endl;
    }
    else
    {
        auto temp = s.find(key);
        s.erase(temp);
    }

    // int deleted_key=15;
    // s.erase(deleted_key);

    cout << "number of elements  in uordered_set size after clear " << s.size() << endl;
    //    for(auto it=s.begin();it!=s.end();it++){
    //  	cout<<(*it)<<endl;
    //  }
}