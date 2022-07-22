#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: pointer to the root node of tree being measured
* Return: 0 if NULL
*
*
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of tree being measured
* Return: 0 if NULL
*
*
*/


size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}


/**
* _pow - returns the value of base by the power of exponent
* @base: value being multiplied
* @exponent: times multiplied by
*
* Return: sum of value multiplied
*
*/

int _pow(int base, int exponent)
{
	int i = 0, value = base;

	for (i = 0; i < exponent; i++)
		value *= base;

	return (value);
}


/**
* binary_tree_is_perfect - Checks if a binary tree is perfect
* @tree: pointer to root node of tree
*
* Return: 1 if tree is perfect, otherwise 0.
*
*
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = binary_tree_height(tree) - 1;
	int total_nodes = binary_tree_size(tree);

	if (tree == NULL)
		return (0);

	if (total_nodes == _pow(2, h + 1) - 1)
		return (1);

	return (0);
}
