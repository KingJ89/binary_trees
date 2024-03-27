#include "binary_trees.h"

/**
 * binary_tree_delete - free tree using recursion
 * @tree: pointer to root node tree to delete
 *
 * Return: void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_delete(tree->left);
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	free(tree);
}

