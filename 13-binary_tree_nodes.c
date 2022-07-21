#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in tree
* @tree: pointer to root node of the tree to count the number of nodes
* Return: count of nodes with child
*
*
*
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	count = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (count);
}
