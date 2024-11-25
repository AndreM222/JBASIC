# Initial Setup
cmake_minimum_required(VERSION 3.18)
list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
project(jbasic LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Setup antlr requirements
include(ExternalAntlr4Cpp)
message(WARNING "Found ANTLR4 include directory: ${ANTLR4_INCLUDE_DIRS}")
include_directories(${ANTLR4_INCLUDE_DIRS})

# Add macros for cpp code generations from grammar
set(ANTLR4_ZIP_REPOSITORY https://github.com/antlr/antlr4/archive/refs/tags/4.13.2.zip)
if (APPLE)
  set(ANTLR_EXECUTABLE /opt/homebrew/Cellar/antlr/4.13.2/antlr-4.13.2-complete.jar)
endif()
find_package(ANTLR REQUIRED)

# Add lexer and and grammar
antlr_target(BasicGrammar Basic.g4 PARSER LEXER VISITOR)

include_directories(${ANTLR_BasicGrammar_OUTPUT_DIR})

add_executable(JBasic App.cpp BasicVisitorImpl.cpp BasicCasting.cpp ${ANTLR_BasicGrammar_CXX_OUTPUTS})

target_link_libraries(JBasic antlr4_static)
