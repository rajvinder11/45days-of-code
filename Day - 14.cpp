# include <iostream>
# include <malloc.h>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node* next;
};
struct node *start=NULL;

void create();
void display();
int main()
{
    int n;
    while(1){
        
        cout<<"1.create\n2.display\n3.exit";
        cout<<" Select an option";
        cin>>n;
        switch(n)
        {
            case 1: create();
            break;
            case 2: display();
            break;
            case 3:exit(0);
        }	
}
return (0);
}
void create(){
	struct node *ptr,*temp;
	int n;
	ptr=(struct node*)malloc(sizeof(struct node));
	cout<<"Enter Value";
	cin>>n;
	ptr->data = n;
	ptr->next = NULL;
	if (start==NULL){
	start = ptr;	
	}
	else{
		temp=start;
		while (temp->next!=NULL){
			temp=temp->next;
		}
			temp->next = ptr;
	}

	
}
void display(){
    struct node *temp;
	if (start==NULL)
	{
		cout<<"list is empty";
	}
	else{
		temp = start;
		while (temp!=NULL){
			cout<<temp->data<<endl;
			temp = temp->next;
		}
	}
}