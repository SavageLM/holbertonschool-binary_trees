#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of a tree
 * @tree: Tree to calculate depth of
 * Return: depth or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
