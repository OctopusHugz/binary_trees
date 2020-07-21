#include "binary_trees.h"
/**
 *  binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: 1 on success otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Check if node is leaf */
	if (!tree->left && !tree->right)
		return (1);
	/* check if number of leaves is odd */	
	if (binary_tree_leaves(tree) % 2 == 1)
		return (0);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

	return (0);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves in tree, or 0 if tree is NULL
 **/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		count += 1;
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (count);
}
