#include<iostream>
using namespace std;

int main(){
	int size = 5, alpha=65, num=0;
	for(int i=1; i<=size; i++){
		for(int j=size; j>i; j--){
			cout<<" ";
		}
		for(int k=0; k<i*2-1; k++){
			cout<<((char)(alpha+num++));
		}
		num =0;
		cout<<"\n";
	}
	for(int i=1; i<=size-1; i++){
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		for(int k=(size-i)*2-1; k>0; k--){
			cout<<((char)(alpha+num++));
		}
		num =0;
		cout<<"\n";
	}
	return 0;
}
