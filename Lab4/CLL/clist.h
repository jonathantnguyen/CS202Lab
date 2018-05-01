//clist.h
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


struct node
{
    int data;	//some questions are a char * data;
    node * next;
};

class list
{
   public:
   	//These functions are already written
   	list();			//supplied
   	~list();		//supplied
   	void build();	//supplied
   	void display();	//supplied

	/* *****************YOUR TURN! ********************* */
	//Write your function prototype here:
    int copy_special(list & new_list)
    { 
        new_list.rear = NULL;
        
        return + copy_special(new_list.rear,rear->next);
    }
    void connect()
    {
        connect(rear);    
    }
  private:
    void connect(node * rear)
    {
        if(!rear)
        {
            return;
        }
        if(rear->next == NULL)
        {
            rear->next = this->rear;
            return;
        }
        else
        {
            return connect(rear->next);
        }
    }  

    bool mult_two(node * original)
    {
        int data = original->data;
        if(data%2)
            return 0;
        else
            return 1;
    }
    int copy_special(node * & new_copy, node * original)
    {

        if(!original)
        {
            new_copy = NULL;
            return 0;
        }
        if((original == this->rear) || 
                ((mult_two(original->next) && (original->next == this->rear))))
        {
            new_copy->data = original->data;
            return 1;
        }
        else
        {
            
            if(new_copy == NULL)
            {
                new_copy = new node;
            }

            if(mult_two(original))
            {
                return copy_special(new_copy, original->next);
            }
            else
            {
            new_copy->data = original->data;
            node * temp = new node;
            new_copy->next = temp;
            return copy_special(new_copy->next, original->next)+1; 
            }
        }
    }
	node * rear;
};
