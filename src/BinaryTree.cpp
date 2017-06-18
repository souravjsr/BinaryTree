//============================================================================
// Name        : BinaryTree.cpp
// Author      : Sourav Mukherjee
// Version     : 0.1
// Copyright   : Your copyright notice
// Description : Binary Tree in C++, Ansi-style
// Status      : In Progress
//============================================================================

#include <iostream>
#include <typeinfo>

using namespace std;

struct NodeStruct
{
  int data;
  NodeStruct *left;
  NodeStruct *right;
};

//Declaring Global Variables here:
NodeStruct *root, *trv, *cur, *parent;

void
basicNodeGenerator(int userData)
{
  if (!(root->data))
    {
      root->data = userData;
      root->left = NULL;
      root->right = NULL;
    }
  else
    {
      trv->data = userData;
      trv->left = NULL;
      trv->right = NULL;
      cur = root;
      while (cur)
        {
          parent = cur;
          if (cur->data > trv->data)
            {
              cur = cur->left;
            }
          else
            {
              cur = cur->right;
            }
        }
      if (parent->data > trv->data)
        {
          cout << "left" << trv;
          parent->left = trv;
        }
      else
        {
          cout << "right" << trv;
          parent->right = trv;
        }
    }
}
void
binaryTreePublisher()
{
  trv = root;
  cout << "value --> " << trv->data;
  cout << "left value --> " << trv->left;
  cout << "right value --> " << trv->right;

}

int
main(int argc, char* argv[])
{
  int userData = 0;
  root = (NodeStruct*) malloc(sizeof(NodeStruct));
  trv = (NodeStruct*) malloc(sizeof(NodeStruct));
  cur = (NodeStruct*) malloc(sizeof(NodeStruct));
  parent = (NodeStruct*) malloc(sizeof(NodeStruct));
  cout << "Enter the data u wanna push -->";
  cin >> userData;
  basicNodeGenerator(userData);
  cout << "Enter the data u wanna push -->";
  cin >> userData;
  basicNodeGenerator(userData);
  cout << "Enter the data u wanna push -->";
  cin >> userData;
  basicNodeGenerator(userData);
  binaryTreePublisher();
  cout << "\n Ending the program \n";
  return 0;
}
