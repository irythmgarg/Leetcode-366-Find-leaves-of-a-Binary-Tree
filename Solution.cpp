class Solution {
public:
    // Map to store nodes grouped by their height from the bottom
    map<int, vector<int>> mp;

    // Helper function to compute the height of each node and group them
    int collectNodeWithHeight(TreeNode* root) {
        if (!root)
            return 0; // Null nodes have height 0

        // Recursively calculate height of left and right subtrees
        int height = 1 + max(collectNodeWithHeight(root->left),
                             collectNodeWithHeight(root->right));
        
        // Store the node in the corresponding height group
        mp[height].push_back(root->val);

        return height;
    }

    // Main function to return leaves grouped by the round of removal
    vector<vector<int>> findLeaves(TreeNode * root) {
        mp.clear(); // Clear any previous data
        collectNodeWithHeight(root); // Start collecting node heights

        vector<vector<int>> result;
        for (auto &it : mp) {
            result.push_back(it.second); // Append nodes grouped by height
        }

        return result;
    }
};
