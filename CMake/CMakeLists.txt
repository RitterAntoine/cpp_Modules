cmake_minimum_required(VERSION "3.11")

project("HelloWorld")

include(FetchContent)

FetchContent_Declare(
  libsl
  GIT_REPOSITORY https://github.com/sylefeb/LibSL.git
  GIT_TAG        master
)

FetchContent_MakeAvailable(libsl)

add_definitions(-DSRC_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}/\")

add_executable("${PROJECT_NAME}" "main.cpp")

TARGET_LINK_LIBRARIES("${PROJECT_NAME}" LibSL LibSL_gl)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES "main.cpp" DESTINATION src)