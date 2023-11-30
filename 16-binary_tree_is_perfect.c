#include "binary_trees.h"

/**
* _depth - meatures the depth of a node in a binary tree
* @tree: the node whose depth to measure
* Return: the depth
*/
int _depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree !=  NULL)
	{
		d++;
		tree = tree->left;
	}
	return (d);
}

/**
* is_perfect - check perfectness depending on depth
* @tree: the tree to check
* @depth: the depth
* @level: the level
* Return: 1 if true, else 0
*/
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (
		is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
* binary_tree_is_perfect - checks if the tree is perfect
* @tree: the tree to check
* Return: 1 or 0 elsewhere
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = _depth(tree);
	return (is_perfect(tree, depth, 0));
}
