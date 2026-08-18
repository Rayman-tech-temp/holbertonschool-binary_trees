#include "binary_trees.h"

/**
 * binary_tree_insert_right - create a child node right of
 * parent node.
 * @parent: the source node to right insert.
 * @value: the value the new node holds.
 * Return: binary_tree_t - pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		limb->parent = parent;
		parent->right = limb;
	} else
	{
		limb->parent = parent;
		parent->right->parent = limb;
		limb->right = parent->right;
		parent->right = limb;
	}

	return (limb);
}
