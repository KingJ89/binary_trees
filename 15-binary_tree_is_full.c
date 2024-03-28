#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full.
 * @tree: pointer to the root of the tree.
 *
 * Return: 0 if @tree is NULL or if @tree not full;
 * 1, if @tree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full = 0, right_is_full = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left)
		left_is_full = binary_tree_is_full(tree->left);
	if (tree->right)
		right_is_full = binary_tree_is_full(tree->right);

	return (left_is_full && right_is_full);
}

