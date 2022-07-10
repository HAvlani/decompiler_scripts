typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char input_swap;

int print_long()
{
    BOT tmp_16;  // tmp #16
    char v0;  // [bp-0x48]
    char v1;  // [bp-0x47]
    unsigned long long v10;  // r9
    unsigned long long v11;  // r14
    unsigned long long v12;  // r15
    struct_0 *v13;  // fs
    unsigned long v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long|char * v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long v8;  // rsi
    unsigned long v9;  // rdi

    if (v9 > v8)
    {
        v7 = v6;
        v11 = v9;
        v12 = v10 * (v9 - 1);
        while (true)
        {
            v11 -= 1;
            if (input_swap == 0)
            {
            }
            else
            {
                v6 = v7 + 7;
                v4 = &v0;
                do
                {
                    v5 = ((long long)*(v6));
                    v4 = &v1;
                    v6 -= 1;
                    tmp_16 = v5;
                    v0 = tmp_16;
                }
                while (&stack_base-64 != v4);
            }
            v7 += 8;
            xprintf();
            v12 -= v10;
            if (v11 == v8)
            {
                break;
            }
        }
        return v2 ^ *(v13 + 0x28);
    }
    return v2 ^ *(v13 + 0x28);
}
