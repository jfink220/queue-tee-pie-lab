const int MAX_SIZE = 10;
#include "cutie.hpp"
#include <iostream>
class QueueTees{
    private:
        Cutie* arr[MAX_SIZE];
        Cutie** start;
        Cutie** top;
    public:
        QueueTees(){
            start = arr;
            top = arr;
        }
        bool is_empty();
        bool is_full();
        int size();
        void enqueue(Cutie& element);
        Cutie& dequeue();
        Cutie& peek();


};