#include "binary_trees.h"
/**
 * binary_tree_insert_right - func tht  inserts a node as the right-child
 * @parent: root of node
 * @value: value too be inserted
 * Return:0
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node;

	insert_node = binary_tree_node(parent, value);

	if (insert_node == NULL)
	{
		return (NULL);
	}
	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		insert_node->right = parent->right;
		parent->right->parent = insert_node;
	}
	parent->right = insert_node;
	return (insert_node);
}
