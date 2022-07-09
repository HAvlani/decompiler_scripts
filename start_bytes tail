typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_40d047;

int start_bytes()
{
    unsigned long v0;  // [bp-0x2028]
    unsigned long v1;  // [bp-0x1028]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rcx
    unsigned long long v6;  // rdx
    struct_1 *v7;  // rbx
    unsigned long long v8;  // r13
    unsigned long long v9;  // r14

    v1 = v1;
    v0 = v0;
    if (v6 != 0)
    {
        v9 = v6;
        v7 = v5;
        while (true)
        {
            v4 = safe_read();
            if (v4 == 0)
            {
                v3 = -1;
                return v3;
            }
            else if (v4 != 18446744069414584319)
            {
                v7->field_0 = v7->field_0 + v4;
                if (v4 <= v9)
                {
                    v9 -= v4;
                    v3 = 0;
                    return v3;
                }
                v4 -= v9;
                if (v4 != v9)
                {
                    v3 = 0;
                    return v3;
                    xwrite_stdout.part.0();
                    v3 = 0;
                    break;
                }
            }
            else
            {
                v8 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40d047, 0x5));
                v3 = 1;
                return v3;
            }
        }
        return v3;
    }
    v3 = 0;
    return v3;
}
