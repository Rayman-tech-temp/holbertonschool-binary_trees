#include "binary_trees.h"

/**
 * binary_tree_node - adding to a binary tree with given
 * parent node.
 * @parent: a node that is the source for the new node.
 * @value: the n value for the new node.
 * Return: binary_tree_t - address to the new node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *fiber;

	fiber = malloc(sizeof(binary_tree_t));
	if (fiber == NULL)
		return (NULL);

	fiber->parent = parent;
	fiber->n = value;

	return (fiber);
}
