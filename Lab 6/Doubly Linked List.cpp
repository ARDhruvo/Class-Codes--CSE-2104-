#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *root = NULL;
node *tail = NULL;

// 1. Insert First
void insertFirst(int val)
{
    cout << val << " is inserted as first node" << endl;
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    if (root == NULL)
    {
        root = temp;
        tail = temp;
    }
    else
    {
        temp->next = root;
        root->prev = temp;
        root = temp;
    }
}

// 2. Insert Last
void insertLast(int val)
{
    cout << val << " is inserted as last node" << endl;
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    if (root == NULL)
    {
        root = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// 3. Insert Anywhere (Position)
void insertAnywhere(int val, int pos) //do for doubly
{
    cout << val << " is inserted as node " << pos << endl;
    node *temp, *curr_node = root;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (pos == 1)
    {
        node *temp2;
        temp2 = new node();
        temp2->data = val;
        temp2->next = NULL;
        if (root == NULL)
        {
            root = temp2;
        }
        else
        {
            temp2->next = root;
            root = temp2;
        }
    }
    else
    {
        int i = 1;
        while (i < pos - 1)
        {
            curr_node = curr_node->next;
            i++;
        }
        temp->next = curr_node->next;
        curr_node->next = temp;
    }
}

// 4. Delete First
void deleteFirst()
{
    cout << "First node is deleted" << endl;
    if(root != NULL)
    {
        root = root->next;
        root-> prev = NULL;
    }
}

// 5. Delete Last
void deleteLast()
{
    cout << "Last node is deleted" << endl;
    if(tail != NULL)
    {
        tail = tail->prev;
        tail-> next = NULL;
    }
}

// 6. Delete Anywhere
void deleteAnywhere(int pos) //do for doubly
{
    cout << "Node " << pos << " is deleted" << endl;
    node *curr_node = root;
    if (pos == 1)
    {
        root = root->next;
    }
    else
    {
        int i = 1;
        while (i < pos - 2)
        {
            curr_node = curr_node->next;
            i++;
        }
        curr_node->next = curr_node->next->next;
    }
}

// 7. Print List
void printing()
{
    paragraph
    cout << "List So far: " << endl;
    node *curr_node = root;
    while (curr_node != NULL)
    {
        cout << curr_node->data << endl;
        curr_node = curr_node->next;
    }
    paragraph
    cout << "List Reversed: " << endl;
    curr_node = tail;
    while(curr_node != NULL)
    {
        cout << curr_node->data <<endl;
        curr_node = curr_node -> prev;
    }
    paragraph
}

// 8. Search in List (Value)
void searching(int val)
{
    cout << val << " will be searched in the list" << endl;
    node *curr_node = root;
    while (curr_node != NULL)
    {
        if (val == curr_node->data)
        {
            cout << val << " is present in the list" << endl;
            paragraph
            return;
        }
        curr_node = curr_node->next;
    }
    cout << val << " is not present in the list" << endl;
    paragraph
}
/*
 * Binary search is possible in doubly linked list
 * consider hi, mid and lo as nodes
 * lo = mid -> next
 * hi = mid -> prev
 */

// 9. Last Node
void last_node() // Function to print the linked list
{
    cout << "Last Node: " <<endl;
    node *curr_node = root;
    while (curr_node->next != NULL)
    {
        curr_node = curr_node->next;
    }
    cout << curr_node->data << endl;
    cout << tail->data <<endl;
    paragraph
}

// 10. Previous node value of last node
void previous_last_node()
{
    cout << "Second last Node: " <<endl;
    node *curr_node = root;
    while (curr_node->next->next != NULL)
    {
        curr_node = curr_node->next;
    }
    cout << curr_node->data << endl;
    cout << tail->prev->data << endl;
    paragraph
}

// 11. List Size
void list_size()
{
    cout << "List size so far: ";
    int count = 0;
    node *curr_node = root;
    while (curr_node != NULL)
    {
        curr_node = curr_node->next;
        count++;
    }
    cout << count << endl;
    paragraph
}

void revList() //unnecessary
{
    paragraph
    cout << "List Reversed: " << endl;
    node *curr_node = tail;
    while(curr_node != NULL)
    {
        cout << curr_node->data <<endl;
        curr_node = curr_node -> prev;
    }
    paragraph
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
    C -> next = NULL;

    A -> prev = NULL; //Linking doubly
    B -> prev = A;
    C -> prev = B;

    root = A; //setting root to the first data
    tail = C; //setting tail as the last data

    */
    //insertFirst(10);
    //insertFirst(20);
    //insertFirst(30);
    insertLast(10);
    insertLast(20);
    insertLast(30);
    printing();
    last_node();
    previous_last_node();
    searching(10);
    searching(90);
    //revList();
    deleteFirst();
    printing();
    deleteLast();
    printing();
}
