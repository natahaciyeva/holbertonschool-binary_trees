#include "binary_trees.h"

/**
 * binary_tree_height - Binary ağacın hündürlüyünü ölçür
 * @tree: Ölçüləcək ağacın kökü
 *
 * Return: Ağacın hündürlüyü
 *         (Əgər tree == NULL, 0 qaytarır)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
