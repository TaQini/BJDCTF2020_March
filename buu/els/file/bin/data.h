/*************************************************
 * 文件名: Data.h
 * 功能描述：俄罗斯方块游戏的方块数据库
 * 编写人：王廷云
 * 编写日期：2018-3-21
 * 最近更新日期：2019-7-3
*************************************************/
#ifndef  _DATA_H_
#define  _DATA_H_

#define    NR    4  // 方块数据大小
#define    TYPE  7  // 方块类型数

/* 方块数据 */
char bl[TYPE][NR][NR][NR] = {
    /* 第一种方块 */
 {
    { /* 第一种方向 */
     {1,1,0,0},
     {1,1,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {1,1,0,0},
     {1,1,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第三种方向 */
     {1,1,0,0},
     {1,1,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {1,1,0,0},
     {1,1,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
 },

 /* 第二种方块 */
 {
    { /* 第一种方向 */
     {2,2,2,2},
     {0,0,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {0,2,0,0},
     {0,2,0,0},
     {0,2,0,0},
     {0,2,0,0},
    },
    { /* 第三种方向 */
     {2,2,2,2},
     {0,0,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {0,2,0,0},
     {0,2,0,0},
     {0,2,0,0},
     {0,2,0,0},
    },
 },

 /* 第三种方块 */
 {
    { /* 第一种方向 */
     {3,0,0,0},
     {3,3,3,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {0,3,3,0},
     {0,3,0,0},
     {0,3,0,0},
     {0,0,0,0},
    },
    { /* 第三种方向 */
     {3,3,3,0},
     {0,0,3,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {0,0,3,0},
     {0,0,3,0},
     {0,3,3,0},
     {0,0,0,0},
    },
 },

 /* 第四种方块 */
 {
    { /* 第一种方向 */
     {0,0,4,0},
     {4,4,4,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {0,4,0,0},
     {0,4,0,0},
     {0,4,4,0},
     {0,0,0,0},
    },
    { /* 第三种方向 */
     {0,4,4,4},
     {0,4,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {0,4,4,0},
     {0,0,4,0},
     {0,0,4,0},
     {0,0,0,0},
    },
 },

 /* 第五种方块 */
 {
    { /* 第一种方向 */
     {0,5,0,0},
     {5,5,5,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {0,5,0,0},
     {0,5,5,0},
     {0,5,0,0},
     {0,0,0,0},
    },
    { /* 第三种方向 */
     {5,5,5,0},
     {0,5,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {0,5,0,0},
     {5,5,0,0},
     {0,5,0,0},
     {0,0,0,0},
    },
 },

 /* 第六种方块 */
 {
    { /* 第一种方向 */
     {6,6,0,0},
     {0,6,6,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {0,0,6,0},
     {0,6,6,0},
     {0,6,0,0},
     {0,0,0,0},
    },
    { /* 第三种方向 */
     {6,6,0,0},
     {0,6,6,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {0,0,6,0},
     {0,6,6,0},
     {0,6,0,0},
     {0,0,0,0},
    },
 },

 /* 第七种方块 */
 {
    { /* 第一种方向 */
     {0,7,7,0},
     {7,7,0,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第二种方向 */
     {0,7,0,0},
     {0,7,7,0},
     {0,0,7,0},
     {0,0,0,0},
    },
    { /* 第三种方向 */
     {0,0,7,7},
     {0,7,7,0},
     {0,0,0,0},
     {0,0,0,0},
    },
    { /* 第四种方向 */
     {0,7,0,0},
     {0,7,7,0},
     {0,0,7,0},
     {0,0,0,0},
    },
  },
};

#endif   //_DATA_H_
