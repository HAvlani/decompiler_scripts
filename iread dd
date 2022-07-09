typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_40f160;
extern unsigned int g_40f1a0;
extern char g_414389;
extern unsigned long long prev_nread.7485;
extern struct_0 status_level;
extern char warn_partial_read;

int iread()
{
    struct_0 *v1;  // rax
    unsigned long long v2;  // rax
    unsigned long|unsigned int v3;  // rdx
    unsigned long v4;  // rbx
    void *v5;  // rsi
    unsigned int v6;  // edi
    unsigned long long v7;  // r12

    v4 = v3;
    while (true)
    {
        process_signals();
        v7 = read(v6, v5, v4);
        if (v7 == 18446744069414584319)
        {
            v1 = __errno_location();
            v3 = ((int)v1->field_0);
            if (v1->field_0 == 22)
            {
                if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    break;
                }
                if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))))
                {
                    if (prev_nread.7485 >= v4)
                    {
                        break;
                    }
                    if (prev_nread.7485 >= v4)
                    {
                        prev_nread.7485 = v7;
                        v2 = v7;
                        return v2;
                    }
                    if (((long long)(g_414389 & 64)) == 0)
                    {
                        break;
                    }
                    if (((long long)(g_414389 & 64)) == 0)
                    {
                        prev_nread.7485 = v7;
                        v2 = v7;
                        return v2;
                    }
                    else
                    {
                        v1->field_0 = 0;
                        v7 = 0;
                        prev_nread.7485 = v7;
                        v2 = v7;
                        return v2;
                    }
                }
                prev_nread.7485 = v7;
                v2 = v7;
                return v2;
            }
        }
        else if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v3 = ((long long)*(__errno_location()));
        }
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) && v7 != 18446744069414584319 || v7 != 18446744069414584319 && v3 != 4 || v1->field_0 != 22 && v3 != 4)
        {
            if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                break;
            }
            if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                prev_nread.7485 = v7;
                v2 = v7;
                return v2;
            }
            if (v4 > v7)
            {
                process_signals();
            }
            else if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                prev_nread.7485 = v7;
                v2 = v7;
                return v2;
            }
            if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>))) || v4 > v7)
            {
                if (warn_partial_read == 0)
                {
                    break;
                }
                if (warn_partial_read == 0)
                {
                    prev_nread.7485 = v7;
                    v2 = v7;
                    return v2;
                }
                else
                {
                    if (prev_nread.7485 >= v4)
                    {
                        break;
                    }
                    if (prev_nread.7485 >= v4)
                    {
                        prev_nread.7485 = v7;
                        v2 = v7;
                        return v2;
                    }
                    else
                    {
                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                        {
                            break;
                        }
                        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=0x414158<64>, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                        {
                            prev_nread.7485 = v7;
                            v2 = v7;
                            return v2;
                        }
                        else if (status_level == 1)
                        {
                            warn_partial_read = 0;
                            prev_nread.7485 = v7;
                            v2 = v7;
                            return v2;
                        }
                        else
                        {
                            dcngettext(0x0, &g_40f1a0, &g_40f160, ((int)prev_nread.7485), 0x5);
                            nl_error();
                            warn_partial_read = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    prev_nread.7485 = v7;
    v2 = v7;
    return v2;
}
