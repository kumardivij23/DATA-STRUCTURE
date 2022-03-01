//building tree from preorder and inorder

#include"bits/stdc++.h"
using namespace std;

struct Node{
    int data;
    Node * left;
    Node * right;

    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

int search(int inorder[],int start, int end, int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
        {
            return 1;
        }

    }

    return -1;
}

Node* buildtree(int inorder[],int preorder[],int start,int end)
{
    static int idx=0;
    if(start>end)
    {
        return NULL;
    }
    int curr= preorder[idx];
    idx++ ;
    Node* node= new Node(curr);
    if(start==end)
    {
        return node;
    }

    int pos=search(inorder,start,end,curr);
    node->left=buildtree(inorder,preorder,start,end);
    node->right=buildtree(inorder,preorder,start,end);

    return node;

}

void printinorder(Node* root)
{
     if(root==NULL)
    {
        return;
    }
    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}



int main()
{

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    Node* root=buildtree(inorder,preorder,0,4);
    printinorder(root);
    return 0;
}