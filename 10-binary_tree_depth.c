#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: node to measure the depth
 *
 * Return: If tree is NULL, your function must return 0
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth += 1;
	}
	return (depth);
}
