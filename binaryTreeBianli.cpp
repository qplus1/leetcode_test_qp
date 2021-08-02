// qianxubianli
class Solution
{
public:
    void traversal(TreeNode *cur, vector<int> &vec)
    {
        if (cur == nullptr)  return;
        vec.emplace_back(cur->val);
        traversal(cur->left, vec);
        traversal(cur->right,vec);
    }

    vector<int>  preorderTraversal (TreeNode *root) {
        vector<int> result;
        
    }