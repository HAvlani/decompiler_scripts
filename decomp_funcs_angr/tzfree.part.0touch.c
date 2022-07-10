typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int tzfree.part.0()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    struct_0 * v5;  // rbx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rdi

    if (v7 != 0)
    {
        v0 = v6;
        v5 = v7;
        while (true)
        {
            v5 = v5->field_0;
            if (v5 == 0)
            {
                break;
            }
        }
        v4 = v0;
        return rpl_free();
    }
    return v3;
}
