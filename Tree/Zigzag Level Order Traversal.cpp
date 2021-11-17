class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>c;
        
        if(root==NULL)return vector<vector<int>>();
        stack<TreeNode *>s1,s2;
        s1.push(root);
        while(!s1.empty() || !s2.empty())
        { 
            vector<int>v;
            while(!s1.empty())
            {
               TreeNode * temp1=s1.top();
                v.push_back(temp1->val);
                if(temp1->left)s2.push(temp1->left);
                if(temp1->right)s2.push(temp1->right);
                
                s1.pop();
            }
            c.push_back(v);
            v.clear();
            while(!s2.empty())
            {
                TreeNode* temp=s2.top();
                v.push_back(temp->val);
               
                if(temp->right)s1.push(temp->right);
                 if(temp->left)s1.push(temp->left);
                s2.pop();
                
            }
            if(v.size())
                c.push_back(v);
            
        }
        return c;
        
    }
};
