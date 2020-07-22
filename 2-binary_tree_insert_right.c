#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		temp = parent->right;
		node->right = temp;
		temp->parent = node;
		parent->right = node;
	}
	return (node);
}
