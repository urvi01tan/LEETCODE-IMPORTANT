/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int counter = 0;

    // Returns {sum of subtree, number of nodes in subtree}
    pair<int, int> fun(TreeNode* root) {

        if (root == NULL)
            return {0, 0};
        pair<int, int> left = fun(root->left);
        pair<int, int> right = fun(root->right);
        int sum = left.first + right.first + root->val;
        int count = left.second + right.second + 1;
        int avg = sum / count;
        if (avg == root->val)
            counter++;
        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        fun(root);
        return counter;
    }
};