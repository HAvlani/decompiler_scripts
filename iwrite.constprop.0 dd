typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern struct_1 conversions_mask;
extern char final_op_was_seek;
extern unsigned int g_40f1e0;
extern char g_414385;
extern char o_nocache;
extern char o_nocache_eof;
extern struct_0 output_blocksize;
extern struct_1 status_level;

int iwrite.constprop.0()
{
    struct_1 *|unsigned long long v1;  // rax
    unsigned long v10;  // rbx
    unsigned long|char * v11;  // rsi
    void *v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rdx

    v10 = v11;
    if (((long long)(g_414385 & 64)) != 0)
    {
        if (output_blocksize > v11)
        {
            rpl_fcntl();
            if (rpl_fcntl() != 0)
            {
                if (status_level != 1)
                {
                    v15 = (long long)quotearg_n_style_colon();
                    v14 = dcgettext(0x0, &g_40f1e0, 0x5);
                    __errno_location();
                    nl_error();
                }
            }
            o_nocache_eof = 1;
            invalidate_cache();
            conversions_mask = conversions_mask | 0x8000;
        }
    }
    v13 = 0;
    if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v8 = v13;
        return v8;
    }
    while (true)
    {
        process_signals();
        final_op_was_seek = 0;
        if ((((int)conversions_mask) & 0x10000) != 0)
        {
            v9 = v10;
            v11 = v12;
            while (true)
            {
                v11 += 1;
                v9 -= 1;
                if (v9 != 1)
                {
                    v2 = memcmp(v12, v11, v9);
                }
                v2 = lseek(0x1, ((int)v9), 0x1);
                if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
                {
                    conversions_mask = conversions_mask & -65537;
                    break;
                }
                else
                {
                    final_op_was_seek = 1;
                    v1 = v9;
                    break;
                }
            }
            if (True)
            {
                v1 = write(0x1, v12 + v13, v9 - v13);
            }
            else if (*(v11) == 0 && !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))) && (v9 == 1 || v2 == 0) && (v9 == 1 || ((long long)(v9 & 15)) == 0))
            {
                v13 += rax<8>;
            }
        }
        if ((((int)conversions_mask) & 0x10000) == 0 || !(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
        {
            v1 = write(0x1, v12 + v13, v9 - v13);
        }
        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && (((int)conversions_mask) & 0x10000) == 0)
        {
            v1 = __errno_location();
        }
        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) || (((int)conversions_mask) & 0x10000) != 0)
        {
            v13 += rax<8>;
        }
        if (False)
        {
            *(__errno_location() + None) = 28;
        }
        if (o_nocache == 0)
        {
            v8 = v13;
            return v8;
        }
        else if (v13 == 0)
        {
            v8 = v13;
            return v8;
        }
        else
        {
            invalidate_cache();
            v3 = v13;
            return v3;
        }
    }
}
