#include "binary_trees.h"

/**
 * binary_tree_insert_left - creates a binary tree node.
 *
 * @parent: pointer to the parent node of the node to create.
 *
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left)
	{
		node->left = parent->left;
		parent->left = node;
		node->left->parent = node;
	}
	else
	{
		parent->left = node;
	}

	return (node);
}
