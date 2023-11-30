#include "binary_trees.h"

/**
* binary_tree_depth - meatures the depth of a node in a binary tree
* @tree: the node whose depth to measure
* Return: the depth
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = binary_tree_depth(tree->parent) + 1;
	if (tree->parent == NULL)
		depth = depth - 1;
	return (depth);
}
