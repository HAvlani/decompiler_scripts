typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int g_40d047;

int start_lines()
{
    unsigned long|unsigned int v0;  // [bp-0x2050]
    unsigned long v1;  // [bp-0x2030]
    unsigned long|unsigned long long v10;  // rdi
    struct_1 *|unsigned long long v11;  // r13
    unsigned long v2;  // [bp-0x1030]
    unsigned long long v4;  // rax
    unsigned long long v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbp

    v2 = v2;
    v1 = v1;
    v0 = v10;
    v4 = 0;
    if (v7 != 0)
    {
        v8 = v7;
        v11 = v6;
        while (true)
        {
            v4 = safe_read();
            if (v4 == 0)
            {
                v4 = -1;
                return v4;
            }
            else if (v4 != 18446744069414584319)
            {
                v11->field_0 = v11->field_0 + v4;
                v9 = &stack_base-8264 + v4;
                while (true)
                {
                    v4 = memchr();
                    v10 = v4 + 1;
                    v8 -= 1;
                    v4 = 0;
                    if (v9 > v10)
                    {
                        return v4;
                        v9 -= v10;
                        if (v9 != v10)
                        {
                            return v4;
                            v0 = 0;
                            xwrite_stdout.part.0();
                            v4 = ((long long)v0);
                            return v4;
                        }
                    }
                }
            }
            else
            {
                v11 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_40d047, 0x5));
                v4 = 1;
                return v4;
            }
        }
    }
    return v4;
}
