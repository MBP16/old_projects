#include <stdio.h>

typedef enum __syllable 
{
	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} syllable;

void Sound(syllable sy);

int main(void)
{
	syllable tone;
	
	for(tone=Do; tone<=Ti; tone+=1)
		Sound(tone);

	return 0;
}

void Sound(syllable sy)
{
	switch(sy)
	{
	case Do:
		puts("���� �Ͼ� ������ ��"); return;
	case Re:
		puts("���� �ձ� ���ڵ� ��"); return;
	case Mi:
		puts("�̴� �Ķ� �̳��� �ۢ�"); return;
	case Fa:
		puts("�Ĵ� ���� �Ķ��� �ܢ�"); return;
	case So:
		puts("���� ���� �ֹ�� �ۢܢ�"); return;
	case La:
		puts("��� �������~ �ܢۢڢ�"); return;
	case Ti:
		puts("�ô� ���� �ó��� �ۢڢۢ�"); return;
	}
	puts("�� �Բ� �θ���~ �������� �ֶ�õ� �� ��~ §~");
}