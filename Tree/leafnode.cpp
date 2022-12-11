#include <iostream>
#include <queue>
#include <vector>
#include <map>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

class Solution
{
public:
    map<int, vector<int>> mp;
    // height ki function
    int height(Node *root)
    {
        if (root == NULL)
        {
            return 0;
        }
        int LH = height(root->left);
        int RH = height(root->right);

        int H = 1 + max(LH, RH);

        mp[H].push_back(root->data);
        return H;
    }

    vector<vector<int>> findLeaves(Node *root)
    {

        vector<vector<int>> result;

        height(root);

        map<int, vector<int>>::iterator itr;

        for (itr = mp.begin(); itr != mp.end(); itr++)
        {
            result.push_back(itr->second);
        }

            return result;
    }
};

int main()
{
    Solution sl=Solution();
    sl.findLeaves(2);
    return 0;
}