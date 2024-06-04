#include "binary_trees.h"
/**
 * binary_tree_insert_left - func that insdert a node as the lefd
 * @parent: rooot value
 * @value: the value to be inserted
 * Return: 0
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node;

	insert_node = binary_tree_node(parent, value);

	if (parent == NULL)
	{
		return (NULL);
	}
	if (insert_node == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		insert_node->left = parent->left;
		insert_node->left->parent = insert_node;
	}
	parent->left = insert_node;
	return (insert_node);
}
