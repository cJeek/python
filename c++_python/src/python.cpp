#include "test.h"

extern "C" {  
        TestLib obj;  
        void display() {  
               obj.display();   
        }  
        void display_int(int i) {  
            cout<<"i = "<<i << endl;   
			obj.display(2000);   
        }  
}  

/*g++ *.cpp -fPIC -shared -o libtest.so*/
