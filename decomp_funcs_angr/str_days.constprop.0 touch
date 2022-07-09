typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[204];
    char field_e0;
} struct_0;

int str_days.constprop.0()
{
    unsigned long long v1;  // rax
    unsigned long long v3;  // rax
    char * v4;  // rsi
    struct_0 *v5;  // rdi

    if (v5->field_e0 != 0)
    {
        v3 = v5->field_8 + 1;
        if (v5->field_8 + 1 <= 13)
        {
            v1 = snprintf(v4, 0x64, "%s", ((int)(v3 * 11 + "last")));
            if (!(v5->field_10 <= 6))
            {
                return v4;
            }
            else if (v1 > 99)
            {
                return v4;
            }
            else
            {
                __snprintf_chk();
                return v4;
            }
        }
        __snprintf_chk();
        if (v5->field_10 > 6)
        {
            return v4;
        }
        else
        {
            __snprintf_chk();
            return v4;
        }
    }
    *(v4) = 0;
    if (v5->field_10 > 6)
    {
        return v4;
    }
    else
    {
        __snprintf_chk();
        return v4;
    }
}
