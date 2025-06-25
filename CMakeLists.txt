cmake_minimum_required(VERSION 3.28)
project(multiplat_sample)

# Switch
set(TARGET_CPU x64 CACHE STRING "target CPU?(x64/arm64)")

include(cmakes/common.cmake)

#build lib
add_library(sample STATIC lib/src/libmain.c)
target_include_directories(sample PUBLIC lib/include)

#build exe
add_executable(multiplat_sample src/main.c)
target_include_directories(multiplat_sample PUBLIC include)
target_link_libraries(multiplat_sample PRIVATE sample)

if(${TARGET_CPU} STREQUAL x64)
	message("[BUILD]TARGET_CPU=x64")
	include(cmakes/x64.cmake)

elseif(${TARGET_CPU} STREQUAL arm64)
	message("[BUILD]TARGET_CPU=arm64")
	include(cmakes/arm64.cmake)

else()
	message("[BUILD]TARGET_CPU=unknown")
endif()


