#include "binary_trees.h"
/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: is a pointer to root node o tree to count the number of leave
 * Return: 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int x;


	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else
	{
		x = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		return (x);
	}
}
