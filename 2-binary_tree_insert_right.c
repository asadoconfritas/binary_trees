#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert a node on the right
 * @parent: ptr to the node
 * @value: to asign
 * Return: ptr to the created node
 **/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent)
	{
		if (parent->right)
		{
			parent->right->parent = new_node;
			new_node->right = parent->right;
		}
		parent->right = new_node;
	}
	else
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
