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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        queue<TreeNode*>pq;
        pq.push(root);
        while(!pq.empty())
        {int sz=pq.size();
        int z=sz;
        double sum=0;
        while(sz--)
        {
            TreeNode*n=pq.front();
            pq.pop();
            sum=sum+n->val;
            TreeNode*l=n->left;
            TreeNode*r=n->right;
            if(l!=NULL)pq.push(l);
            if(r!=NULL)pq.push(r);
        }
ans.push_back(sum/z);

        }
        return ans;
    }
};