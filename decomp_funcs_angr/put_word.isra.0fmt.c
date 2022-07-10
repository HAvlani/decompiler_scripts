typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 out_column;
extern unsigned long long stdout[7];

int put_word.isra.0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v10;  // rbp
    struct_0 *|unsigned long long v11;  // rsi
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r12
    struct_0 *v14;  // r12
    unsigned long v15;  // r12
    unsigned long v2;  // [bp-0x8]
    unsigned long long v4;  // rax
    char *|unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    v6 = ((long long)v11->field_0);
    if (v11->field_0 != 0)
    {
        v5 = ((long long)(((int)v11->field_0) - 1));
        v2 = v15;
        v14 = v11;
        v1 = &stack_base+0;
        v10 = v12 + v5 + 1;
        v0 = v7;
        v9 = v12;
        do
        {
            v9 += 1;
            v11 = ((long long)*(v9 + 1));
            v5 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v5) = v11;
            }
            else
            {
                __overflow();
            }
        }
        while (v9 != v10);
        v4 = ((long long)v14->field_0);
        v8 = v0;
        out_column = out_column + v14->field_0;
        v13 = v2;
        return v4;
    }
    out_column = out_column + ((int)v11->field_0);
    return v6;
}
