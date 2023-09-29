#include <iostream>
#include <vector>

std::vector<int> countElementsLessThan(const std::vector<int>& arr) {
    std::vector<int> result;

    // Define a Binary Search Tree (BST) class
    class TreeNode {
    public:
        int val;
        int lessThanCount;
        TreeNode* left;
        TreeNode* right;

        TreeNode(int x) : val(x), lessThanCount(0), left(nullptr), right(nullptr) {}
    };

    class BST {
    private:
        TreeNode* root;

        TreeNode* insert(TreeNode* root, int val, int& count) {
            if (root == nullptr) {
                return new TreeNode(val);
            }
            if (val < root->val) {
                root->lessThanCount++;
                root->left = insert(root->left, val, count);
            } else if (val > root->val) {
                count += root->lessThanCount + 1;
                root->right = insert(root->right, val, count);
            } else {
                count += root->lessThanCount;
                root->lessThanCount++;
            }
            return root;
        }

    public:
        BST() : root(nullptr) {}

        void insert(int val, int& count) {
            root = insert(root, val, count);
        }
    };

    // Initialize BST and result vector
    BST bst;

    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        bst.insert(arr[i], count);
        result.push_back(count);
    }

    return result;
}

int main() {
    std::vector<int> arr = {3, 1, 4, 2, 5};
    std::vector<int> result = countElementsLessThan(arr);

    std::cout << "Result: ";
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
