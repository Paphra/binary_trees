#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of the binary tree
* @tree: the tree whose balance factor is to be measured
* Return: the balance factor, else 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;
	int balance;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	balance = left_height - right_height;

	return (balance);
}

/**
* binary_tree_height - measures the height of a binary tree
* @tree: the tree to measure
* Return: the height of the tree (size_t)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
