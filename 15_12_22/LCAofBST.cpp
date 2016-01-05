#include <bits/stdc++.h>

struct node
{
	int data;
	struct node* left;
	struct node* right;
};
typedef struct node* Node;

Node lca (Node root, int n1,int n2)
{
	if(root == NULL)
		return NULL;
	if(root->data > n1 && root->data > n2)
		return lca(root->left,n1,n2);
	if(root->data < n1 && root->data < n2)
		return lca(root->right,n1,n2);
	return root;
}

Node newNode(int data)
{
	printf("%d ",data);
	Node n = (Node)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->left = NULL;
	return n;
}

int main()
{
	Node root = newNode(20);
	root->left = newNode(5);
	root->right = newNode(15);

	root->left->left = newNode(2);
	root->left->right = newNode(10);
	root->right->left = newNode(12);
	root->right->right = newNode(25);

	root->left->left->left = newNode(1);
	root->left->left->right = newNode(4);

	int n1,n2;
	printf("\n");
	while(1)
	{
		scanf ("%d %d",&n1,&n2);
		Node t = lca(root,n1,n2);
		printf("LCA : %d\n",t->data);
	}
}