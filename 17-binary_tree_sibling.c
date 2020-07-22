#include "binary_trees.h"
/**
 * *binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	/* if node we're at is left node */
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	/* if node we're at is right node */
	else if (node->parent->right->n == node->n)
		return (node->parent->left);
	return (NULL);
}
