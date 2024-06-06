#include "binary_trees.h"
/**
 * binary_tree_is_perfect -  function that checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	 size_t height = binary_tree_height(tree);
	 size_t nodes = binary_tree_size(tree);
	 

	 if (tree == NULL)
		 return (0);

	 size_t perfect_nodes = (1 << height) - 1;
	 return (nodes == perfect_nodes);
}
