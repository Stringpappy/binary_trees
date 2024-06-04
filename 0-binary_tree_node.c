#include "binary_trees.h"
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

/**
 * binary_tree_node  - func that creates a binary tree node
 * @parent: source of the node
 * @value: value to put in the node
 * Return: a pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *added_node;

	added_node = malloc(sizeof(binary_tree_t));

	if (added_node == NULL)
	{
		return (NULL);
	}
	added_node->n = value;
	added_node->parent = parent;
	added_node->left = NULL;
	added_node->right = NULL;

	return (added_node);
}
