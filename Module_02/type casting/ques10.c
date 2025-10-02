#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main() {
    float a;
    int b;
    uint64_t c;
    double num;
    unsigned int b1, b2, b3, b4; 
    double d_val;  


    scanf("%f", &a);
    scanf("%d", &b);
    scanf("%llx", &c);

    memcpy(&num, &c, sizeof(num));
    
    
    scanf("%x %x %x %x", &b1, &b2, &b3, &b4); 
    unsigned char bytes[4] = { b1, b2, b3, b4 };
    uint32_t int_from_bytes;
    memcpy(&int_from_bytes, bytes, sizeof(int_from_bytes));

    scanf("%lf", &d_val);
    uint64_t double_bits;
    memcpy(&double_bits, &d_val, sizeof(double_bits));



    printf("Original Float: %f\n", a);
    int s = (int)a;
    printf("Float to Int (Truncation): %d\n\n", s);

    printf("Original Int: %d\n", b);
    printf("Int to Float (Precision Check): %.6f\n\n", (float)b);

    printf("Raw 64-bit Integer: 0x%016llX\n", (unsigned long long)c);
    printf("Interpreted as Double: %.6f\n\n", num);
    
    printf("Byte Sequence: %02X %02X %02X %02X\n", b1, b2, b3, b4);
    printf("Interpreted as Integer: %u\n\n", int_from_bytes);

    printf("Original Double: %f\n", d_val);
    printf("Hexadecimal Representation: 0x%016llX\n", (unsigned long long)double_bits);
    

return 0;
}