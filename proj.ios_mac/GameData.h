//
//  GameData.h
//  SpaceT
//
//  Created by zhang zaiwei on 14-9-2.
//
//

#ifndef __SpaceT__GameData__
#define __SpaceT__GameData__

#include <iostream>

typedef unsigned char BYTE;

typedef struct Item{
    BYTE stronetype; //这是代表了宝石的类型
    BYTE magicinstrone;//宝石带有的魔法
    BYTE reverse;//保留字节
}SpaceItem;

class CGameData
{
public:
    CGameData();
    virtual ~CGameData();
    //初始化地图。初始化的目的是把地图中填满5中不同的宝石
    void InitMap();
    //判断是不是能够交换
    bool CanChange(BYTE x1,BYTE y1,BYTE x2,BYTE y2);
    
    //判断是否能删除
    bool CanRemove(int x,int y );
    
    //删除石头
    bool RemoveStone();

    //补充石头
    bool addStone(int x,int y);
private:
    //首先这个消除类游戏需要用到一个8*8的地图
    BYTE Map[8][8];
    
    int m_Current_SpaceItem_x;//当前选择的宝石的X坐标
    int m_Current_SpaceItem_y;//当前选择的宝石的Y坐标

    int m_Change_SpaceItem_x;//当前交换的宝石的X坐标
    int m_Change_SpaceItem_y;//当前交换的宝石的Y坐标
    
    
    
};

#endif /* defined(__SpaceT__GameData__) */
