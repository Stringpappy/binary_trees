/* Function to calculate the height of a binary tree */
int height(const binary_tree_t *tree) {
    if (tree == NULL)
        return 0;
    int left_height = height(tree->left);
    int right_height = height(tree->right);
    return 1 + (left_height > right_height ? left_height : right_height);
}
