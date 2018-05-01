//list.h
#include <iostream>
#include <cstring>
#include <cctype>
#include <stdlib.h>
using namespace std;


struct node
{
    int data;   //some questions are a char * data;
    node * next;
};

class list
{
   public:
   //These functions are already written for you
     list();			//supplied
     ~list();			//supplied
     void build();     		//supplied
     void display();  		//supplied
    
    /* *****************YOUR TURN! ******************************** */
    //Write your function prototype here:
    
    int display_except()
    {
       return display_except(head); 
    }


    int num_times(int match)
    {
       
        return num_times(head, match); 
    }
    int remove_except()
    {
        return remove_except(head);
    }
    bool same_contents(list & second_list)
    {
        return same_contents(second_list.head, head);
    }
    private:		//notice there is both a head and a tail!
    bool same_contents(node * head1, node * head2)
    {
        if(!head2 || !head1)
        {
            return 0;
        }
        else if(head1->data == head2->data)
        {
            return 0 + same_contents(head1->next, head2->next);
        }
        else
        {
            return 1 + same_contents(head1, head2->next);
        }
    }
    int num_times(node * head, int match)
    {
        if(!head)
            return 0;

       if(head->data != match)
            return num_times(head->next, match);
       else
            return num_times(head->next, match)+ 1;
    }

          
    int display_except(node * head)
    {   
        if(!head)
            return + (this->head->data) +(this->tail->data);
        if((head == this->tail)||(head == this->head))
        {
            return display_except(head->next);
        }
        else
        { 
            cout << head->data << "-> ";
            return display_except(head->next);
        }
        
        
    }   
    
    int remove_except(node * & head)
    {
        if(!head)
            return 0;

        if((!(head->next->next)))
        {
            this->head = head; 
            return 0;
        }
        else
        {
            return remove_except(head->next) + 1;
        }
        head->next = NULL;
        delete(head);
        



    }




    node * head;
    node * tail;
    };
