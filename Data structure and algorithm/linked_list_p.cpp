#include<bits/stdc++.h>

using namespace std;

struct node
{
    string name;
    node *next;
};

node *root = NULL;

void add_node(string name)
{
    if(root == NULL){
        root = new node();
        root->name = name;
        root->next = NULL;
        cout<<name<<" has been added into list...."<<endl;
    }else{

        node *current_node = root;
        while(current_node->next != NULL){
            current_node = current_node->next;
        }
        node *newnode =new node();
        newnode->name = name;
        newnode->next = NULL;
        current_node->next = newnode;
        cout<<name<<" has been added into list...."<<endl;
    }
}

void print_node()
{
    node *current_node = root;

    while(current_node!=NULL){
        cout<<current_node->name<<endl;
        current_node=current_node->next;
    }
}

int main()
{

    add_node("Mizan");
    add_node("jannat");
    add_node("Apon");
    add_node("Dipto");
    add_node("Shampa");

    print_node();
    return 0;
}
