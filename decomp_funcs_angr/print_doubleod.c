typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char input_swap;

int print_double()
{
    BOT tmp_16;  // tmp #16
    char v0;  // [bp-0x70]
    char v1;  // [bp-0x6f]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r9
    unsigned long long v12;  // r13
    unsigned long long v13;  // r15
    struct_0 *v14;  // fs
    unsigned long v2;  // [bp-0x40]
    unsigned long long v4;  // rax
    unsigned long long v6;  // rcx
    char *|unsigned long long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long v9;  // rsi

    if (v10 > v9)
    {
        v13 = v7;
        v8 = v11 * (v10 - 1);
        v12 = v10;
        while (true)
        {
            v12 -= 1;
            if (input_swap == 0)
            {
            }
            else
            {
                v7 = v13 + 7;
                v4 = &v0;
                do
                {
                    v6 = ((long long)*(v7));
                    v4 = &v1;
                    v7 -= 1;
                    tmp_16 = v6;
                    v0 = tmp_16;
                }
                while (&stack_base-104 != v4);
            }
            dtoastr();
            v13 += 8;
            xprintf();
            v8 -= v11;
            if (v12 == v9)
            {
                break;
            }
        }
        return v2 ^ *(v14 + 0x28);
    }
    return v2 ^ *(v14 + 0x28);
}
