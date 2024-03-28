#include "binary_trees.h"

/**
 * binary_tree_height_and_balance - measures height and balance of binary tree.
 * @tree: pointer to the root of the tree.
 * @height: pointer to store the height of the tree.
 *
 * Return: balance factor of @tree.
 */
int binary_tree_height_and_balance(const binary_tree_t *tree, size_t *height)
{
	size_t left_height = 0, right_height = 0;
	int balance_factor = 0;

	if (tree == NULL)
	{
		*height = 0;
		return (0);
	}

	if (tree->left)
		left_height = binary_tree_height_and_balance(tree->left, &left_height) + 1;
	if (tree->right)
		right_height = binary_tree_height_and_balance(tree->right, &right_height) + 1;

	*height = (left_height > right_height) ? left_height : right_height;
	balance_factor = (int)(left_height - right_height);

	return (balance_factor);
}

/**
 * binary_tree_balance - measures balance factor of binary tree.
 * @tree: pointer to the root of the tree.
 *
 * Return: 0 if @tree is NULL;
 * otherwise, the balance factor of @tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height = 0;
	return (binary_tree_height_and_balance(tree, &height));
}

