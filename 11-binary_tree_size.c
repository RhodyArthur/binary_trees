#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to measure the size of
 *
 * Return: size of the tree
 *         0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeT = NULL;

	if (tree == NULL)
		return (0);

	sizeT = binary_tree_size(tree->left) + 1 +
		binary_tree_size(tree->right);

	return (sizeT);
}