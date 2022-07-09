typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_40e380;

int getoptarg()
{
    BOT tmp_36;  // tmp #36
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    char *v10;  // r13
    struct_1 *v11;  // fs
    unsigned long long v3;  // rax
    struct_0 *v5;  // rcx
    char *v6;  // rdx
    unsigned long long v7;  // rbp
    unsigned long v8;  // rsi
    char v9[2];  // rdi

    tmp_36 = ((long long)v9[0]);
    v3 = tmp_36;
    if (((int)tmp_36) - 48 > 9)
    {
        *(v6) = ((char)tmp_36);
        v3 = ((long long)v9[1]);
    }
    if (((long long)v3) == 0)
    {
        return v1 ^ *(v11 + 0x28);
    }
    v3 = xstrtol();
    if (v3 == 0)
    {
        if (v0 - 1 <= 2147483646)
        {
            v5->field_0 = ((int)v0);
            return v1 ^ *(v11 + 0x28);
        }
    }
    if (v3 != 0 || v0 - 1 > 2147483646)
    {
        v7 = (long long)quote();
        v10 = dcgettext(0x0, &g_40e380, 0x5);
        if (v0 <= 2147483647)
        {
            v8 = ((long long)*(__errno_location()));
            error(0x0, v8, v10);
            usage(); /* do not return */
        }
        else
        {
            error(0x0, v8, v10);
            usage(); /* do not return */
        }
    }
}
