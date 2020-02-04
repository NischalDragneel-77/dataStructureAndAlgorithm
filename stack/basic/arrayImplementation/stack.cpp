#include<iostream>
#include "stack.h"
template<typename T>

stack<T>::stack(){
    upMost=-1;
}
template<typename T>
bool stack<T>::isEmpty(){
    if(upMost==-1) {
        return true;
    }
    else return false;
}
template<typename T>
bool stack<T>::isFull(){
    if( upMost>=maxSize) return true;
    else return false;
}
template<typename T>
void stack<T>::push(T d){
    if(isFull()){
        std::cout<<"Stack is Full!!!~~~STACK OVERFLOW~~~!!! \n";
    }else{
        upMost++;
        this->data[upMost]=d;
    }
    
}

template<typename T>
T stack <T>::top(){
    if(isEmpty()) {
        std::cout<<"Stack is Empty!!!~~~STACK UNDERFLOW~~~!!! \n";
        return 0;
    }
    else{
        T i=data[upMost];
        return i;
    }
}

template<typename T>
T stack <T>::pop(){
    if(isEmpty()) {
        std::cout<<"Stack is Empty!!!~~~STACK UNDERFLOW~~~!!! \n "; 
        return 0;
    }
    else{
        T i=data[upMost];
        upMost--;
        return i;
    }
}