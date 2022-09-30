#include<iostream>
using namespace std;

int main(){
	int size = 5;
	for(int i=0;i<size;i++){
		for(int j=0;j<size-i;j++){
			cout<<" ";
		}
		for(int k=0;k<=i;k++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
