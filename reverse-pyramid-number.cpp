#include<iostream>
using namespace std;

int main(){
	int size =5;
	for(int i=0; i<size; i++){
		for(int j=0; j<i; j++){
			cout<<" ";
		}
		for(int k=0; k<2*(size-i) -1; k++){
			cout<<(k+1);
		}
		cout<<"\n";
	}
	return 0;
}
