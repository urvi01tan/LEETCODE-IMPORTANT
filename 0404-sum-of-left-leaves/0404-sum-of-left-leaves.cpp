/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//for each level the leftmostttt
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*,char>>pq;
        int sum=0;
        pq.push({root,'R'});
        while(!pq.empty())
        {
            int sz=pq.size();

while(sz--)
{
    TreeNode*n=pq.front().first;
    char ch=pq.front().second;
    TreeNode*l=n->left;
    TreeNode*r=n->right;
    pq.pop();
    if(l!=NULL)pq.push({l,'L'});
    if(r!=NULL)pq.push({r,'R'});
    if(l==NULL && r==NULL)
    { 
        if(ch=='L'){sum=sum+n->val;cout<<n->val<<endl;}
    }
}
        }
        return sum;
    }
};