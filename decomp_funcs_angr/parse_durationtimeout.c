typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_4070f4;

int parse_duration()
{
    unsigned long v0;  // [bp-0x30]
    char v1[2];  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    struct_1 *|unsigned long long v4;  // rax
    unsigned long long v6;  // r12
    unsigned long long v7;  // cc_dep1
    struct_0 *v8;  // fs

    v4 = xstrtod();
    if (((long long)v4) == 0)
    {
        v4 = __errno_location();
        if (v4->field_0 != 34)
        {
            v6 = (long long)quote();
            error(0x0, 0x0, dcgettext(0x0, &g_4070f4, 0x5));
            usage(); /* do not return */
        }
    }
    if (v4->field_0 == 34 || ((long long)v4) != 0)
    {
        if ((((char)((long long)(BinaryOp CmpF))) & 1) == 0)
        {
            v4 = ((long long)v1[0]);
            if (!(((long long)v1[0]) != 0))
            {
                return v2 ^ *(v8 + 0x28);
            }
            else if (v1[1] == 0)
            {
                v7 = ((long long)v4);
                if (!(v4 != 104))
                {
                    return v2 ^ *(v8 + 0x28);
                }
                else if (((char)(v7 <= 104)))
                {
                    if (v4 == 100)
                    {
                        return v2 ^ *(v8 + 0x28);
                    }
                    v6 = (long long)quote();
                    error(0x0, 0x0, dcgettext(0x0, &g_4070f4, 0x5));
                    usage(); /* do not return */
                }
                else
                {
                    if (!(v4 != 109))
                    {
                        return v2 ^ *(v8 + 0x28);
                    }
                    else if (v4 == 115)
                    {
                        return v2 ^ *(v8 + 0x28);
                    }
                    else
                    {
                        v6 = (long long)quote();
                        error(0x0, 0x0, dcgettext(0x0, &g_4070f4, 0x5));
                        usage(); /* do not return */
                    }
                }
            }
            else
            {
                v6 = (long long)quote();
                error(0x0, 0x0, dcgettext(0x0, &g_4070f4, 0x5));
                usage(); /* do not return */
            }
        }
        v6 = (long long)quote();
        error(0x0, 0x0, dcgettext(0x0, &g_4070f4, 0x5));
        usage(); /* do not return */
    }
}
