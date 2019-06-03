#include "Triangle.h"
#include <stdio.h>

int isAnySideZero(int side1,int side2,int side3){
if(side1 == 0 || side2 == 0 || side3 == 0){
    return 1 ;
  }
  return 0;
}

int isAnySideNegative(int side1,int side2,int side3){
if(side1 < 0 || side2 < 0 || side3 < 0){
    return 1 ;
  }
  return 0;
}

char* getTriangleTypename(int side1,int side2,int side3){
  if(isAnySideZero(side1,side2,side3)){
  return "invalid (side cant be zero)";
  }
  if(isAnySideNegative(side1,side2,side3)){
  return "invalid (side cant be negative)";
  }
  if(side1==side2 && side1==side3 && side2==side3){
    return "equilateral";
  }
  if(side1==side2 || side1==side3 || side2==side3){
    return "isosceles" ;
  }
    else if ((!(side1==side2 && side1==side3 && side2==side3))&&(side1 >0 && side2 >0 && side3 >0)){
    return "scalene" ;
    }
  return NULL;
}