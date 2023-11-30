#include "binary_trees.h"

/**
* binary_tree_insert_right - inserts a new node as the right child
* @parent: the parent of the new node
* @value: the value of the new node
* Return: the new node created, NULL if failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *child;

	if (parent == NULL)
		return (NULL);

	child = (binary_tree_t *) malloc(sizeof(binary_tree_t));
	if (child == NULL)
		return (NULL);

	child->parent = parent;
	child->right = parent->right;
	child->left = NULL;
	child->n = value;

	if (parent->right != NULL)
		parent->right->parent = child;
	parent->right = child;

	return (child);
}
