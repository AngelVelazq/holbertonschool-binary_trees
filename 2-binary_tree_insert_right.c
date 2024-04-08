#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child in
 * @value: The value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;


	if (parent == NULL)

	if (new_node == NULL)

		return (NULL);
	
	if (parent == NULL)
	{
		free(new_node);



	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

