#include<iostream>
#include<cstdio>
#include<conio.h>
#include<cstring>
#include<cmath>
#include<ctime>
#include<string>
#include<vector>
#include<queue>
#include<algorithm>

#define SIZE 25     //奇数，代表迷宫总大小，可修改

using namespace std;
void Start(); 
void AAA();

struct Node{
    int x,y;
    Node(){x=0;y=0;}
    Node(int x,int y):x(x),y(y){}
};

