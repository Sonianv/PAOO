add_library(OwnerLibrary STATIC owner.h owner.cxx)  

target_include_directories(OwnerLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(OwnerLibrary PUBLIC DogLibrary)