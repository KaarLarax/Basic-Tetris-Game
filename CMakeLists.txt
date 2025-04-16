cmake_minimum_required(VERSION 3.27)
project(Simple_Tetris)

set(CMAKE_CXX_STANDARD 17)

# Configura las rutas a las bibliotecas y encabezados de SDL
include_directories(SDL/include)
link_directories(SDL/lib)
link_directories(SDL/SDL_GfxPrimitives)  # Ajusta la ruta correctamente

# Lista de fuentes del proyecto
add_executable(Simple_Tetris
        main.cpp
        Pieces.cpp
        Pieces.h
        Tetris.h
        Board.cpp
        Board.h
        Game.cpp
        Game.h
        IO.cpp
        IO.h
)

# Configuración específica para Windows (debe ir después de add_executable)
if(WIN32)
    add_definitions(-DWIN32_LEAN_AND_MEAN)

    set_target_properties(Simple_Tetris PROPERTIES
            LINK_FLAGS "/SUBSYSTEM:WINDOWS"
    )
endif()

# Enlaza las bibliotecas SDL y SDL_gfx
target_link_libraries(Simple_Tetris SDL SDL_GfxPrimitives_Static)
