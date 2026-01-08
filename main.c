#include <stdio.h>
#include <stdlib.h>
typedef enum{FALSE,TRUE} Boolean;

#define N 5




//int top = -1;
//int stack[N];



Boolean isEmpty(int top){

            return top==-1;
}


Boolean isFull(int top){

   return (top >= N);
          // printf("overflow condition occur");
}




void push(int entry,int top,int stack[]){


        if(isFull(top)){
            printf("overflow");
            printf("%d",top);
            //top--;
        }else{
         //++top;
         printf("%d",top);
       // printf("Enter your number: ");
       // scanf("%d",&stack[top]);
         stack[top]=entry;

        printf("\n\nsuccessfully entered the value %d",entry);

        }
}

void pop(int top,int stack[]){

        if(isEmpty(top)){
            printf("underflow");
        }else{

           int popValue = stack[top+1];
           //top--;

          printf("\n\nsuccessfully poped the value %d",popValue);
        }
}


void peek(int top,int stack[]){
    if(isEmpty(top)){
            printf("stack is empty");


    }else{
        printf("\n\n%d is the top now",stack[top]);
    }
}




int main(){

    int top = -1;
    int stack[N];



while(1){
 int choice,entry;

 printf("\n\n\nYou can give a number that what you want\n 1.To enter a value(push)\n 2.To delete a value(pop)\n 3.To get the top value(top)\n");
 printf("what you want to do: ");
 scanf("%d",&choice);


 switch(choice){
 case 1:
     printf("enter the value:");
     scanf("%d",&entry);


    push(entry,++top,stack);
    //printf("%d",top);
    break;

 case 2:
     if(top>N-1){
            top = N-1;

     }


    pop(--top,stack);

    break;

 case 3:
    peek(top,stack);
    break;

 default:
    printf("Enter a value from the given set");

 }



}




    return 0;
}


