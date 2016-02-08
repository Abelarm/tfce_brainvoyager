#ifndef UTILITIES_H
#define UTILITIES_H
#include <float.h>

//Finds minimum, maximum and range of a float vector  
void findMinMax(float *map, int n, float *min, float *max, float * range);

//performs confrontation between and b given a single char operation
int confront(float a, float b, char operation);

//Gets a binary vector in matlab style, given a certain operation
int * getBinaryVector(float * map, int n, const char operation, float value, int * numOfElementsMatching);

//Given a binary vector and a real vector, fills a new vector in the indices where binary == 1
float * fromBinaryToRealVector(float * map, int n, int * binaryVector);

//creates a n-element vector of float filled with 0
float * fill0(int n);
//Applies a single char operation on every element of the vector
void apply_function(float * vector, int n, const char op, float argument);

//converts 3D to 1D index
int linearIndexFromCoordinate(int x, int y, int z, int max_x, int max_y);
//converts 1D to 3D index
void coordinatesFromLinearIndex(int index, int max_x, int max_y, int * x, int * y, int * z);

//copies an int vector into a float vector
float * copyAndConvertIntVector(int * vector, int n);
#endif //UTILITIES_H