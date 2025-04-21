#pragma once
#include<iostream>
using namespace std;

class player1 {
public:
    int p1, p2; // Player position (row, col)
    player1(int a, int b) : p1(a), p2(b) {} // Constructor
};

class Grid {
public:
    int row = 5;
    int col = 5;
    void grid(player1& obj);
    bool movePlayer(player1& obj, char input);
};