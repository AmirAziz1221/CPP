#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int array[size];
	cout<<"Enter your Complete Array: "<<endl;
	for(int i=0; i<size; i++){
		cout<<"Index "<<i<<" :";
		cin>>array[i];
	}
	size--;
	cout<<"Delete the last Element in Array: "<<endl;
	cout<<"Updated Array after deletion :"<<endl;
	for(int i=0; i<size; i++){
		cout<<"Index "<<i<<": "<<array[i]<<endl;
	}
}