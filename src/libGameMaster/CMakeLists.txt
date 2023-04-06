add_library(GameMaster GameMaster.cpp)

target_link_libraries(GameMaster Player)

target_include_directories(GameMaster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})