cmake_minimum_required(VERSION 3.22.1)

project(queue_tee_pie)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.8.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(QueueTees_test tests/QueueTees_test.cpp src/QueueTees.cpp src/Kitty.cpp src/Puppy.cpp src/PygmyMarmoset.cpp)
add_executable(main main.cpp src/QueueTees.cpp src/Kitty.cpp src/Puppy.cpp src/PygmyMarmoset.cpp)

target_link_libraries(QueueTees_test PRIVATE Catch2::Catch2WithMain)
