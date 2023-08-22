#include "binary_trees.h"

/**
 * binary_tree_sibling - checks for a sibling
 * @node: node we are searching for siblings of
 * Return: returns sibling node or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
