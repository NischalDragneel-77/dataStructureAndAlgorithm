#ifndef STACK_H
template<typename T>
#define maxSize 20
class stack
{
private:
    T data[maxSize];
    
public:
    stack();
    int upMost;
    void push(T data);
    T pop();
    T top();
    bool isEmpty();
    bool isFull();
};
#define STACK_H
#endif 