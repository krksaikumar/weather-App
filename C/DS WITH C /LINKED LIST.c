#include <stdio.h>
typedef struct Node{
	int data;
	struct Node *link;
} Node;
Node *temp, *head, *ptr;
//CREATE
void create(int n){
	int i=0;
	head = NULL;
	temp = NULL;
	ptr = NULL;
	
	printf("Enter %d elements: \n", n);	   
     for(i=0; i<n; i++){
     	
		temp = (Node*)malloc(sizeof(Node));
		scanf("%d", &(temp->data));
		temp->link = NULL;
		
		if(head == NULL){
			head = temp;
			ptr = head;
		}
		else{
			ptr->link = temp;
			ptr = temp;
		}		
	}
}
//INSERT
void insert(int e){
	int choice, pos, count ;
	printf("1. insert at first\n2. insert at last\n3. insert at other position\n");
	scanf("%d", &choice);
	temp = (Node*)malloc(sizeof(Node));
	temp->data = e;
	temp->link = NULL;
	ptr = head;
	switch(choice){
		case 1:
	     	temp->link = head;
	     	head = temp;
		case 2:
			while(ptr->link != NULL)
				ptr = ptr->link;
			ptr->link = temp;
			break;
		case 3:
			printf("Enter the position : ");
			scanf("%d", &pos);
			count = 2;
			while(count < pos ){
				ptr = ptr->link;
				count++; 
			}
		/*  ptr1 = ptr;
			ptr = ptr->link;
			
			ptr1->link = temp;
			temp->link = ptr1->link;
			ptr->link = temp*/
			temp->link = ptr->link;
			ptr->link = temp;
			break;
		default:
			printf("––Enter valid option–– \n");
	}
	
}

void display(){
	ptr = head;
	printf("\n");
	while(ptr != NULL){
		printf("%d––>", ptr->data);
		ptr = ptr->link;
	}
	printf("NULL\n");
	
}
int main(){
	
	int choice, n, e;
	while(1){
		printf("\n****MAIN MENU****\n1. CREATE\n2. INSERT\n3. DELETE\n4. DISPLAY\n5. SEARCH\n6. EXIT\n\n");
		printf("Enter your choice : \n");
		scanf("%d", &choice);
		switch (choice){
				
		case 1:
	    	printf("Enter number of elements :\n");
		    scanf("%d", &n);
		    create(n);
		    break;
		case 2:
			printf("Enter an element to insert: \n");
			scanf("%d", &e);
	     	insert(e);
	     	break;
	     case 4:
		    display();
		    break;
		
	    default:
	    	printf("Enter valid choice \n");
		    
		    
		}
	}
}