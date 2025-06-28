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
    void check(TreeNode* root , int targetSum , int&count , vector<long long>&test){
        if(root==NULL) return ;
        test.push_back(root->val);
        check(root->left , targetSum , count , test);
        check(root->right , targetSum , count,test);
        long long sum = 0;
        for(int i=test.size()-1;i>=0;i--){
            sum+=test[i];
            if(sum==targetSum) count++;
        }
        test.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        int count = 0;
        vector<long long> test;
        check(root , targetSum , count , test);
        return count;
    }
};
