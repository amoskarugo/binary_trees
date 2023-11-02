
#include "binary_trees.h"

/**
 *binary_tree_is_full - function that checks if a binary tree is full
 *@tree: a pointer to the root node of the tree to check
 *Return: 1 if full otherwise 0 and 0 if tree is null.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}