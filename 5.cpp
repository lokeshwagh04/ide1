#include<iostream>
using namespace std;
struct stack{
int size;
int top;
int *arr;
};
int isfull(struct stack  *s){
    if(s->top==s->size-1){
        return 1;
    }
    return 0;
}
int isempty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}
void push(struct stack *s,int data){
if(isfull(s)==1){
    cout<<"overflow condition has occured\n";
    return ;
}
s->top++;
s->arr[s->top]=data;
}
int pop(struct stack *s){
    if(isempty(s)==1){
        cout<<"underflow condtion has happened\n";
        return INT16_MIN;
    }
    return s->arr[s->top--];
}
int peek(struct stack *s,int index){
    return s->arr[index];
}
void initialize_stack(struct stack * s){
    int data;
    for(int i=s->top;i<s->size;i++){
        cin>>data;
        s->arr[i];
    }
}
int main(){

   struct stack *s=(struct stack *)malloc(sizeof(struct stack));
   s->size=10;
   s->top=-1;
   s->arr=(int*)malloc(s->size*sizeof(int));
   cout<<isfull(s)<<isempty(s)<<"\n";
   push(s,69);
   
   cout<<isfull(s)<<isempty(s)<<"\n";
   cout<<pop(s);
   pop(s);
    return 0;
}