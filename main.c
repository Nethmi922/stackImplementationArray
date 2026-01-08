#include <stdio.h>
#include <stdlib.h>
typedef enum{FALSE,TRUE} Boolean;

#define n 5


struct stack{
    int top;
    int arr[n];
};





Boolean isEmpty(int top){

            return top==-1;
}


Boolean isFull(int top){

   return (top == n-1);

}


void createstack(struct stack *s){
    s->top=-1;
}


void push(int entry,struct stack *s){


        if(isFull(s->top)){
            printf("overflow");

        }else{
         ++(s->top);
         s ->arr[s->top]=entry;

        printf("\n\nsuccessfully entered the value %d",entry);

        }
}

void pop(struct stack *s){

        if(isEmpty(s->top)){
            printf("underflow");
        }else{

           int popValue = s->arr[s->top];
           (s->top)--;

          printf("\n\nsuccessfully poped the value %d",popValue);
        }
}


void peek(struct stack *s){
    if(isEmpty(s->top)){
            printf("stack is empty");


    }else{
        printf("\n\n%d is the top now",s->arr[s->top]);
    }
}




int main(){

 struct stack s1,s2,s3;

 createstack(&s1);



while(1){
 int choice,entry;

 printf("\n\n\nYou can give a number that what you want\n 1.To enter a value(push)\n 2.To delete a value(pop)\n 3.To get the top value(top)\n");
 printf("what you want to do: ");
 scanf("%d",&choice);


 switch(choice){
 case 1:
     printf("enter the value:");
     scanf("%d",&entry);


    push(entry,&s1);

    break;

 case 2:

    pop(&s1);

    break;

 case 3:
    peek(&s1);
    break;

 default:
    printf("Enter a value from the given set");

 }



}




    return 0;
}


