#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t leaves;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    leaves = binary_tree_leaves(root);
    printf("Leaves in %d: %lu\n", root->n, leaves);
    leaves = binary_tree_leaves(root->right);
    printf("Leaves in %d: %lu\n", root->right->n, leaves);
    leaves = binary_tree_leaves(root->left->right);
    printf("Leaves in %d: %lu\n", root->left->right->n, leaves);
    return (0);
}
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