#include<iostream>
#define MAX 5
using namespace std;
int STACK[MAX],TOP;
void initSTACK(){
	TOP=-1;
}
int isempty(){
	if(TOP==-1)
	return 1;
	else
	return 0;
}
int isfull(){
	if(TOP==MAX-1)
	return 1;
	else 
	return 0;
}
void PUSH(int num){
	if(isfull()){
		cout<<"STACK is full"<<"-"<<"OVERFLOW"<<endl;
		return;
	}
	++TOP;
	STACK[TOP]=num;
	cout<<num<<" "<<"has been inserted"<<endl;
}
void DISPLAY(){
	int i;
	if(isempty()){
		cout<<"STACK is empty"<<"-"<<"UNDERFLOW"<<endl;;
		return;
	}
	for (i=TOP;i>=0;i--){
		cout<<STACK[i]<<" ";
	}
	cout<<endl;
}
//POP
void POP(){
	int temp;
	if(isempty()){
		cout<<"STACK is empty"<<"-"<<"UNDERFLOW"<<endl;
		return;
			}
			temp=STACK[TOP];
			TOP--;
			cout<<temp<<"has been deleted"<<endl;
}
int main(){
	int num;
	initSTACK();
	char ch;
	do{
		int a;
		cout<<"choose\n1.PUSH\n"<<"2.POP\n"<<"3.DISPLAY\n";
		cout<<"please enter your choice";
		cin>>a;
		switch(a){
			case 1:cout<<"enter the integer number:";
			cin>>num;
			PUSH(num);
			break;
			case 2:POP();
			break;
			case 3:DISPLAY();
			break;
			default:cout<<"an invalid choice\n";
		}
		cout<<"do you want to continue?";
		cin>>ch;
	}
	while(ch=='x'|| ch=='y');
	return 0;
	
}