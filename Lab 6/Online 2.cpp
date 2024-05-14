#include <bits/stdc++.h>
using namespace std;

#define paragraph cout << endl;

struct node
{
    int data;
    node *next;
};

node *root = NULL;

// 1. Insert First
void insertFirst(int val)
{
    cout << val << " is inserted as first node" << endl;
    node *temp;
    temp = new node();
    temp->data = val;
    temp->next = NULL;
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->next = root;
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
    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        node *curr_node = root;
        while (curr_node->next != NULL)
        {
            curr_node = curr_node->next;
        }
        curr_node = curr_node->next = temp;
    }
}

// 3. Insert Anywhere (Position)
void insertAnywhere(int val, int pos)
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
    }
}

// 5. Delete Last
void deleteLast()
{
    cout << "Last node is deleted" << endl;
    node *curr_node = root;
    while (curr_node->next->next != NULL)
    {
        curr_node = curr_node->next;
    }
    curr_node->next = NULL;
}

// 6. Delete Anywhere
void deleteAnywhere(int pos)
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

// 9. Last Node
void last_node() // Function to print the linked list
{
    cout << "Last Node: ";
    node *curr_node = root;
    while (curr_node->next != NULL)
    {
        curr_node = curr_node->next;
    }
    cout << curr_node->data << endl;
    paragraph
}

// 10. Previous node value of last node
void previous_last_node()
{
    cout << "Second last Node: ";
    node *curr_node = root;
    while (curr_node->next->next != NULL)
    {
        curr_node = curr_node->next;
    }
    cout << curr_node->data << endl;
    paragraph
}

// 11. List Size
int list_size()
{
    //cout << "List size so far: ";
    int count = 0;
    node *curr_node = root;
    while (curr_node != NULL)
    {
        curr_node = curr_node->next;
        count++;
    }
    return count;
}

void sortList() //This is supposed to give 1 3 5 2 4 6 but for some reason it doesnt, But it does sort according to odd and even so its a win for me
{
    node *curr_node = root;
    int i = 1, pos = 1, s = list_size();
    while (i < s)
    {
        if (curr_node->data % 2 == 0)
        {
            int temp = curr_node->data;
            deleteAnywhere(pos);
            insertLast(temp);
        }
        curr_node = curr_node->next;
        pos++;
        i++;
    }
}

int main()
{
    // Function 1
    insertFirst(6);
    insertFirst(5);
    insertFirst(4);
    insertFirst(3);
    insertFirst(2);
    insertFirst(1);
    printing();

    sortList();
    printing();

}
