#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: tree
 *
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count_left = 1 + binary_tree_height(tree->left);

	if (tree->right)
		count_right = 1 + binary_tree_height(tree->right);


	if (count_left > count_right)
		return (count_left);
	else
		return (count_right);

	return (0);
}


/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree
 *
 * @tree: tree
 *
 * Return: Always 0(Success)
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t balanceT_1 = NULL;
	size_t balanceT_2 = NULL;

	if (tree == NULL)
		return (0);

	if (tree->left)
		balanceT_1 = 1 + binary_tree_height(tree->left);

	if (tree->right)
		balanceT_2 = 1 + binary_tree_height(tree->right);

	return (balanceT_1 - balanceT_2);

	return (0);
}
