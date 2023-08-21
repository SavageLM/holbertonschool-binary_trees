#include "binary_trees.h"

/**
 * binary_tree_preorder -  uses pre-order traversal to move across tree
 * @tree: root node to travers
 * @func: pointer to a function to call
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left,func);
	binary_tree_preorder(tree->right, func);
}
