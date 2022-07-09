extern unsigned int g_40e073;
extern unsigned int g_40e08a;
extern unsigned int g_40e370;
extern unsigned int progress_len;
extern struct_0 r_truncate;
extern struct_1 status_level;
extern unsigned long long stderr[7];
extern struct_0 w_partial;

int print_stats()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r12
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v14;  // r13
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned long long v6;  // rax
    unsigned long v7;  // rax
    char *v8;  // rax
    unsigned long long v9;  // rbx

    if (status_level != 1)
    {
        v4 = v13;
        v3 = v12;
        v2 = &stack_base+0;
        v1 = v10;
        if (progress_len > 0)
        {
            v8 = *(stderr + 40);
            if (*(stderr + 40) < *(stderr + 48))
            {
                *(stderr + 40) = *(stderr + 40) + 1;
                *(v8) = 10;
            }
            else
            {
                __overflow();
            }
            progress_len = 0;
        }
        dcgettext(0x0, &g_40e370, 0x5);
        v0 = w_partial;
        __fprintf_chk();
        v6 = v0;
        if (!(r_truncate == 0))
        {
            dcngettext(0x0, &g_40e08a, &g_40e073, ((int)r_truncate), 0x5);
            v6 = __fprintf_chk();
            if (status_level != 2)
            {
            }
            else
            {
                v9 = v1;
                v11 = v3;
                v14 = v4;
                return v6;
            }
        }
        else
        {
            v9 = v1;
            v11 = v3;
            v14 = v4;
            return v6;
        }
    }
    else
    {
        return v7;
    }
}
