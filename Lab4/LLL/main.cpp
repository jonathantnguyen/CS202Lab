#include "list.h"

int main()
{
    list object;
    object.build();    //builds a LLL
    object.display();  //displays the LLL
    
    //PLEASE PUT YOUR CODE HERE to call the function assigned
    
//
//    int val;
//    int response;
//    cout << "Val to search : "; 
//    cin >> response;
//    val = object.num_times(response);
//    cout << val;
//  
    int val;
    val = object.display_except();
    cout << val;  

    object.display();  //displays the LLL again!
   
    
    return 0;
}
