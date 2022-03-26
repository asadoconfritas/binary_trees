#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: ptr to the node
 * Return: 1 if true, 0 if false
 **/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}

/**
 * binary_tree_leaves - measures the height of a binary tree
 * @tree: ptr to the root
 * Return: end program
 **/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);
	l = binary_tree_is_leaf(tree);
	return (l + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
