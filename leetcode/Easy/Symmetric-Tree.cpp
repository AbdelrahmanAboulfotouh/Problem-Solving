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
   string parenthesize(TreeNode *root, bool left_first = true) {	// O(n)
		if (!root)
			return "()";

		string repr = "(" + to_string(root->val);

		if (left_first) {
			if (left)
				repr += parenthesize(root->left, left_first);
			else
				repr += "()";	// null: no child

			if (right)
				repr += parenthesize(root->right, left_first);
			else
				repr += "()";	// null: no child
		} else {
			if (right)
				repr += parenthesize(root->right, left_first);
			else
				repr += "()";	// null: no child

			if (left)
				repr += parenthesize(root->left, left_first);
			else
				repr += "()";	// null: no child
		}
		repr += ")";

		return repr;
	}

	bool isSymmetric(TreeNode *root) {
		if (!root)
			return false;

		if (!root->left && !root->right)
			return true;

		if (!root->left && root->right || root->left && !root->right)
			return false;

		return parenthesize(root->left, true) == parenthesize(root->right, false);
	}
};