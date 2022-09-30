#include<iostream>
using namespace std;

int main(){
	int size = 5;
	for(int i=1;i<=size;i++){
		for(int j=size; j>i; j--){
			cout<<" ";
		}
		for(int k=0; k<i*2-1;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=1;i<=size-1;i++){
		for(int j=0;j<i;j++){
			cout<<" ";
		}
		for(int k=(size-i)*2-1;k>0;k--){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
