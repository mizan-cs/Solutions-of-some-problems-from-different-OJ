#include<bits/stdc++.h>
using namespace std;

struct node
{
    string name;
    int roll;
    node *next;
};

node *root = NULL;

void add_name_(string name, int roll)
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
        while(current_node->next!=NULL){
            current_node = current_node->next;
        }
        node *newnode = new node();
        newnode->name = name;
        newnode->roll = roll;
        newnode->next = NULL;
        current_node->next = newnode;
    }
}

void delete_node(string name)
{
    node *current_node = root;
    node *previous_node = NULL;
    while(current_node->name != name){
        previous_node=current_node;
        current_node=current_node->next;
    }

    if(current_node == root){
        node *temp = root;
        root = root->next;
        delete(temp);
    }else{
        previous_node->next = current_node->next;
        delete(current_node);
    }
}


void print_nodes()
{
    node *current_node = root;
    while(current_node!= NULL){
        cout<<current_node->name<<endl;
        cout<<current_node->roll<<endl;
        current_node=current_node->next;
    }
}

int main()
{
    add_name_("Mizan",189);
    add_name_("Jannat",188);
//    add_name_("Khan");
//    add_name_("abc");
//
//    delete_node("abc");
    print_nodes();

    return 0;
}
