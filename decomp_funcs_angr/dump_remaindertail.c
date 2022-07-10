typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern char first_file.7768;
extern unsigned int g_40d047;
extern <missing-type> g_40ee01;

int dump_remainder()
{
    unsigned long v0;  // [bp-0x2058]
    unsigned long v1;  // [bp-0x2050]
    unsigned long v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // r12
    unsigned long long v14;  // r14
    unsigned long v2;  // [bp-0x2030]
    unsigned long v3;  // [bp-0x1030]
    unsigned long long v5;  // rax
    unsigned long long v7;  // rcx
    struct_0 *|unsigned long long v8;  // rbx
    unsigned long long v9;  // rbp

    v3 = v3;
    v2 = v2;
    v12 = 0;
    v1 = v10;
    v9 = v11;
    v8 = v7;
    v0 = v7;
    while (true)
    {
        v14 = (long long)safe_read();
        if (v14 == 18446744069414584319)
        {
            v8 = __errno_location();
            if (v8->field_0 == 11)
            {
                break;
            }
            else
            {
                v13 = (long long)quotearg_style();
                error(0x1, v8->field_0, dcgettext(0x0, &g_40d047, 0x5));
            }
        }
        else if (v14 != 0)
        {
            if (((long long)v9) != 0)
            {
                __printf_chk(0x1, "%s==> %s <==\n", ((int)(first_file.7768 != 0? &g_40ee01 : "\n")), ((int)v10));
                first_file.7768 = 0;
            }
            v12 += v14;
            xwrite_stdout.part.0();
            if (v0 != 18446744069414584319)
            {
                v8 -= v14;
                if (v8 == v14)
                {
                    v5 = v12;
                    return v5;
                }
                else if (v0 == 18446744069414584318)
                {
                    v5 = v12;
                    return v5;
                }
            }
            if (v0 == 18446744069414584319 || v8 != v14 && v0 != 18446744069414584318)
            {
                v9 = 0;
            }
        }
        else
        {
            v5 = v12;
            return v5;
        }
    }
    v5 = v12;
    return v5;
}
