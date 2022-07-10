typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int delseq.isra.0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v4;  // rbx
    unsigned long v5;  // rbx
    struct struct_0 **v6;  // rsi
    struct_0 *v7;  // rdi
    unsigned long v8;  // r12

    v1 = v8;
    v0 = v5;
    v4 = 0;
    if (v7->field_0 != 0)
    {
        while (true)
        {
            if (*(v6[0] + (v4 << 3)) != 0)
            {
                freeline.part.0();
            }
            rpl_free();
            v4 += 1;
            if (v4 >= v7->field_0)
            {
                break;
            }
        }
    }
}
