typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int tzfree.part.0()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbx
    struct_0 * v6;  // rbx
    unsigned long v7;  // rdi

    if (v7 != 0)
    {
        v0 = v4;
        v6 = v7;
        while (true)
        {
            v6 = v6->field_0;
            if (v6 == 0)
            {
                break;
            }
        }
        v5 = v0;
        return rpl_free();
    }
    return v2;
}
