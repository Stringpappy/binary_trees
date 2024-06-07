#include "binary_trees.h"
/**
 * binary_tree_depth -func that traverse the depth of node
 * @tree:pointer to node
 * Return:0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    while (tree)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}


/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    size_t xd, fn;

    if (!first || !second)
        return (NULL);

    fn = binary_tree_depth(first);
    xd = binary_tree_depth(second);

    while (fn > xd)
    {
        first = first->parent;
        fn--;
    }

    while (xd > fn)
    {
        second = second->parent;
        xd--;
    }

    while (first && second)
    {
        if (first == second)
            return ((binary_tree_t *)first);

        first = first->parent;
        second = second->parent;
    }

    return (NULL);
}
