#include "binary_trees.h"
/** 
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return:0
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	binary_tree_t *parent = node->parent;


	if (parent->left == node && parent->right != NULL)
		return (parent->right);
	if (parent->right == node && parent->left != NULL)
	{
		return (parent->left);
	}
	return (NULL);
}

