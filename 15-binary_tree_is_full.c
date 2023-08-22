#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if tree is full
 * @tree: tree to check
 * Return: returns 0 if tree is null
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (full_recursion(tree));
}

/**
 * full_recursion - recursive function to check if tree is full
 * @tree: tree to check
 * Return: returns 1 if full, 0 if not
 */

int full_recursion(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL))
			return (0);
		if ((tree->left == NULL && tree->right != NULL))
			return (0);
		if (full_recursion(tree->left) == 0)
			return (0);
		if (full_recursion(tree->right) == 0)
			return (0);
	}
	return (1);
}

