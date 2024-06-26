#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int x;

	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left && tree->right)
	{
		x = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
		return (x);
	}
	return (0);
}
