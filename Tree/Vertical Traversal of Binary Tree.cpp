vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>c;
        vector<int>v;
        if(root==NULL)return vector<vector<int>>();
        queue<pair<TreeNode*,int>>q;
        q.push(make_pair(root,0));
        map<int,vector<int>>m;
        while(!q.empty())
        {
         pair<TreeNode*,int>p=q.front();
            TreeNode* temp=p.first;
            int d=p.second;
            m[d].push_back(temp->val);
           if(temp->left)q.push(make_pair(temp->left,d-1));
            if(temp->right)q.push(make_pair(temp->right,d+1));
            q.pop();
        }
        for(auto i:m)
        {
            
               c.push_back(i.second);
        }
        return c;
    }
