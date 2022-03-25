#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: ptr to the node
 * Return: end program
 **/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if ((void *)node->parent->right != (void *)node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
