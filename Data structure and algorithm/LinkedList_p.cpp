#include<bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node *next;
};

node *root = NULL;

void add_node(int roll)
{
    if(root == NULL)
    {
        root = new node();
        root->roll = roll;
        root->next = NULL;
        printf("Successfully added first node....\n");
    }
    else
    {
        node *current_node = root;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }

        node *newnode = new node();
        newnode->roll = roll;
        newnode->next = NULL;
        current_node->next = newnode;
    }
}

void print_node()
{
    node *current_node = root;
    while(current_node != NULL){
        printf("%d\n",current_node->roll);
        current_node = current_node->next;
    }
}

int main()
{
    printf("---------------Linked List Project------------------\n\n");

    add_node(1);
    add_node(2);

    print_node();

    return 0;
}
