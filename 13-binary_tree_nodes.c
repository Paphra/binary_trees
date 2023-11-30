#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with atleast 1 child in a tree
* @tree: the tree whose children are to be counted
* Return: the counts, else 0
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count, counts = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		counts = 1;

	left_count = binary_tree_nodes(tree->left);
	right_count = binary_tree_nodes(tree->right);

	counts += left_count + right_count;

	return (counts);
}
