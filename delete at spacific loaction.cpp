#include<iostream>
using namespace std;
int main(){
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	int array[size];
	for(int i=0;i<size;i++){
		cout<<"Index "<<i<<" :";
		cin>>array[i];
	}
	int position;
	cout<<"Enter position to be Deleted: ";
	cin>>position;
	if(position<0 || position >= size){
		cout<<"Invalid Position :";
		return 1;
	}
	for(int i=position; i<size-1; i++){
		array[i]=array[i+1];
	}
	size--;
	cout<<"Updated Array: "<<endl;
	for(int i=0;i<size; i++){
		cout<<"Index "<<i<<": "<<array[i]<<endl;
	}
}