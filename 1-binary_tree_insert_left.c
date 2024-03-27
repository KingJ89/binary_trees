#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of node
 * @parent: pointer to the node o insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to created new node. NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *pleft, *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	pleft = parent->left;
	parent->left = new_node;

	if (pleft != NULL)
	{
		pleft->parent = new_node;
		new_node->left = pleft;
	}

	return (new_node);
}
