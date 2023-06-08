#include <iostream>
#include <cmath>
#include "myFunc.cpp"
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    int height;
    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
        height = 1;
    }
};

int getHeight(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return n->height;
}

int bF(node *n)
{
    if (n == NULL)
    {
        return 0;
    }
    return (getHeight(n->left) - getHeight(n->right));
}

node *rightRotate(node *y)
{
    node *x = y->left;
	node *T2 = x->right;

	// Perform rotation
	x->right = y;
	y->left = T2;

	// Update heights
	y->height = max(getHeight(y->left),
					getHeight(y->right)) + 1;
	x->height = max(getHeight(x->left),
					getHeight(x->right)) + 1;

	// Return new root
	return x;
}

node *leftRotate(node *x)
{
   node *y = x->right;
	node *T2 = y->left;

	// Perform rotation
	y->left = x;
	x->right = T2;

	// Update heights
	x->height = max(getHeight(x->left),
					getHeight(x->right)) + 1;
	y->height = max(getHeight(y->left),
					getHeight(y->right)) + 1;

	// Return new root
	return y;
}

node *insert(node *n, int value)
{
    if (n == NULL)
		return new node(value);

	if (value < n->data)
		n->left = insert(n->left, value);
	else if (value > n->data)
		n->right = insert(n->right, value);
	else // Equal keys are not allowed in BST
		return n;

	/* 2. Update height of this ancestor node */
	n->height = 1 + max(getHeight(n->left),
						getHeight(n->right));

	/* 3. Get the balance factor of this ancestor
		node to check whether this node became
		unbalanced */
	int balance = bF(n);

	// If this node becomes unbalanced, then
	// there are 4 cases

	// Left Left Case
	if (balance > 1 && value < n->left->data)
		return rightRotate(n);

	// Right Right Case
	if (balance < -1 && value > n->right->data)
		return leftRotate(n);

	// Left Right Case
	if (balance > 1 && value > n->left->data)
	{
		n->left = leftRotate(n->left);
		return rightRotate(n);
	}

	// Right Left Case
	if (balance < -1 && value < n->right->data)
	{
		n->right = rightRotate(n->right);
		return leftRotate(n);
	}

	/* return the (unchanged) node pointer */
	return n;
}

void preOrder(node *n)
{
    if (n == NULL)
    {
        return;
    }
    cout << n->data << " ";
    preOrder(n->left);
    preOrder(n->right);
}

int main()
{

    node *root = NULL;
    root=insert(root, 10);
    root=insert(root, 20);
    root=insert(root, 30);
    root=insert(root, 40);
    root=insert(root, 50);
    root=insert(root, 25);

    preOrder(root);
    //30 20 10 25 40 50
}