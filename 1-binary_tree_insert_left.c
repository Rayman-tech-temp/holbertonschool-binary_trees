#include "binary_trees.h"

/**
 * binary_tree_insert_left - create a child node left of
 * parent node.
 * @parent: the source node to left insert.
 * @value: the value the new node holds.
 * Return: binary_tree_t - pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *limb;

	if (parent == NULL)
		return (NULL);

	limb = malloc(sizeof(binary_tree_t));
	if (limb == NULL)
		return (NULL);

	limb->n = value;
	limb->left = NULL;
	limb->right = NULL;

	if (parent->left == NULL)
	{
		limb->parent = parent;
		parent->left = limb;
	} else
	{
		limb->parent = parent;
		parent->left->parent = limb;
		limb->left = parent->left;
		parent->left = limb;
	}

	return (limb);
}
