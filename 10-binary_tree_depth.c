#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree:  a pointer to the node to measure the depth
 * Return: 0
 */
size_t binary_tree_depth(const binary_tree_t *tree);
{
	size_t lt_height, rt_height;

	if (tree == NULL)
		return (0);
