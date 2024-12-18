#include <stdio.h>
int main() {
	int array[10]={15,49,28,77,31,77,15,15,47,28};
	int length=sizeof(array)/sizeof(int);
	int max=0,temp;
	for(int i=0;i<length;i++){
		int count=0;
		for(int j=0;j<length;j++){
			if(array[i]==array[j]) {
				count++;
			} if(count>max) {
				max=count;
				temp=array[i];
			}
		} 
	} printf("phna tu xuaat hien nhieu nhat: %d",temp);
}
