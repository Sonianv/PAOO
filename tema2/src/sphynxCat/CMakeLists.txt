add_library(SphynxCatLibrary STATIC sphynxCat.cxx)  

target_include_directories(SphynxCatLibrary PUBLIC "${PROJECT_SOURCE_DIR}/cat")
target_include_directories(SphynxCatLibrary PUBLIC "${PROJECT_SOURCE_DIR}/pet")