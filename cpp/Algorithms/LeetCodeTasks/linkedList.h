#pragma once
#include <iostream>

using namespace std;


struct ListNode
{
    int val;
    ListNode * next;

    ListNode();

    ListNode(int x);

    ListNode(int x, ListNode * next);

    void toString(const char * start, const char * sep, const char * end);
};