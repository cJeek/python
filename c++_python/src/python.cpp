#include "test.h"

extern "C" {  
        TestLib obj;  
        void display() {  
               obj.display();   
        }  
        void display_src(char* cstr, char* ch) {  
            string str_1(cstr);
            string str_2(ch);
			cout<<"str_1 = "<<str_1 << endl;   
			cout<<"str_2 = "<<str_2 << endl;   
			obj.display(2000);
			const char *temp = str_2.c_str();
			strcpy(ch, temp);
			cout << "ch = "<<ch <<endl;
        }  
}  

/*g++ *.cpp -fPIC -shared -o libtest.so*/
