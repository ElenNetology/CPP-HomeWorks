#include "Exception.h"
#include <iostream>
#include <stdexcept>
#include "Figure.h"
#include "Print.h"

std::string Exception()
{
   
    if (error_code == 0)
        return "���������� ������ �� ����� 0";
    ////////�����������//////////
    if (error_code == 1)
        return "���������� ������ �� ����� 3";