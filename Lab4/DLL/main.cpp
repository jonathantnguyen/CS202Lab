#include "dlist.h"


int main()
{
    list object;
    object.build();
    object.display();

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    list new_list;

    int val = object.copy_DLL(new_list);
    cout << "Count: " << val;
    new_list.display();
    object.display();
    
    return 0;
}
