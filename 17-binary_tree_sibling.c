#include "binary_trees.h"

/**
* binary_tree_sibling - finds the siblings of a node
* @node: the node whose sibling is to be found
* Return: the sibling, NULL otherwise
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->left && node->parent->right)
	{
		if (node->parent->left == node)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
