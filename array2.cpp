#include<iostream>
using namespace std;
int main(){
	const int size = 10;
	int array[size]={22,33,44,55};
	cout<<"Insert values in array: "<<endl;
	for(int i=5;i<size;i++){
		cin>>array[i];
	}
	cout<<"Array:"<<endl;
	for(int j=0;j<size;j++){
		cout<<"\t"<<array[j];
	}
}