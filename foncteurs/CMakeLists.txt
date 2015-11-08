CMAKE_MINIMUM_REQUIRED(VERSION 2.6)



project(TP_MOPSI_1)


set(EXECUTABLE_OUTPUT_PATH bin/${CMAKE_BUILD_TYPE})

file(
	GLOB_RECURSE
	sources
	./src/*
)

add_executable(
	projet
	${sources}
)
