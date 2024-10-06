cmake_minimum_required(VERSION 3.29)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled main.c
        Requisicao.h
        requisicao.c
        estrutura.h
        estrutura.c
)
