#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: node of the tree to count the number of nodes
 *
 * Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int childs;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		childs = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

		return (childs);
	}

	return (0);
}
