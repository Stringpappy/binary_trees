#include "binary_trees.h"
/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: 0
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent = node->parent->parent;


	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return  (NULL);


	if (grandparent->left == node->parent)
	{
		if (grandparent->right != NULL)
		{
			return (grandparent->right);
		}
		else
			return (NULL);
	}
	else
	{
		if (grandparent->left != NULL)
		{
			return (grandparent->left);
		}
		else
			return (NULL);
	}
}
