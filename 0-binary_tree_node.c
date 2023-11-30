#include "binary_trees.h"

/**
* binary_tree_node - gets a binary tree node from a parent
* @parent: the parent tree
* @value: the value of the node
* Return: Binary Tree node if found, NULL if not found
*
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree_node;

	tree_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (tree_node == NULL)
		return (NULL);
	tree_node->parent = parent;
	tree_node->n = value;
	tree_node->left = NULL;
	tree_node->right = NULL;

	return (tree_node);
}
