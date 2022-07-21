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

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side > right_side)
		return (left_side + 1);
	else
		return (right_side + 1);
}


/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to root node of the tree to measure the balance factor
* Return: 0 if tree is NULL
*
*
*
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
		return (left_height - right_height);
}
