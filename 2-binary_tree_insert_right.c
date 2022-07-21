#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right- inserts node as the right child to another node
* @parent: pointer to the node to insert right child
* @value: value to store in new node
* Return: pointer to created node
*
*
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{


	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
		if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;

	if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
	}
	else
		node->right = NULL;

	node->left = NULL;
	parent->right = node;

	return (node);
}
