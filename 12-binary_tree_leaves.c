#include "binary_trees.h"

/**
* binary_tree_leaves - counts leaves in binary tree
* @tree: pointer to root node of tree to count leaves
* Return: 0 if null
*
*
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		return (count);
}
