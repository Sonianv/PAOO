cmake_minimum_required(VERSION 3.10)

project(Tema1 VERSION 1.0)

add_subdirectory(pet)

add_executable(Tema1 main.cxx)

target_link_libraries(Tema1 PUBLIC PetLibrary)

target_include_directories(Tema1 PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/pet"
                          )