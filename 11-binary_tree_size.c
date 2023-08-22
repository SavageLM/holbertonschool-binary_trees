#include "binary_trees.h"

/**
 * binary_tree_size - Finds the size of a Tree
 * @tree: Tree to find size of
 * Return: Size of tree, or 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += 1;
	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
