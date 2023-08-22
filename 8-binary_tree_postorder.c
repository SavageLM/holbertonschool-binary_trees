#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses through a tree using post-order
 * @tree: tree to traverse
 * @func: pointer to function to call
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
