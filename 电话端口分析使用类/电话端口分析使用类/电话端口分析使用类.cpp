// 电话端口分析使用类.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include<windows.h>
#include <iostream>
using namespace std;

//楼层,为每个楼层创建对象.
class floor_hbj
{
public:
    int  top_up{ 0 };   // 楼层的上排
    int  down{ 0 };  // 楼层的下派
    int  mid{ 0 };//不分上下排
    int  result{ 0 };//结果
    void floor_liantong(int loction) {
        result = (mid + loction) - 1;
        cout << "本地端口为" << loction << ">>>>>" << "联通端口为" << result << endl;
    }

    void floor_liantong_up(int loction) {
        result = (top_up + loction) - 1;
        cout << "本地端口为" << loction << ">>>>>" << "联通端口为" << result << endl;
    }

    void floor_liantong_down(int loction) {
        result = down + (loction - 25) - 1;
        cout << "本地端口为" << loction  << ">>>>>" << "联通端口为" << result << endl;
    }


};


int main()
{
    int loctin{ 0 };//本地端口
    int foolr_louceng{ 0 };
    cout << "请输入本地端口：";
    cin  >> loctin;
    cout << "请输入楼层：";
    cin >> foolr_louceng;

    switch (foolr_louceng) {
    case 5:{
        floor_hbj floor_5; //定义5楼对象
        floor_5.mid = 218;
        floor_5.floor_liantong(loctin);//传递本地端口计算
        break; }
    
    case 6: {
        floor_hbj floor_6;
        if (loctin > 25) { 
        floor_6.down = 51; 
        floor_6.floor_liantong_down(loctin);
        }
        else{
            floor_6.top_up = 1;
            floor_6.floor_liantong_up(loctin);
        }
           
        break; }

    case 7: {
        floor_hbj floor_7;
        if (loctin > 25) {
            floor_7.down = 76;
            floor_7.floor_liantong_down(loctin);
        }
        else {
            floor_7.top_up = 26;
            floor_7.floor_liantong_up(loctin);
        }

        break; }

    case 8: {
        floor_hbj floor_8;
        if (loctin > 25) {
            floor_8.down = 146;
            floor_8.floor_liantong_down(loctin);
        }
        else {
            floor_8.top_up = 97;
            floor_8.floor_liantong_up(loctin);
        }

        break; }

    case 9: {
        floor_hbj floor_9;
        if (loctin > 25) {
            floor_9.down = 172;
            floor_9.floor_liantong_down(loctin);
        }
        else {
            floor_9.top_up = 122;
            floor_9.floor_liantong_up(loctin);
        }

        break; }

    case 10: {
        floor_hbj floor_10;
        if (loctin > 25) {
            floor_10.down = 243;
            floor_10.floor_liantong_down(loctin);
        }
        else {
            floor_10.top_up = 193;
            floor_10.floor_liantong_up(loctin);
        }

        break; }

    case 11: {
        floor_hbj floor_11; //定义5楼对象
        floor_11.mid = 268;
        floor_11.floor_liantong(loctin);//传递本地端口计算
        break; }

    }

   



    
}
