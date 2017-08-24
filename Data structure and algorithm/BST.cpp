#include<bits/stdc++.h>
using namespace std;

typedef struct tree
{
    int number;
    struct tree *leftChild;
    struct tree *rightChild;
}node;

node *root=NULL;

void insertNode(int value)
{
    node *tempNode;
    node *currentNode = NULL;
    node *parentNode = NULL;

    tempNOde = (node *)malloc(sizeof(node));
    tempNode->number = value;

    if(root == NULL){
        root =tempNode;
    }else{
        currentNode = root;
        parentNode = NULL;

        while(1){
            parentNode = currentNode;

            if(value <= parentNode->number){
                currentNode = currentNode->leftChild;
                if(currentNode == NULL){
                    parentNode->leftChild = tempNode;
                    return;
                }
            }else{
                currentNode = currentNode->rightChild;

                if(currentNode == NULL){
                    parentNode->rightChild = tempNode;
                    return;
                }
            }
        }
    }
}

int main()
{

}
