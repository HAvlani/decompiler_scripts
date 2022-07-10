typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int current_col;
extern unsigned int g_40d658;

int display_window_size()
{
    char v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    struct_1 *v5;  // rbp
    char v6;  // dil
    unsigned long long v7;  // r12
    struct_0 *v8;  // fs

    if (ioctl(0x0, 0x5413, ((int)&v0)) != 0)
    {
        v5 = __errno_location();
        if (v5->field_0 == 22)
        {
            if (((long long)v6) != 0)
            {
                return v1 ^ *(v8 + 0x28);
            }
            v7 = (long long)quotearg_n_style_colon();
            error(0x1, 0x0, dcgettext(0x0, &g_40d658, 0x5));
        }
        else
        {
            quotearg_n_style_colon();
            error(0x1, v5->field_0, "%s");
        }
    }
    else if (((long long)v6) != 0)
    {
        wrapf();
        return v1 ^ *(v8 + 0x28);
    }
    else
    {
        wrapf();
        current_col = 0;
        return v1 ^ *(v8 + 0x28);
    }
}
