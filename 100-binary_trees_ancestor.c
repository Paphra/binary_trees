#include "binary_trees.h"

/**
 * is_descendant - check if is descendant
 * @ancestor: the anscestor
 * @node: the node to check
 * Return: 1 if so, else, 0
 */
int is_descendant(const binary_tree_t *ancestor, const binary_tree_t *node)
{
	if (ancestor == NULL)
		return (0);
	return (
		ancestor == node ||
		is_descendant(ancestor->left, node) ||
		is_descendant(ancestor->right, node));
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: the first node
 * @second: the second node
 * Return: the ancestor
 */
binary_tree_t *binary_trees_ancestor(
	const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *ancestor;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = first;

	while (ancestor != NULL && !is_descendant(ancestor, second))
		ancestor = ancestor->parent;

	return ((binary_tree_t *)ancestor);
}
