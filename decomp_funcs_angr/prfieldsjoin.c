typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

extern char autoformat;
extern unsigned long long stdout[7];
extern struct_1 tab;

int prfields()
{
    unsigned long long v0;  // [bp-0x48]
    struct_0 *v10;  // rdi
    unsigned long v11;  // r13
    unsigned long long v3;  // rax
    char *v4;  // rax
    char *v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long v9;  // rsi

    v0 = v6;
    if (autoformat == 0)
    {
        v0 = v10->field_18;
    }
    v3 = v0;
    v11 = (v0 <= v9? v3 : *(&stack_base-64));
    v7 = 0;
    if ((v0 <= v9? v3 : *(&stack_base-64)) != 0)
    {
        while (true)
        {
            v4 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v4) = ((char)(tab < 0? 32 : tab));
            }
            else
            {
                __overflow();
            }
            v7 += 1;
            v3 = prfield.isra.0();
            if (v7 == v11)
            {
                break;
            }
        }
    }
    v8 = v9 + 1;
    if (v0 > v9 + 1)
    {
        while (true)
        {
            v5 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v5) = ((char)(tab < 0? 32 : tab));
            }
            else
            {
                __overflow();
            }
            v8 += 1;
            v3 = prfield.isra.0();
            if (v0 == v8)
            {
                break;
            }
        }
        return v3;
    }
    return v3;
}
