#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

node *root = NULL;

bool searchList(int k) //Function to print the linked list
{
    node *curr_node = root;
    while(curr_node != NULL)
    {
        if(k == curr_node -> data)
        {
            cout << curr_node -> data << endl;
            return true;
        }
        curr_node = curr_node -> next;
        /*
        if(curr_node -> next == NULL) // Second last node
        {
            cout << curr_node -> data << endl;
        }
        curr_node = curr_node -> next;
        */
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

    int key;
    bool found;
    cin >> key;

    root = A; //setting root to the first data
    found = searchList(key); //cout << root -> data << " " <<  root -> next -> data << " " <<  root -> next -> next -> data;
    if(found)
    {
        cout << "Found" << endl;
    }
    else{
        cout << "Not found" << endl;
    }

}
