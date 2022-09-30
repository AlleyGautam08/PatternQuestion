#include<iostream>
using namespace std;

int main(){
	int size =5, num=1;
	for(int i=1; i<=size; i++){
		for(int j=size; j>i; j--){
			cout<<" ";
		}
		for(int k=0; k<i*2-1; k++){
			if(k==0 || k==2*i-2){
				cout<<num++;
			}
			else{
				cout<<" ";
			}
		}
		num = 1;
		cout<<"\n";
	}
	for(int k=(size-i)*2-1;k>=1; k--){
		if(k==1 || k==(size-i)*2-1){
			cout<<num++;
			
		} 
		else{
			cout<<" ";
		}
		num = 1;
		cout<<"\n";
	}

	return 0;
}
