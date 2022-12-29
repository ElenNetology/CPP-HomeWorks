#include "Exception.h"
#include <iostream>
#include <stdexcept>
#include "Figure.h"
#include "Print.h"

std::string Exception()
{
   
    if (error_code == 0)
        return "количество сторон не равно 0";
    ////////Треугольник//////////
    if (error_code == 1)
        return "количество сторон не равно 3";