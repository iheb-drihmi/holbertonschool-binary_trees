#include "binary_trees.h"
/**
 * binary_tree_height - a function that calculates
 * @tree: a tree
 * Return: return
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int right, left;

	if (!(tree))
		return (-0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - a function that measures the balance factor 
 * @tree: a tree
 * Return: return
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!(tree))
		return (0);

	right = binary_tree_height(tree->right);
	left = binary_tree_height(tree->left);

	return (left - right);
}
