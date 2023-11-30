#include "binary_trees.h"

/**
* binary_tree_preorder - goeas through the binary tree using pre-order
* @tree: the tree root to traverse
* @func: the pointer to a function to call for each node
* Return: nothing
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
