import ctypes  
#so = ctypes.CDLL("./libtest.so")  
so = ctypes.CDLL("/usr/lib/libsecrypto.so")  
#so.display()  
#so.display_int(1) 
so.convert_ukey2_cloudtoken("dfasdf", "dfsdf");


