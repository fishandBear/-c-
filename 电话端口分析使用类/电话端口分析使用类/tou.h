#pragma once
#include<windows.h>
#include <iostream>
using namespace std;

//楼层,为每个楼层创建对象.
class floor
{
public:
    int  top_up{0};   // 楼层的上排
    int  down{0};  // 楼层的下派
   
};