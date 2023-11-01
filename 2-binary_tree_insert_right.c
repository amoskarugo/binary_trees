#include "binary_trees.h"

/**
 *binary_tree_insert_right - a function that inserts a right-child on a node.
 *@parent: pointer to the parent of the node to insert into.
 *@value: value to insert to the node.
 *Return: pointer to the node inserted or NULL on failure.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *newnode, *temp;

	if (parent == NULL)
		return (NULL);

	newnode = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;


	if (newnode->parent->right == NULL)
	{
		newnode->right = newnode->parent->right;
		newnode->parent->right = newnode;
	}
	else
	{
		temp = newnode->parent->right;
		newnode->parent->right->parent = newnode;
		newnode->parent->right = newnode;
		newnode->right = temp;
	}

	return (newnode);
}
