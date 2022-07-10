typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern struct_0 conversions_mask;
extern unsigned int g_40e194;
extern unsigned int g_40e1ac;

int synchronize_output()
{
    BOT tmp_26;  // tmp #26
    BOT tmp_40;  // tmp #40
    BOT tmp_25;  // tmp #25
    BOT tmp_28;  // tmp #28
    unsigned long long|unsigned int v1;  // rax
    unsigned long long v3;  // rax
    char v5;  // ah
    struct_0 *|unsigned long long v6;  // rbx
    unsigned long long v7;  // r12
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13

    v6 = ((long long)conversions_mask);
    v1 = ((long long)conversions_mask);
    v5 = ((char)(conversions_mask >> 8)) & 63;
    tmp_26 = rax<8>;
    tmp_40 = ((int)tmp_26);
    tmp_25 = tmp_40;
    conversions_mask = tmp_25;
    tmp_28 = v6;
    if (((long long)(tmp_28 & 64)) != 0)
    {
        while (true)
        {
            process_signals();
            v1 = fdatasync(0x1);
            if (((int)v1) < 0)
            {
                v1 = ((long long)*(__errno_location()));
            }
            else
            {
                v1 = ((int)*(__errno_location()));
            }
            v9 = (long long)quotearg_style();
            dcgettext(0x0, &g_40e194, 0x5);
            v7 = 1;
            nl_error();
            break;
        }
        if (((int)v1) >= 0)
        {
            v7 = ((long long)(conversions_mask & 0x8000));
        }
        else if (((int)v1) < 0 && ((int)v1) != 4 || !(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))) && ((int)v1) >= 0)
        {
            v7 = 0;
        }
    }
    if (((long long)(tmp_28 & 64)) == 0 || ((int)(conversions_mask & 0x8000)) != 0)
    {
        v7 = ((long long)(conversions_mask & 0x8000));
    }
    if (((int)(conversions_mask & 0x8000)) != 0)
    {
        v7 = 0;
        while (true)
        {
            process_signals();
            v1 = fsync(0x1);
            if (((int)v1) < 0)
            {
                v6 = __errno_location();
                v8 = (long long)quotearg_style();
                dcgettext(0x0, &g_40e1ac, 0x5);
                v7 = 1;
                nl_error();
                v3 = v7;
                return v3;
            }
            else if (((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v3 = v7;
                return v3;
            }
            else
            {
                v6 = __errno_location();
                v8 = (long long)quotearg_style();
                dcgettext(0x0, &g_40e1ac, 0x5);
                v7 = 1;
                nl_error();
            }
        }
        v3 = v7;
        return v3;
    }
    if (((long long)(tmp_28 & 64)) == 0 && ((int)(conversions_mask & 0x8000)) == 0)
    {
        v3 = v7;
        return v3;
    }
}
