class Solution {
public:
    void traverse (TreeNode* root,vector<int>&v){
    if(root==NULL)return;
    traverse(root->left,v);
    v.push_back(root->val);
    traverse(root->right,v);
    
}
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>v;
        traverse(root,v);
        return v;
        
    }
};
