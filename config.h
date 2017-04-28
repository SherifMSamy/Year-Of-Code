#ifndef CONFIG_H_INCLUDED
#define CONFIG_H_INCLUDED

//This file for calling all header file we need in C & C++
//---------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std ;
//------------------

//This is for make date type more easy
//-------------------------------------
typedef char char1 ;
typedef unsigned char uchar1 ;
//****************************
typedef int int4 ;
typedef short int sint2 ;
typedef long int lint4 ;
//****************************
typedef unsigned int uint4 ;
typedef unsigned short int usint2 ;
typedef unsigned long int ulint4 ;
//*********************************
typedef float float4 ;
typedef double double8 ;
typedef long double ldouble12 ;
//-----------------------------

//This function to get size of all variables
//-------------------------------------------
void size_of ()
{
cout << "Char = " << sizeof (char) << endl ;
cout << "Unsigned Char = " << sizeof (unsigned char) << endl ;
cout << "\n" ;
//*************************************************************
cout << "Int = " << sizeof (int) << endl ;
cout << "Short Int = " << sizeof (short int) << endl ;
cout << "Long Int = " << sizeof (long int) << endl ;
cout << "\n" ;
//****************************************************
cout << "Unsigned Int = " << sizeof (unsigned int) << endl ;
cout << "Unsigned Short Int = " << sizeof (unsigned short int) << endl ;
cout << "Unsigned Long Int = " << sizeof (unsigned long int) << endl ;
cout << "\n" ;
//***********************************************************************
cout << "Float = " << sizeof (float) << endl ;
cout << "Double = " << sizeof (double) << endl ;
cout << "Long Double = " << sizeof (long double) << endl ;
cout << "\n" ;
}
//----------------------------------------------------------

#endif // CONFIG_H_INCLUDED