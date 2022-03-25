#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a bt using post-order traversal
 * @tree: ptr to the root node
 * @func: ptr to a func
 * Return: end program
 **/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && *func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
