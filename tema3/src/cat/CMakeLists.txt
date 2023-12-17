add_library(CatLibrary STATIC cat.cxx)  

target_include_directories(CatLibrary PUBLIC "${PROJECT_SOURCE_DIR}/pet")