#include "binary_trees.h"
/**
 * binary_tree_size -  function that measures the height of a binary tree
 * @tree:  a pointer to the root node of the tree to measure the height.
 * Return:0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int x;

	if (tree == NULL)
		return (0);
	x = 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
	return (x);
}
