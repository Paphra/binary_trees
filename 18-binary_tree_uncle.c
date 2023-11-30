#include "binary_trees.h"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: the node whose uncle is to be found
* Return: the uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left && node->parent->parent->right)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		else
			return (node->parent->parent->left);
	}

	return (NULL);
}
