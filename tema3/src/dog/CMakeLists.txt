add_library(DogLibrary STATIC dog.h dog.cxx)  

target_include_directories(DogLibrary PUBLIC "${PROJECT_SOURCE_DIR}/pet")
target_include_directories(DogLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(DogLibrary PUBLIC OwnerLibrary)