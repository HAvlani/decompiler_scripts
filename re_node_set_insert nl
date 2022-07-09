int re_node_set_insert()
{
    BOT tmp_11;  // tmp #11
    unsigned long long v1;  // rax
    unsigned long long|unsigned long long [3] v10;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long [2] v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7[3];  // rbx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rsi

    v8 = v9;
    v7 = v10;
    v2 = v10[0];
    if (v10[0] != 0)
    {
        v9 = v10[1];
        v10 = v10[2];
        if (v9 == 0)
        {
            *(v10) = v8;
            v3 = 1;
            v7[1] = v7[1] + 1;
            return v3;
        }
        if (v2 == v9)
        {
            tmp_11 = v9 * 2;
            v9 *= 16;
            v7[0] = tmp_11;
            v10 = realloc(v10, v9);
            if (v10 != 0)
            {
                v7[2] = v10;
                v9 = v7[1];
            }
            else
            {
                v3 = 0;
                return v3;
            }
        }
        if (v10 != 0 || v2 != v9)
        {
            v5 = v9 * 8;
            if (!(*(v10) > v8))
            {
                v1 = *(v10 + v5 + 8);
                if (v8 < v1)
                {
                    do
                    {
                        *(v10 + rsi<8> * 8) = v1;
                        v9 = rsi<8> - 1;
                        v1 = *(v10 + v9 * 8 + 8);
                    }
                    while (*(v10 + (v9 << 3) + 8) > v8);
                }
                v5 = v9 * 8;
                *(v10 + v5) = v8;
                v3 = 1;
                v7[1] = v7[1] + 1;
                return v3;
            }
            else if (!(((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
            {
                v4 = v5 + v10;
                do
                {
                    v6 = v4[1];
                    v4 -= 8;
                    v4[1] = v6;
                }
                while (v4 != v10);
                v5 = 0;
                *(v10 + v5) = v8;
                v3 = 1;
                v7[1] = v7[1] + 1;
                return v3;
            }
            else
            {
                *(v10 + v5) = v8;
                v3 = 1;
                v7[1] = v7[1] + 1;
                return v3;
            }
        }
    }
    v10[0] = 1;
    v10[1] = 1;
    v3 = malloc(0x8);
    v10[2] = v3;
    if (v3 != 0)
    {
        *(v3) = v9;
        return 1;
    }
    else
    {
        v7[1] = 0;
        v7[0] = 0;
        return v3;
    }
}
