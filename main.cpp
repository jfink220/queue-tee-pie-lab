#include <iostream>

#include "src/QueueTees.hpp"
#include "src/Kitty.hpp"
#include "src/Puppy.hpp"
#include "src/PygmyMarmoset.hpp"
#include <string>
using namespace std;
int main() {
  // Create a bunch of objects that implement the Cutie base class
  Kitty kitty = Kitty("Meows", 5);
  Puppy puppy = Puppy("Barks", 5);
  PygmyMarmoset marmoset = PygmyMarmoset("Makes noises", 5);

  // Create a queue data structure
  QueueTees queue;

  // The size of the queue should equal zero since there are no objects in it
  cout << "Size before adding elements: " << queue.size() << endl;

  // Add the cuties to the queue
  queue.enqueue(puppy);
  queue.enqueue(kitty);
  queue.enqueue(marmoset);

  // The size of the queue should equal three since there are three objects in it
  cout << "Size after adding elements: " << queue.size() << endl;

  // The first dequeue should return the puppy
  queue.dequeue();

  // The second dequeue should return the kitty
  queue.dequeue();

  // The third dequeue should return the pygmy marmoset
  queue.dequeue();
}
