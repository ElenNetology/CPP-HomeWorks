// Task3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "SmartArray.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    SmartArray sArr1(5);
    sArr1.smartArrayPushBack(1);
    sArr1.smartArrayPushBack(4);
    sArr1.smartArrayPushBack(155);
   
    sArr1.smartArrayPrint();
    
    SmartArray sArr2(2);
    sArr2.smartArrayPushBack(44);
    sArr2.smartArrayPushBack(34);
    
    sArr2.smartArrayPrint();
    sArr1 = sArr2;
    
    SmartArray sArr3(sArr1);
    sArr3.smartArrayPrint();
 
 }
