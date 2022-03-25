#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a binary tree
 * @tree: ptr to the root
 * Return: depth, or 0 if NULL
 **/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
