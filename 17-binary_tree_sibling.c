#include "binary_trees.h"

/**
*
* binary_tree_sibling - finds sibling in binary tree
* @node: pointer to node
*
* Return: NULL if no sibling, or sibling
*
*
*
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
