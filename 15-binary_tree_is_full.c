#include "binary_trees.h"
/**
 *  binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Check if node is leaf */
	if (!tree->left && !tree->right)
		return (1);
	/* if left and right childs exist, and left and right subtrees are full */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
