#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - goes through a binary tree using in-order traversal
 * @tree: root node
 *
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left = 0, right  = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL)
		right = binary_tree_height(tree->right) + 1;
	else
		right = 0;
	if (tree->left != NULL)
		left = binary_tree_height(tree->left) + 1;
	else
		left = 0;
	if (left < right)
		return (right);
	return (left);
}
