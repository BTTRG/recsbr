#pragma once

#include "WindowsWrapper.h"

#define CARET_MAX 0x43

struct CARET_TABLE
{
	int view_left;
	int view_top;
};

struct CARET
{
	int cond;
	int code;
	int direct;
	int x;
	int y;
	int xm;
	int ym;
	int act_no;
	int act_wait;
	int ani_no;
	int ani_wait;
	int view_left;
	int view_top;
	int count1;
	int count2;
	RECT rect;
};

extern CARET gCrt[CARET_MAX];
extern CARET_TABLE gCaretTable[24];

void InitCaret(void);
void ActCaret(void);
void PutCaret(int fx, int fy);
void SetCaret(int x, int y, int code, int dir);
