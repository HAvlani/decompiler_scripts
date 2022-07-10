typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int set_window_size()
{
    unsigned short|char|unsigned long long v0;  // [bp-0x38]
    unsigned short v1;  // [bp-0x36]
    struct_0 *v10;  // r14
    struct_1 *v11;  // fs
    unsigned long v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    unsigned long v7;  // rsi
    unsigned long v8;  // rdi
    unsigned long long v9;  // r12

    v4 = ioctl(0x0, 0x5413, ((int)&v0));
    if (v4 != 0)
    {
        v10 = __errno_location();
        if (v10->field_0 == 22)
        {
            v0 = 0;
        }
        else
        {
            quotearg_n_style_colon();
            error(0x1, v10->field_0, "%s");
        }
    }
    if (v10->field_0 == 22 || v4 == 0)
    {
        if (((int)v8) >= 0)
        {
            v0 = ((short)v8);
        }
        if (((int)v7) >= 0)
        {
            v1 = ((short)v7);
        }
        if (ioctl(0x0, 0x5414, ((int)&v0)) == 0)
        {
            return v2 ^ *(v11 + 0x28);
        }
        v9 = (long long)quotearg_n_style_colon();
        error(0x1, *(__errno_location()), "%s");
    }
}
