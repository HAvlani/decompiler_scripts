extern unsigned int g_409004;

int make_printable_str()
{
    unsigned long v0;  // [bp-0x60]
    char|unsigned long v1;  // [bp-0x58]
    char * v10;  // r15
    unsigned long long v11;  // cc_dep1
    unsigned long v2;  // [bp-0x50]
    char v3;  // [bp-0x45]
    char v4;  // [bp-0x44]
    unsigned long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long v8;  // r8
    unsigned long|unsigned long long v9;  // r10

    v10 = v7;
    v0 = (long long)xnmalloc();
    if (v6 != 0)
    {
        while (true)
        {
            v8 = ((long long)*(v10));
            if (((char)(((long long)*(v10)) <= 13)) && !(((char)(((long long)v1) <= 6))))
            {
                switch (((long long)(((int)v1) - 8)))
                {
                case 0:
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                }
            }
            if (((char)(((long long)v1) <= 6)) && ((char)(((long long)*(v10)) <= 13)) || !(((char)(((long long)*(v10)) <= 13))) && v1 != 92)
            {
                v2 = stpcpy(reg_96<4>);
                v1 = v8;
                v11 = ((long long)(*(*(__ctype_b_loc()) + ((long long)v1) * 2 + 1) & 64));
                if (((char)v11) != 0)
                {
                    v3 = v1;
                    v4 = 0;
                }
                else
                {
                    v2 = v2;
                    v1 = &stack_base-69;
                    __sprintf_chk(((int)&stack_base-69), 0x1, 0x5, &g_409004, v8);
                    v9 = v2;
                }
            }
            v10 += 1;
            v9 = stpcpy(reg_96<4>);
            if (v6 + v7 == v10)
            {
                break;
            }
        }
        return v0;
    }
    return v0;
}
