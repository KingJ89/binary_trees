#include "binary_trees.h"

/**
 * binary_tree_nodes - countith at least 1 child in a binary tree
 * @tree: root node fromch to measure
 * Return: total non-leaf nod or below `tree`, or 0 if `tree` is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (1 + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
}

