 
cmake_minimum_required (VERSION 2.8) 

project(tiledefgame)

include_directories (${tiledefgame_SOURCE_DIR}/game_src)


link_directories (${tiledefgame_SOURCE_DIR_SOURCE_DIR}/game_src)

find_package(SDL REQUIRED)
find_package(SDL_ttf REQUIRED)
find_package(SDL_image REQUIRED)
find_package(OpenGL REQUIRED)
find_package(LibXml2 REQUIRED)

add_subdirectory (game_src) 

add_executable(tiledefgame game_src/tiledefgamemain.cpp)
target_link_libraries(tiledefgame tiledefgameobj2 xml2 SDL SDL_ttf GL GLU stdc++ SDL_image)


project(tiledefgameeditor)

#include_directories( /usr/include )


include_directories (${tiledefgame_SOURCE_DIR}/editor_src)


link_directories (${tiledefgame_SOURCE_DIR}/editor_src)

find_package(SDL REQUIRED)
find_package(SDL_ttf REQUIRED)
find_package(SDL_image REQUIRED)
find_package(OpenGL REQUIRED)
find_package(LibXml2 REQUIRED)




add_subdirectory (editor_src) 


add_executable(tiledefgameeditor editor_src/tiledefgameeditormain.cpp )


target_link_libraries(tiledefgameeditor tiledefgameeditorobj xml2 SDL SDL_ttf GL GLU stdc++ SDL_image)
