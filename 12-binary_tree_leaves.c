#include "binary_trees.h"

/**
 *binary_tree_leaves - function that counts the
  *                   leaves of a binary tree.
 *@tree: a pointer to the root node of the tree to count leaves.
<<<<<<< HEAD
 *Return: number  of the leaves or 0 if tree is null.
=======
 *Return: number of leaves or 0 if tree is null.
>>>>>>> 43a83e79aef051e33eb1fb412e99f3bb7ded06d0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t leftLeaves = binary_tree_leaves(tree->left);
	size_t rightLeaves = binary_tree_leaves(tree->right);

	return (leftLeaves + rightLeaves);
}
