#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of the tree, or 0 if tree is NULL
 **/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_bal = 0, right_bal = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_bal = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_bal = 1 + binary_tree_height(tree->right);
	return (left_bal - right_bal);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree, or 0 if tree is NULL
 **/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	else
		left = 0;
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	else
		right = 0;
	return (MAX(left, right));
}
