#include "binary_trees.h"

/**
* binary_tree_is_root - checks if node is a root
* @node: pointer to node
* Return: 1 if root , 0 otherwise
*
*
*
*
*/

int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL || node->parent != NULL)
		return (0);

	else
		return (1);
}
