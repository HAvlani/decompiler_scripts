typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char input_swap;

int print_float()
{
    BOT tmp_67;  // tmp #67
    unsigned long v0;  // [bp-0x80]
    unsigned long v1;  // [bp-0x40]
    unsigned long v10;  // rdi
    unsigned long long v11;  // r9
    unsigned long long v12;  // r10
    unsigned long long v13;  // r14
    struct_0 *v14;  // fs
    unsigned long long v4;  // rax
    char v5;  // ah
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbp
    unsigned long v9;  // rsi

    if (v10 > v9)
    {
        v8 = 0;
        v7 = v11 * (v10 - 1);
        v0 = v10 - v9;
        v13 = v12;
        while (true)
        {
            if (input_swap == 0)
            {
            }
            else
            {
                v4 = v13;
                v5 = *(v6 + v8 * 4 + 2);
                tmp_67 = ax<2>;
                v13 = ((long long)(((int)tmp_67) | ((int)(((long long)*(v6 + v8 * 4 + 1)) * 0x10000)) | ((int)(((long long)*(v6 + v8 * 4)) * 0x1000000))));
            }
            ftoastr();
            v8 += 1;
            xprintf();
            v7 -= v11;
            if (v0 == v8)
            {
                break;
            }
        }
        return v1 ^ *(v14 + 0x28);
    }
    return v1 ^ *(v14 + 0x28);
}
