
#include <stdio.h>

int isLittle(){
	//下沉思想
   union {
	int  a;
	char b;
	}test;
    test.a=1;
    return  test.b==1;
}



int isLittle2(){
	
	char cutter=0;
	int  b=1;

	cutter= *((char*)&b);
	return cutter==1;

}


int main(int arg,const char *argvs[]){
	int res = 0;
	if (res=isLittle()){
		printf("res= %d,is little\n",res);
	}else{
		printf("is big endian \n");
	}	

	return 0;

}
