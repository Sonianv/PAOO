cmake_minimum_required(VERSION 3.10)

project(Tema3 VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fno-elide-constructors")

add_subdirectory(pet)
add_subdirectory(dog)
add_subdirectory(cat)
add_subdirectory(sphynxCat)

add_executable(Tema3 main.cxx)

target_link_libraries(Tema3 PUBLIC PetLibrary DogLibrary CatLibrary SphynxCatLibrary pthread)

target_include_directories(Tema3 PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/pet"
                          "${PROJECT_SOURCE_DIR}/dog"
                          "${PROJECT_SOURCE_DIR}/cat"
                          "${PROJECT_SOURCE_DIR}/sphynxCat"
                          )