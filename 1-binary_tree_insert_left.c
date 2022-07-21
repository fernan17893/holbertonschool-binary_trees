#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left- insert node as left child of another node
* @parent: pointer to node to insert left child
* @value: value to store new node
* Return: pointer to created node
*
*
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;

	if (parent->left)
	{
		node->left = parent->left;
		node->left->parent = node;
	}
	else
		node->left = NULL;

	node->right = NULL;
	parent->left = node;

	return (node);
}
