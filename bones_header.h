#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

struct StudentsMarks;
void InputDynamicArray(int**a, int &rows, int &cols);
void OutputDynamicArray(int** a, int& rows, int& cols);

int game_title(int pl);
void Grani(int* result);