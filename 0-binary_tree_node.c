#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: ptr to parent node
 * @value: value to insert
 * Return: ptr to new node
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newbtnode = malloc(sizeof(binary_tree_t));

	if (!newbtnode)
		return (NULL);
	newbtnode->parent = parent;
	newbtnode->n = value;
	newbtnode->left = NULL;
	newbtnode->right = NULL;
	return (newbtnode);
}
