typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int file_prefixlen()
{
    BOT tmp_3;  // tmp #3
    unsigned long long|char v1;  // rax
    unsigned long long v2;  // rcx
    unsigned long long v3;  // rdx
    struct_0 *v4;  // rsi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r9
    struct_0 *v8;  // r10

    v8 = v4;
    v7 = 0;
    v5 = v4->field_0;
    while (true)
    {
        v2 = v7 + 1;
        v3 = v7;
        if (v7 + 1 < v5)
        {
            while (*(v6 + v3) == 46)
            {
                v1 = ((long long)*(v6 + v3 + 1));
                if (((char)(((long long)*(v6 + v3 + 1)) <= 90)))
                {
                    if (((char)(((long long)v1) <= 64)))
                    {
                        break;
                    }
                }
                else if ((v1 - 97 & 255) > 25)
                {
                    if (v1 != 126)
                    {
                        break;
                    }
                }
                v3 += 2;
                if (v5 > v3)
                {
                    while (true)
                    {
                        v1 = ((long long)*(v6 + v3));
                        if (((char)(((long long)*(v6 + v3)) <= 90)))
                        {
                            if (((char)(((long long)v1) <= 64)))
                            {
                                v1 = ((long long)(((int)v1) - 48));
                                tmp_3 = v1;
                                if (((long long)tmp_3) > 9)
                                {
                                    break;
                                }
                            }
                        }
                        else
                        {
                            if ((v1 - 97 & 255) > 25)
                            {
                                if (v1 != 126)
                                {
                                    break;
                                }
                            }
                        }
                        v3 += 1;
                        break;
                    }
                }
                v2 = v3 + 1;
                break;
            }
        }
        v1 = ((char)(v5 == v3));
        if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
        {
            v1 = ((char)(*(v6 + v3) == 0));
        }
        if (((long long)v1) != 0)
        {
            break;
        }
        v7 = v2;
    }
    v8->field_0 = v3;
    return v7;
}
