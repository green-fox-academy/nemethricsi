IF(WIN32)
    set(SDL2_PATH ${SDL2_ROOT_PATH}/SDL2-2.0.8/${MINGW_VERSION})
    set(SDL2_IMAGE_PATH ${SDL2_ROOT_PATH}/SDL2_image-2.0.3/${MINGW_VERSION})
    set(SDL2_TTF_PATH ${SDL2_ROOT_PATH}/SDL2_ttf-2.0.14/${MINGW_VERSION})
ENDIF()

set(SDL2_GFX ${SDL2_ROOT_PATH}/SDL2_plugins/gfx)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIR} ${SDL2_IMAGE_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR})
include_directories(${SDL2_GFX}/inc)

file(GLOB gfx_inc ${SDL2_GFX}/inc/*.h)
file(GLOB gfx_src ${SDL2_GFX}/src/*.c)

IF(WIN32)
    file(GLOB SDL2_DLLS ${SDL2_PATH}/bin/*.dll ${SDL2_IMAGE_PATH}/bin/*.dll ${SDL2_TTF_PATH}/bin/*.dll)

    foreach(dll ${SDL2_DLLS})
        file(COPY ${dll} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
    endforeach()
ENDIF()

foreach(executable ${EXECUTABLES})
    add_executable(${executable} main.cpp ${executable}.cpp ${gfx_inc} ${gfx_src})
    target_link_libraries(${executable} ${SDL2_LIBRARY} ${SDL2_IMAGE_LIBRARIES} ${SDL2_TTF_LIBRARIES})
endforeach()
