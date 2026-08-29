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
    int getMinimumDifference(TreeNode* root) {
        vector<int>vec;
        queue<TreeNode*>pq;
        pq.push(root);
       
        while(!pq.empty())
        {
            TreeNode*node=pq.front();
             vec.push_back(node->val);
            pq.pop();
            TreeNode*left=node->left;
            TreeNode*right=node->right;
            if(left!=NULL)pq.push(left);
            if(right!=NULL)pq.push(right);
        }
sort(vec.begin(),vec.end());
int mini=1e8;
for(int i=0;i<vec.size()-1;i++)
{
    mini=min(mini,vec[i+1]-vec[i]);
}
return mini;
    }
};