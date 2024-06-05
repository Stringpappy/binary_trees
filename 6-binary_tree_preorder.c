#include "binary_trees.h"
/**
 * binary_tree_preorder -  function that visit node in preorder BST
 * @tree: pointer to the root node of the tree to traverse
 * @func:a pointer to a function to call for each node
 * Return: 0
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
