#include<bits/stdc++.h>
using namespace std;

struct node
{
    int roll;
    node *next;
};

node *root = NULL;

void append(int roll)
{
    printf("Entering append\n");
    if(root == NULL)
    {
        printf("First Condition True..\n");
        root = new node();
        root->roll = roll;
        root->next = NULL;
        printf("Successfully Added first node\n");
    }
    else
    {
        printf("Second Condition true..\n");
        node *current_node = root;
        while(current_node->next!=NULL)
        {
            current_node = current_node->next;
        }

        node *newnode = new node();
        newnode->roll = roll;
        newnode->next = NULL;

        current_node->next = newnode;
        printf("Another node added successfully....\n");
    }
}

void print_list()
{
    node *current_node = root;
    while(current_node!=NULL){
        printf("%d\n",current_node->roll);
        current_node = current_node->next;
    }
}

int main()
{
    printf("Hi\n");
    append(1);
    append(2);
    print_list();
    printf("---------------End--------------\n");

//    print_list();

    return 0;
}
