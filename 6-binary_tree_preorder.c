#include "binary_trees.h"

/**
* binary_tree_preorder - using recursion to traverse
* the tree focusing on printing the node's n value.
* @tree: a pointer to the root node where deletion
* is being made.
* @func: a function that prints the node's n value.
* Return: void - the fail state is nothing.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		if (tree->left != NULL)
		{
			binary_tree_preorder(tree->left, func);
		}

		if (tree->right != NULL)
		{
			binary_tree_preorder(tree->right, func);
		}
	}
}
