add_library(Player Player.cpp)

target_link_libraries(Player Stack)

target_include_directories(Player PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})