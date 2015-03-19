#include "test.h"
void TestLib::display() {  
    cout<<"First display"<<endl;  
}  
  
  
void TestLib::display(int a) {  
	cout<<"Second display"<< a <<endl;  
}
#if 0 
extern "C" {  
        TestLib obj;  
        void display() {  
               obj.display();   
        }  
        void display_int() {  
               obj.display(2);   
        }  
}  
#endif
