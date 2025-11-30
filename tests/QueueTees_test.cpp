#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/QueueTees.hpp"
#include "../src/Kitty.hpp"
#include "../src/Puppy.hpp"
#include "../src/PygmyMarmoset.hpp"

TEST_CASE("Can add elements to queue"){
    QueueTees queue;

    Kitty kitty = Kitty("Meows", 5);
    Puppy puppy = Puppy("Barks", 5);
    PygmyMarmoset marmoset = PygmyMarmoset("Makes noises", 5);
    REQUIRE(queue.size() == 0);
    queue.enqueue(kitty);
    queue.enqueue(puppy);
    queue.enqueue(marmoset);
    REQUIRE(queue.size() == 3);
}

TEST_CASE("Can remove elements from queue"){
    QueueTees queue;

    Kitty kitty = Kitty("Meows", 5);
    Puppy puppy = Puppy("Barks", 5);
    PygmyMarmoset marmoset = PygmyMarmoset("Makes noises", 5);

    queue.enqueue(kitty);
    queue.enqueue(puppy);
    queue.enqueue(marmoset);

    queue.dequeue();
    queue.dequeue();
    REQUIRE(queue.size() == 1);
}

TEST_CASE("Can peek on the queue"){
    QueueTees queue;

    Kitty kitty = Kitty("Meows", 5);
    Puppy puppy = Puppy("Barks", 5);
    PygmyMarmoset marmoset = PygmyMarmoset("Makes noises", 5);

    queue.enqueue(kitty);
    queue.enqueue(puppy);
    queue.enqueue(marmoset);

    REQUIRE(queue.peek().get_description() == "Meows");
}
