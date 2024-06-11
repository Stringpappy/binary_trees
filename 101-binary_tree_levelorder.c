#include "binary_trees.h"
/**
 * binary_tree_levelorder - function that goes through a binary tre
 * @tree: poointer to root node
 * @func:pointer to function
 * Return: 0
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int top, jis;
	const binary_tree_t *current;

	top = 0;
	jis = 0;

	if (tree == NULL || func == NULL)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;

	queue[jis++] = (binary_tree_t *)tree;

	while (top < jis)
	{
		current = queue[top++];
		func(current->n);
		if (current->left != NULL)
			queue[jis++] = current->left;
		if (current->right != NULL)
			queue[jis++] = current->right;
	}
	free(queue);
}
