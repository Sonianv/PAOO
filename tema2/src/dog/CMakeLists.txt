add_library(DogLibrary STATIC dog.cxx)  

target_include_directories(DogLibrary PUBLIC "${PROJECT_SOURCE_DIR}/pet")