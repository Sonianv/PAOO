# TODO 14: Remove mysqrt.cxx from the list of sources
add_library(MathFunctions MathFunctions.cxx)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

if (USE_MYMATH)
  target_compile_definitions(MathFunctions PRIVATE "USE_MYMATH")
endif()

# TODO 12: When USE_MYMATH is ON, add a library for SqrtLibrary with
# source mysqrt.cxx
add_library(SqrtLibrary STATIC
              mysqrt.cxx
              )

# TODO 13: When USE_MYMATH is ON, link SqrtLibrary to the MathFunctions Library
target_link_libraries(MathFunctions PRIVATE SqrtLibrary)
