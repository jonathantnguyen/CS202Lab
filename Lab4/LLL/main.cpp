#include "list.h"

int main()
{
    list object;
    object.build();    //builds a LLL
    cout << "LIST ONE:";
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
//    int val;
//   val = object.display_except();
//    cout <<"Sum: "<< val;  
    
//    int val;
//    val = object.remove_except();
//    cout <<"Count: "<< val;  
 
        list object2;
    cout << "LIST TWO";
    object2.build();
    object2.display();
    bool tf = object.same_contents(object2);
    if(!tf)
        cout << "object2 is a set of object1\n";
    object.display();  //displays the LLL again!
   
    
    return 0;
}
