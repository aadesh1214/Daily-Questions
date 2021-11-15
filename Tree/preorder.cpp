 void traverse(TreeNode* root, vector<int>&vec)
    {
        if(!root)
        {
            return;
        }
        vec.push_back(root->val);
        traverse(root->left,vec);
        traverse(root->right,vec); 
    }
        
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>vec;
        traverse(root,vec);
        return vec;
    }
