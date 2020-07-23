#include "binary_trees.h"

/**
 * *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL if no ancestor exists
 **/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	if (!first || !second)
		return (NULL);
	if (first->parent == second->parent)
		return (first->parent);
	else if (first->parent == second)
		return (first->parent);
	else if (second->parent == first)
		return (second->parent);
	else
		return (binary_trees_ancestor(first->parent, second->parent));
}
