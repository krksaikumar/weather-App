#include<stdio.h>
#include<stdlib.h>
#define max 5
int top = -1;
int stack[max];
void push(int x){
	if(top == max -1 ){
		printf("Stack is over flow");
		return;
	}
	top++;
	stack [top] = x;
	printf("%d element is pushed\n ", x);
}
void pop(){
	if(top == -1){
		printf("stack underflow\n");
		return;
	}
	int y = stack[top];  /// jddjjddjkdkd
	top--;
	printf("%d element is popped\n",y);
}
void display(){
	if(top == -1){
       printf("stack is empty \n");
       return;
	}
	for(int i = top; i>= 0; i--){
		printf("%d  ", stack[i]);
	}
}
void main(){
while(1){
	int ch,x;
	printf("MAIN MENU\n");
	printf("1.push\n2. pop\n3. display\n4. exit");
	printf("enter your choice: \n");
	scanf("%d",&ch);
	switch(ch){
		case 1:
		        printf("enter an element\n");
		        scanf("%d", &x);
		        push(x);
		        break;
		case 2:
		        pop();
		        break;
		case 3:
		        display();
		        break;
		 case 4:
		         exit(0);
		         break;
		 default:
		         printf("enter valid choice\n");
		
	}
}	
}