//list.h
#include <iostream>
#include <cstring>
#include <cctype>
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
    private:		//notice there is both a head and a tail!

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
            return 0;
        return display_except(head->next);
        
        if((head == this->head) || (head->next == NULL))
        {
           return + head->data;
        }
     
    }
    
    
    node * head;
    node * tail;
    };



