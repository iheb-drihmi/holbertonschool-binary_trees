#include "binary_trees.h"
/**
 * binary_tree_preorder - a function that goes through a binary tree
 * @tree: a tree
 * @func: a function
 * Return: return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
