// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����



// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
//__declspec(dllexport)

extern   "C"   __declspec(dllexport)
__declspec(dllexport) int  AddMe(int a);
extern void encrypt(unsigned long *v, unsigned long *k);
extern void decrypt(unsigned long *v, unsigned long *k);