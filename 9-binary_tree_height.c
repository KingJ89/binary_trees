#include "binary_trees.h"

/**
 * max_size - finds the larger of two size_t values
 * @size_a: first value to compare
 * @size_b: second value to compare
 *
 * Return: larger size_t value, or value of both if equal
 */
size_t max_size(size_t size_a, size_t size_b)
{
    return ((size_a > size_b) ? size_a : size_b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node from which to measure, starting at 0
 *
 * Return: levels from root, or 0 if `tree` is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left == NULL && tree->right == NULL)
        return (0);

    return (1 + max_size(binary_tree_height(tree->left),
                         binary_tree_height(tree->right)));
}

