set(CMAKE_CROSSCOMPILING true)
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR arm)

set(CMAKE_C_COMPILER /usr/bin/aarch64-linux-gnu-gcc)

add_compile_definitions(TARGET_CPU_ARM64)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -g -O0 -coverage")

