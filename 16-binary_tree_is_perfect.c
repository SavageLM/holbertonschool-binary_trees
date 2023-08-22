#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
