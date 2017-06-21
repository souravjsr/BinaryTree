//============================================================================
// Name        : BinaryTree.cpp
// Author      : Sourav Mukherjee
// Version     : 0.3
//============================================================================

#include <iostream>
#include<iomanip>
using namespace std;

struct node
{
  int data;
  node* left;
  node* right;
};

node*
nodeCreator(int data)
{
  node* nodeName = new node;
  nodeName->data = data;
  nodeName->left = NULL;
  nodeName->right = NULL;
  return nodeName;
}

void
insertNode(node* rootPtr, int data)
{

  if (rootPtr->data > data)
    {
      if (rootPtr->left != NULL)
        {

          insertNode(rootPtr->left, data);
        }
      else
        {
          rootPtr->left = nodeCreator(data);
        }
    }
  else
    {
      if (rootPtr->right != NULL)
        {
          insertNode(rootPtr->right, data);
        }
      else
        {
          rootPtr->right = nodeCreator(data);
        }
    }

}

int
nodePublisher(node* p, int indent = 0)
{
  if (p != NULL)
    {
      cout << p->data << "\n ";
      if (p->left)
        nodePublisher(p->left, indent + 4);
      if (p->right)
        nodePublisher(p->right, indent + 4);
      if (indent)
        {
          cout << setw(indent) << '-';
        }

    }
  return 0;
}

int
main()
{
  node* rootPtr = nodeCreator(11); //Creating a root node
  insertNode(rootPtr, 13);
  insertNode(rootPtr, 12);
  insertNode(rootPtr, 10);
  nodePublisher(rootPtr);
  return 0;
}
