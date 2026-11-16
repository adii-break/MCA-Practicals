#include <reg51.h>
#define SegOne 0x08
#define SegTwo 0x04

void delay(unsigned int count)
{
    unsigned int i, j;
    for (i = 0; i < count; i++)
    {
        for (j = 0; j < 15; j++)
        {
        }
    }
}
void main()
{
    char segment[] = {
        0xc0, 0xa4, 0xb0, 0x99, 0x92,
        0x82, 0xf8, 0x80, 0x90
    };
    int cnt, num, Q, i;
    while (1)
    {
        for (cnt = 0x00; cnt < 10; cnt++)
        {
            for (i = 0; i < 10; i++)
            {
                num = cnt;
                Q = num % 10;
                P2 = SegOne;
                P1 = segment[Q];
                delay(100);
                Q = num / 10;
                P2 = SegTwo;
                P1 = segment[Q];
                delay(100);
            }
        }
    }
}
