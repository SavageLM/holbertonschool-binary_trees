#include "binary_trees.h"

/**
 * binary_tree_insert_right - adds a node to the right branch of parent
 * @parent: parent node
 * @value: value of new node
 * Return: address of new node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = binary_tree_node(parent, value);
	if (newnode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newnode->right = parent->right;
		parent->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}
