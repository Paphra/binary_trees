#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a new node as the left child
* @parent: the parent of the new node
* @value: the value of the new node
* Return: the new node added, NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);

	child = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->n = value;
	child->left = parent->left;
	child->right = NULL;
	if (parent->left != NULL)
		parent->left->parent = child;
	parent->left = child;

	return (child);
}
