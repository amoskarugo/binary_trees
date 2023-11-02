#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds the
 *		lowest common ancestor of two nodes
 * @first:  pointer to the first node
 * @second:  pointer to the second node
 * Return:  a pointer to the lowest common ancestor node of the two given nodes
 *          if no ancestor return null.
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{

	if (!first || !second)
		return (NULL);

	if (!first->parent->parent && !second->parent->parent)
		return (first->parent);

	if (first->parent == second->parent->parent && second->parent != first)
		return (first->parent);


	if (second->parent == first->parent->parent && first->parent != second)
		return (second->parent);

	if (second == first->parent)
		return (first->parent);

	if (first == second->parent)
		return (second->parent);

	return (NULL);
}
