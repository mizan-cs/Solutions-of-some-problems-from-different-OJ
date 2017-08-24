#include<bits/stdc++.h>
using namespace std;

struct node
{
    string name;
    int roll;
    node *next;
};

node *root = NULL;

void add_student(string name, int roll)
{
    if(root == NULL)
    {
        root = new node();
        root->name = name;
        root->roll = roll;
        root->next = NULL;
    }
    else
    {
        node *current_node = root;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        node *newnode = new node();
        newnode->name = name;
        newnode->roll = roll;
        newnode->next = NULL;
        current_node->next = newnode;
        printf("Another student added\n");
    }
}

void delete_node(int roll)
{
    node *current_node = root;
    node *previous_node = NULL;

    while(current_node->roll != roll){
        previous_node = current_node;
        current_node=current_node->next;
    }
    if(current_node == root)
    {
        current_node = current_node->next;
    }
}

void print_nodes()
{
    node *current_node  = root;
    while(current_node != NULL){
        cout<<"Name: "<<current_node->name<<"\nRoll: "<<current_node->roll<<"\n----------------"<<endl;
        current_node=current_node->next;
    }
}

int main()
{
    add_student("Mizan",835816);
    add_student("Nadria",835793);

    print_nodes();

    return 0;
}
