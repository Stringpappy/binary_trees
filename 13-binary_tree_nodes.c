#include "binary_trees.h"
/**
 * binary_tree_nodes - func that count node at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t lt_nodes = binary_tree_nodes(tree->left);
	size_t rt_nodes = binary_tree_nodes(tree->right);

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		return 1 + lt_nodes + rt_nodes;
	}
	return lt_nodes + rt_nodes;
}
