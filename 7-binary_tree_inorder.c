#include "binary_trees.h"
/**
 * binary_tree_inorder - func that visit a node usin inorder form
 * @func:a pointer to a function to call for each node
 * @tree: a pointer to the root node of the tree to traverse
 * Return: 0
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
