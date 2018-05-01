//doubly linked list
#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;


struct node
{
    int data;		//some questions use a char * data;
    node * previous;
    node * next;
};

class list
{
    public:
        //These functions are already written
        list();         //supplied
        ~list();        //supplied
        void build();   //supplied
        void display(); //supplied
        

     /* *****************YOUR TURN! ******************************** */
     /* place your prototype here */
        int copy_DLL(list & new_list)
        {
            new_list.head = NULL;
            
            return + copy_DLL(new_list.head, head->next);
            
        }

     private:
        int copy_DLL(node * & new_copy, node * original)
        {
            if(!original)
            {
                new_copy = NULL;
                return 0;
            }
            
            if(original == this->tail)
            {
                new_copy = NULL;
                return 0;
            }
            else
            {   
                if(!new_copy)
                {
                    new_copy = new node;
                    new_copy->previous = NULL;
                }
                new_copy->data = original->data;
                node * temp = new node;
                new_copy->next = temp;
                temp->previous = new_copy;
                return copy_DLL(new_copy->next, original->next)+1;
            }


        }
         node * head;   //notice there is both a head
         node * tail;   //and a tail, common for DLL
};
