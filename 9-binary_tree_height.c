#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: the tree to measure
* Return: the height of the tree (size_t)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		height = left_height + 1;
	else
		height = right_height + 1;
	if (tree->left == NULL && tree->right == NULL)
		return (height - 1);
	return (height);
}
