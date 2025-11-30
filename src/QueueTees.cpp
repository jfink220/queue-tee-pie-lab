#include "QueueTees.hpp"
bool QueueTees::is_empty(){
    return start==top;
}
bool QueueTees::is_full(){
    return arr+MAX_SIZE==top;
}
int QueueTees::size(){
    return top-start;
}
void QueueTees::enqueue(Cutie& element){
    if(!is_full()){
        *top = &element;
        top++;
    }else{
        std::cout << "The queue is full";
    }
}
Cutie& QueueTees::dequeue(){
    if(!is_empty()){
        Cutie* poppedElement = *start;
        start++;
        return *poppedElement;
    }else{
        throw "Queue is empty";
    }
}

Cutie& QueueTees::peek(){
    if(!is_empty()){
        Cutie* poppedElement = *start;
        return *poppedElement;
    }else{
        throw "Queue is empty";
    }
}

