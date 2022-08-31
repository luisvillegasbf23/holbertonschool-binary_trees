#include "binary_trees.h"
/**
 * binary_tree_node - function that create a new node (main)
 * @parent: node parent
 * @value: data value to node
 * Return: pointer to node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	new->n = value;

	return (new);
}
