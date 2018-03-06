// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// MyLib.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"

// TODO: �� STDAFX.H �������κ�����ĸ���ͷ�ļ���
//�������ڴ��ļ�������

//__declspec(dllexport)
__declspec(dllexport) int  AddMe(int a)
{
	int rs = 0;
	if (a > 0)
	{
		int i = 0;
		while (i <= a)
		{
			rs += i;
			i++;
		}
	}
	else
	{
		rs = 0;
	}
	return rs;
}
extern void encrypt(unsigned long *v, unsigned long *k) {
	unsigned long y = v[0], z = v[1], sum = 0, i;         /* set up */
	unsigned long delta = 0x9e3779b9;                 /* a key schedule constant */
	unsigned long a = k[0], b = k[1], c = k[2], d = k[3];   /* cache key */
	for (i = 0; i < 32; i++) {                        /* basic cycle start */
		sum += delta;
		y += ((z << 4) + a) ^ (z + sum) ^ ((z >> 5) + b);
		z += ((y << 4) + c) ^ (y + sum) ^ ((y >> 5) + d);/* end cycle */
	}
	v[0] = y;
	v[1] = z;
}
extern void decrypt(unsigned long *v, unsigned long *k) {
	unsigned long y = v[0], z = v[1], sum = 0xC6EF3720, i; /* set up */
	unsigned long delta = 0x9e3779b9;                  /* a key schedule constant */
	unsigned long a = k[0], b = k[1], c = k[2], d = k[3];    /* cache key */
	for (i = 0; i<32; i++) {                            /* basic cycle start */
		z -= ((y << 4) + c) ^ (y + sum) ^ ((y >> 5) + d);
		y -= ((z << 4) + a) ^ (z + sum) ^ ((z >> 5) + b);
		sum -= delta;                                /* end cycle */
	}
	v[0] = y;
	v[1] = z;
}