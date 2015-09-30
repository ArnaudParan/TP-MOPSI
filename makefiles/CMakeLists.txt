CMAKE_MINIMUM_REQUIRED(VERSION 2.6)



project(exo)


set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})


#################################################

Find_Package(SDL REQUIRED)


if(NOT SDL_FOUND)

	message(FATAL_ERROR "SDL non trouvée")

endif(NOT SDL_FOUND)

link_libraries(${SDL_LIBRARY})

Find_Package(SDL_image REQUIRED)


if(NOT SDL_FOUND)

	message(FATAL_ERROR "SDL non trouvée")

endif(NOT SDL_FOUND)

link_libraries(${SDL_IMAGE_LIBRARY})
#################################################

#FILE(TO_CMAKE_PATH "$ENV{IMAGINEPP_ROOT}" d)

#IF(NOT EXISTS "${d}")

#    MESSAGE(FATAL_ERROR "Error: environment variable IMAGINEPP_ROOT=" "${d}")

#ENDIF(NOT EXISTS "${d}")

#SET(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${d}/CMake")

#FIND_PACKAGE(Imagine)

#ImagineUseModules(exo Graphics)

#################################################


file(
	GLOB_RECURSE
	sources
	./src/*
)


add_executable(
	projet
	${sources}
)
