#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: the tree whoese leaves are to be counted
* Return: the leaf count in a tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counts, left_count, right_count;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	counts = left_count + right_count;

	return (counts);
}
