#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a binary tree
* @tree: pointer to the root node of tree being measured
* Return: 0 if NULL
*
*
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		count += 1;
	}
	return (count);
}
