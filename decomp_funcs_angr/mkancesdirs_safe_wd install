typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_4180be;

int mkancesdirs_safe_wd()
{
    unsigned int v0;  // [bp-0x38]
    unsigned long long v10;  // r12
    unsigned long long v12;  // r13
    unsigned int v13;  // r14d
    unsigned long long v2;  // rax
    char v6;  // cl
    struct_0 *v7;  // rbx
    char *v8;  // rsi
    char *v9;  // rdi

    if (((long long)v6) == 0)
    {
        if (*(v9) == 47)
        {
            if (*(v8) == 47)
            {
                v0 = 0;
                savewd_finish();
                if (mkancesdirs() != 18446744069414584319)
                {
                    v2 = 1;
                    return v2;
                }
                v12 = (long long)quotearg_style();
                error(0x0, *(__errno_location()), dcgettext(0x0, &g_4180be, 0x5));
                v2 = 0;
                return v2;
            }
        }
    }
    if (*(v9) != 47 || ((long long)v6) != 0 || *(v8) != 47)
    {
        v0 = 0;
        v7 = __errno_location();
        if ((long long)mkancesdirs() == 18446744069414584319)
        {
            v10 = (long long)quotearg_style();
            error(0x0, v7->field_0, dcgettext(0x0, &g_4180be, 0x5));
            savewd_restore();
            savewd_finish();
            v2 = 0;
            return v2;
        }
        v13 = ((int)v7->field_0);
        v10 = (long long)savewd_restore();
        savewd_finish();
        if (((int)v10) > 0)
        {
            v2 = 0;
            return v2;
        }
        else if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, r12<8>, 0x0<64>, cc_ndep<8>)))
        {
            v2 = 1;
            return v2;
        }
        else
        {
            v10 = (long long)quotearg_style();
            error(0x0, v13, dcgettext(0x0, &g_4180be, 0x5));
            v2 = 0;
            return v2;
        }
    }
}
