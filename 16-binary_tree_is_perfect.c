#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree to check
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, full;

	if (tree == NULL)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	full = binary_tree_is_full(tree);

	if ((left == right) && (full == 1))
		return (1);

	return (0);
}

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
}

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
