typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 c_locale_cache;
extern unsigned int g_40f30b;

int c_strtod()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rsi
    unsigned long v3;  // rdi

    v1 = c_locale_cache;
    if (c_locale_cache == 0)
    {
        v1 = newlocale(0x1fbf, &g_40f30b, 0x0);
        c_locale_cache = v1;
    }
    if (v2 != 0)
    {
        v2->field_0 = v3;
        return v1;
    }
    else
    {
        return v1;
    }
}
