class Solution {
  void helper(Node* root, vector<int> &ans){
      if(root == nullptr) return ;
      helper(root->left, ans);
      ans.push_back(root->data);
      helper(root->right,ans);
  }
  
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};
