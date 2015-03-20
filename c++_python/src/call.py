import ctypes  
so = ctypes.CDLL("./libtest.so")  
so.display()  
so.display_src("hello", "world") 
#so.convert_ukey2_cloudtoken("dfasdf", "dfsdf");


