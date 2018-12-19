//
//  main.c
//  2-线性表
//
//  Created by W W on 2018/11/26.
//  Copyright © 2018 W W. All rights reserved.
//

#include <stdio.h>

const int Maxsize=100;
typedef struct
{
    DataType data[Maxsize]；
    int length;
}SeqList;
SeqList L;
//

const int Maxsize=7;
typedef struct
{
    int num;
    char name[8];
    char sex[2];
    int age;
    int score;
}DataType;
typedef struct
{
    DataType data[Maxsize];
    int length;
}SeqList;
SeqList student;
