#include "binary_trees.h"

/**
 * binary_tree_balance -  func that measures the balance factor of binary tree
 * @tree:a pointer to the root node of the tree to measure the balance factor
 * Return: 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lt_height, rt_height;


	if (tree == NULL)
		(return 0);
	lt_height = height(tree->left);
	rt_height = height(tree->right);
	return (lt_height - rt_height);
}
