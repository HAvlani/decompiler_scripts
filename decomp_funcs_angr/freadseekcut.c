typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int freadseek()
{
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x1040]
    char v1;  // [bp-0x1038]
    unsigned long v2;  // [bp-0x1028]
    unsigned long|unsigned long long v4;  // rax
    unsigned long|unsigned long long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rsi
    unsigned int v8;  // edi
    struct_0 *v9;  // r12

    v2 = v2;
    v4 = 0;
    if (v7 != 0)
    {
        v9 = v8;
        v6 = v7;
        v5 = (long long)freadahead();
        if (v5 != 0)
        {
            while (true)
            {
                v4 = freadptr();
                if (v4 != 0)
                {
                    v4 = v0;
                    if (v0 != 0)
                    {
                        tmp_13 = !(rax<8> <= v6);
                        v4 = (!(rax<8> <= v6)? v6 : rax<8>);
                        v9->field_8 = v9->field_8 + (tmp_13? v6 : v0);
                        v6 -= (tmp_13? v6 : v0);
                        if (v6 != (tmp_13? v6 : v0))
                        {
                            v5 -= v4;
                            v4 = 0;
                            return v4;
                        }
                    }
                }
                if (v4 == 0 || v0 == 0 || v6 != (tmp_13? v6 : v0) && v5 != v4)
                {
                    v4 = fgetc(v8);
                    if (v4 != -1)
                    {
                        v6 -= 1;
                        if (v6 != 1)
                        {
                            v5 = rbx<8> - 1;
                            v4 = 0;
                            return v4;
                        }
                        v4 = ((long long)(0 - ((int)(ferror(((int)v8)) != 0))));
                        return v4;
                    }
                }
            }
        }
        v8 = (int)fileno(v8);
        if (v8 >= 0)
        {
            v4 = lseek();
            if (!(((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
            {
                v4 = rpl_fseeko();
                return v4;
            }
        }
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || v8 < 0)
        {
            while (true)
            {
                v5 = (rbp<8> <= 0x1000? rbp<8> : 0x1000);
                v4 = __fread_chk(((int)&v1), 0x1000, 0x1, ((int)(rbp<8> <= 0x1000? rbp<8> : 0x1000)), ((int)v8));
                if (v5 <= v4)
                {
                    v6 = rbp<8> - v5;
                    v4 = 0;
                    break;
                    return v4;
                }
                v4 = ((long long)(0 - ((int)(ferror(((int)v8)) != 0))));
                break;
            }
            return v4;
        }
    }
    return v4;
}
