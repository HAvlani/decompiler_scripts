typedef struct struct_0 {
    char padding_0[208];
    unsigned long long field_d0;
} struct_0;

int debug_strfdatetime.constprop.0()
{
    unsigned long long v1;  // rax
    unsigned long v3;  // rdx
    unsigned int v4;  // ebx
    struct_0 *v5;  // rsi

    v1 = nstrftime();
    if (v5 != 0)
    {
        v4 = v1;
        if (!(v1 <= 99))
        {
            return v3;
        }
        else if (v5->field_d0 == 0)
        {
            return v3;
        }
        else
        {
            time_zone_str();
            __snprintf_chk();
            return v3;
        }
    }
    return v3;
}
