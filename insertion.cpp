#include<iostream>
using namespace std;
int main(){
	const int size=10;
	int array[size] = {22,20,30,4,2};
	cout<<"Array withour insertion: "<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter the values to be inserted in Array: "<<endl;
	//insert values 
	for(int i=5;i<size;i++){
		cin>>array[i];
	}
	cout<<endl;
	//now print full array after update
	cout<<"Array after update: "<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i]<<" ";
	}
}