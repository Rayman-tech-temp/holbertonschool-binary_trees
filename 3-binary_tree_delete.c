#include "binary_trees.h"

/**
* binary_tree_delete - using recursion to traverse
* the tree focusing on the left link.
* @tree: a pointer to the root node where deletion
* is being made.
* Return: void - the fail state is nothing.
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			binary_tree_delete(tree->left);
		}

		if (tree->right != NULL)
		{
			binary_tree_delete(tree->right);
		}

		if (tree->left == NULL && tree->right == NULL)
		{
			if (tree->parent != NULL)
			{
				if (tree->parent->left == tree)
					tree->parent->left = NULL;

				if (tree->parent->right == tree)
					tree->parent->right = NULL;
			}

			free(tree);
			tree = NULL;
		}
	}
}
