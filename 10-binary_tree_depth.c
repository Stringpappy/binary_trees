#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree:  a pointer to the node to measure the depth
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree != NULL)
	{
		return 1 + binary_tree_depth(tree->left);
	}
}
