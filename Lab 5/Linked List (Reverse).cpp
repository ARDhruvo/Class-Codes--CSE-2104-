#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

void revList(node *curr_node) //Function to print the linked list
{

    if(curr_node != NULL)
    {
        revList(curr_node -> next); //Recursion to reverse print
        cout << curr_node -> data << endl;
    }
}

int main()
{

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
    revList(root); //Reverse print

}
