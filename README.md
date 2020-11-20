# gobangGame



## gobangGame Reference



1. #### 数据结构



存储棋盘模型

```c++
int modelNum
int modelX[200]
int modelY[200]
int model[200][10][10]
```





棋盘算法开始



电脑先手，第一步棋，使用随机数生成一个坐标，范围在中心九宫格位置



```c++
int x = randX % 3 + 6;
int y = randY % 3 + 6;
```





电脑方第二步棋，循环棋盘，