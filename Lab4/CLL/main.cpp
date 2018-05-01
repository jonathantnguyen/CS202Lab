#include "clist.h"


int main()
{
    list object;
    object.build();		//builds a circular LL
    object.display();	//displays the list

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    list new_list;
    int val = object.copy_special(new_list);
    cout << "# copied: " << val << endl;
    new_list.connect();
    cout << "\nDisplay New List\n";
    new_list.display();
    cout <<"\nDisplay Original\n";
    object.display(); //resulting list after your function call!
    
    return 0;
}
