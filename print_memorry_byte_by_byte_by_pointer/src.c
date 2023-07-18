#include <stdio.h>
#include <string.h>
// #pragma pack(1)
struct SDataSet
{
    unsigned char data1;
    unsigned int data2;
    unsigned char data3;
    unsigned short data4;
};
struct SDataSet data;
void print_memory_range(char *base, int size) // char to take 1 byte in one iteration
{
    for (int i = 0; i < size; i++)
    {
        printf("%p\t %x \n", base, (unsigned char)*base);
        base++;
    }
}
int main()
{
    data.data1 = 0x11;
    data.data2 = 0xFFFFEEEE;
    data.data3 = 0x22;
    data.data4 = 0xABCD;
    print_memory_range(&data, sizeof(data));
}
