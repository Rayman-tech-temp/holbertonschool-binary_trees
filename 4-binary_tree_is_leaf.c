#include "binary_trees.h"

/**
* binary_tree_is_leaf - on a given node a check
* is made to see if it is a leaf node.
* @node: a pointer to the node where a check
* is being made.
* Return: int - 1 is leaf node, 0 for anything else.
*/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
	}
	return (0);
}
