void traverse (TreeNode* root ,vector<int>&v)
    {
        if(root==NULL)return ;
        traverse(root->left,v);
        traverse(root->right,v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>a;
        traverse(root,a);
        return a;
    }
};
