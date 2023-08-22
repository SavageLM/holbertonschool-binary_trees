#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a tree
 * @tree: tree whose leaves we count
 * Return: number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += (!tree->left && !tree->right) ? 1 : 0;
	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	return (leaves);
}
