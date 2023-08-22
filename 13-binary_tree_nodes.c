#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a tree
 * @tree: tree to count the nodes of
 * Return: Number of nodes or 0 if tree is NULL
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t numnode = 0;

	if (tree == NULL)
		return (0);

	numnode += (tree->left || tree->right) ? 1 : 0;
	numnode += binary_tree_nodes(tree->left);
	numnode += binary_tree_nodes(tree->right);

	return (numnode);
}
