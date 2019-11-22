#include "bst.h"
#include <stdlib.h>

void newNode(struct node *root, int n)
{
    struct node *p = malloc(sizeof(struct node));
    if (p == NULL)
    {
        printf("Error\n");
        exit(-1);
    }
    p->key = n;
    p->left = p->right = NULL;
}

void insert(struct node *root, int n)
{
    if(root == NULL)
    {
        root = newNode(n);
    }
    if(root->key > n)
    {
        insert(root->left, n); 
    }
    else if (root->key < n)
    {
        insert(root->right, n);
    }
    else
    {
        return ;
    }
}