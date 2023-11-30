#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: hte root of the tree to measure
* Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_left, size_right, size;

	if (tree == NULL)
		return (0);

	size_left = binary_tree_size(tree->left) + 1;
	size_right = binary_tree_size(tree->right) + 1;

	size = size_left + size_right - 1;
	return (size);
}
