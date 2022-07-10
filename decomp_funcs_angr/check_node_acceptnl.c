int check_node_accept()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long v2;  // rax
    unsigned long v3;  // rax
    unsigned long v4;  // rcx
    unsigned long|unsigned int v5;  // rdx
    unsigned long v6;  // rbx
    unsigned long v7;  // rbx
    unsigned long v8;  // rbx
    unsigned long v9;  // rbx

    v4 = ((long long)*(*(v11 + 8) + v5));
    if (*(v10 + 8) != 5)
    {
        if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x5<64>, cc_ndep<8>)))
        {
            if (*(v10 + 8) != 1)
            {
                if (*(v10 + 8) != 3)
                {
                    return 0;
                }
                if (...)
                {
                    return v3;
                }
            }
            if (*(v10) != *(*(v11 + 8) + v5))
            {
                return 0;
            }
            if (*(v10 + 8) == 3)
            {
                v3 = ((long long)(((int)(*(*(v10) + (((long long)v4) >> 6) * 8) >> (v4 & 63))) & 1));
            }
        }
        else if (!(*(v10 + 8) == 7))
        {
            return 0;
        }
        else if (((char)*(*(v11 + 8) + v5)) < 0)
        {
            return 0;
        }
    }
    if (*(*(v11 + 8) + v5) != 10)
    {
        if (*(v10 + 8) == 7 || *(v10 + 8) == 5)
        {
            if (*(v10 + 8) == 5 || !(((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x5<64>, cc_ndep<8>))))
            {
                if (*(v10 + 8) == 5 || ((char)*(*(v11 + 8) + v5)) >= 0)
                {
                    if (((long long)*(*(v11 + 8) + v5)) == 0)
                    {
                        if (((long long)(*(*(v11 + 152) + 216) & 128)) != 0)
                        {
                            return 0;
                        }
                    }
                }
            }
        }
    }
    if (*(v10 + 8) == 7 || *(v10 + 8) == 5)
    {
        if (*(v10 + 8) == 5 || !(((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x5<64>, cc_ndep<8>))))
        {
            if (*(v10 + 8) == 5 || ((char)*(*(v11 + 8) + v5)) >= 0)
            {
                if (((long long)(*(*(v11 + 152) + 216) & 64)) == 0)
                {
                    return 0;
                }
            }
        }
    }
    if (...)
    {
        v0 = v7;
        v2 = 1;
        if ((((int)*(v10 + 8)) & 0x3ff00) != 0)
        {
            v5 = (long long)re_string_context_at();
            if (!(((long long)(((char)(((long long)*(v10 + 8)) >> 8)) & 4)) == 0))
            {
                v2 = 0;
                if (((long long)(v5 & 1)) == 0)
                {
                    v8 = v0;
                    return v2;
                }
                if ((((char)((int)(((long long)*(v10 + 8)) >> 8))) & 8) != 0)
                {
                    v6 = v0;
                    return 0;
                }
            }
            else if ((((char)((int)(((long long)*(v10 + 8)) >> 8))) & 8) != 0)
            {
                if (((long long)(((char)v5) & 1)) != 0)
                {
                    v9 = v0;
                    return 0;
                }
            }
            if (...)
            {
                if (((long long)(((char)(((short)(((long long)*(v10 + 8)) >> 8)) & 1023)) & 32)) != 0)
                {
                    v2 = 0;
                    if (((long long)(v5 & 2)) != 0)
                    {
                        v5 = ((int)(((int)v5) % 8 & 1));
                        v2 = ((long long)((v4 & 128) != 0? ((int)rdx<8>) : 1));
                        v8 = v0;
                        return v2;
                    }
                    v8 = v0;
                    return v2;
                }
                v5 = ((int)(((int)v5) % 8 & 1));
                v2 = ((long long)((v4 & 128) != 0? ((int)rdx<8>) : 1));
                v8 = v0;
                return v2;
            }
        }
        v8 = v0;
        return v2;
    }
}
