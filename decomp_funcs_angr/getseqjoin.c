typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int getseq()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long v3;  // rcx
    struct_0 * v4;  // rdx
    unsigned long long v5[3];  // rbx
    unsigned long long v6[3];  // rsi
    unsigned long long v7;  // rdi
    unsigned long v8;  // rdi

    v5 = v6;
    if (v6[0] == v6[1])
    {
        v5[2] = v8;
        v8 = (long long)x2nrealloc();
        if (v3 < v5[1])
        {
            v4 = v7 + v6[0] * 8;
            v1 = v7 + v6[1] * 8;
            do
            {
                v4->field_0 = 0;
                v4 += 8;
            }
            while (v4 != v1);
        }
    }
    v2 = get_line();
    if (((long long)v2) != 0)
    {
        v5[0] = v5[0] + 1;
        return v2;
    }
    return v2;
}
