#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void insertFirst(int val) //Inserts value at the start of the list; Prints in the reverse order of insertion
{
    node *temp;
    temp = new node();
    temp -> data = val;
    temp -> next = NULL;
    if(root == NULL) //Called only once to set the root first
    {
        root = temp;
    }
    else
    {
        temp -> next = root;
        root = temp;
    }
}

void insertLast(int val) //Inserts value at the end of the list; Prints in the reverse order of insertion
//FIX IT LATER
{
    node *temp;
    temp = new node();
    temp -> data = val;
    temp -> next = NULL;
    if(root == NULL) //Called only once to set the root first
    {
        root = temp;
    }
    else
    {
        node *curr_node = root;
        while(curr_node != NULL)
        {
            if(curr_node -> next == NULL) // Last node
            {
                curr_node = curr_node -> next;
            }
            curr_node = curr_node -> next;
        }
        /*
        node *curr_node = root;
        while(curr_node != NULL)
        {

        }
        temp -> next = root;
        root = temp;*/
    }
}

void deleteFirst(int val) //Inserts value at the start of the list; Prints in the reverse order of insertion
{
    node *temp;
    temp = new node();
    temp -> data = val;
    temp -> next = NULL;
    if(root == NULL) //Called only once to set the root first
    {
        if(root != NULL)
        {
            root = root -> next;
        }
    }
    else
    {
        temp -> next = root;
        root = temp;
    }
}


void printList() //Function to print the linked list
{
    node *curr_node = root;
    while(curr_node != NULL)
    {
        cout << curr_node -> data << endl;
        curr_node = curr_node -> next;
    }
}

int main()
{

    /*
    node *A, *B, *C; //We declare pointers to save the positions of the next node
    A = new node(); //For assigning enough memory to store data. This part is crucial as without it, there will be error
    B = new node();
    C = new node();

    A -> data = 10; //Assigning data
    B -> data = 20;
    C -> data = 30;

    A -> next = B; //Linking
    B -> next = C;
    C -> next = NULL; //tail

    root = A; //setting root to the first data
    */

    //Note to self: Make a version to take manual input of how many nodes and then manual input of the data

    insertFirst(10); //Automates the insertion
    insertFirst(20);
    insertFirst(30);
    insertLast(40);
    printList(); //cout << root -> data << " " <<  root -> next -> data << " " <<  root -> next -> next -> data;

}
