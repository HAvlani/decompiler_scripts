extern char folded_chars;
extern char ignore_case;

int compare_words()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long|unsigned long long [2] v3;  // rsi
    unsigned long long|unsigned long long [2] v4;  // rdi
    unsigned long v5;  // r8
    unsigned long long v6;  // r9
    unsigned long long v7;  // r10
    unsigned long long v8;  // r11

    v7 = v3[1];
    v6 = v4[1];
    v5 = (v3[1] <= v4[1]? v3[1] : v4[1]);
    if (ignore_case == 0)
    {
        if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, (((Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE) <=s Load(addr=(rdi<8> + 0x8<64>), size=8, endness=Iend_LE))) ? (Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE)) : (Load(addr=(rdi<8> + 0x8<64>), size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
        {
            v4 = v4[0];
            v3 = v3[0];
            v2 = 0;
            while (true)
            {
                v1 = ((long long)(*(v4 + v2) - *(v3 + v2)));
                if (((int)*(v4 + v2)) == ((int)*(v3 + v2)))
                {
                    v2 += 1;
                    if (v7 <= v6)
                    {
                        return ((long long)(v7 < v6));
                    }
                    return -1;
                }
                return v1;
            }
        }
        else if (v7 <= v6)
        {
            return ((long long)(v7 < v6));
        }
        else
        {
            return -1;
        }
    }
    if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, (((Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE) <=s Load(addr=(rdi<8> + 0x8<64>), size=8, endness=Iend_LE))) ? (Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE)) : (Load(addr=(rdi<8> + 0x8<64>), size=8, endness=Iend_LE))), 0x0<64>, cc_ndep<8>))))
    {
        v8 = v4[0];
        v2 = 0;
        v4 = v3[0];
        while (true)
        {
            v1 = ((long long)(*(folded_chars + ((long long)*(v8 + v2))) - *(folded_chars + ((long long)*(v4 + v2)))));
            if (((int)*(folded_chars + ((long long)*(v8 + v2)))) == ((int)*(folded_chars + ((long long)*(v4 + v2)))))
            {
                v2 += 1;
                if (v7 <= v6)
                {
                    return ((long long)(v7 < v6));
                }
                else
                {
                    return -1;
                }
            }
            else
            {
                return v1;
            }
        }
    }
    else if (v7 <= v6)
    {
        return ((long long)(v7 < v6));
    }
    else
    {
        return -1;
    }
}
