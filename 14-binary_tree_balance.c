#include "binary_trees.h"

/**
 * binary_tree_balance - checks if a tree is balanced
 * @tree: tree to check
 * Return: Returns 0 if tree is Null
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - finds the heigh of a binary tree
 * @tree: pointer to tree to check
 * Return: returns Height, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((left > right) ? left : right);
}
