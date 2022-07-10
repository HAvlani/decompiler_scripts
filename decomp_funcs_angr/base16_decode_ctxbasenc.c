typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[5];
    char field_5;
} struct_1;

int base16_decode_ctx()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_21;  // tmp #21
    BOT tmp_47;  // tmp #47
    BOT tmp_10;  // tmp #10
    unsigned long long v1;  // rax
    unsigned long long v10;  // r10
    unsigned int|unsigned long long v4;  // rdx
    unsigned long|unsigned long long v5;  // rdx
    char * v6;  // rsi
    struct_1 *v7;  // rdi
    char [6] v8;  // rdi
    struct_0 *v9;  // r8

    v9->field_0 = 0;
    v10 = v6 + v5;
    if (v5 == 0)
    {
        return ((long long)(((int)v7->field_5) ^ 1));
    }
    while (true)
    {
        v1 = ((long long)*(v6));
        v6 += 1;
        tmp_4 = v1;
        if (tmp_4 != 10)
        {
            v4 = v1 - 48;
            if (((int)(v1 - 48)) <= 9)
            {
                v1 = v4;
                v4 = ((long long)v8[5]);
            }
            else if (((int)(v1 - 65)) <= 5)
            {
                v4 = ((int)v8[5]);
                v1 = ((long long)(((int)v1) - 55));
            }
            else
            {
                return 0;
            }
            if (((int)(v1 - 48)) <= 9 || ((int)(v1 - 65)) <= 5)
            {
                if ((((int)(v1 - 48)) <= 9 || ((long long)v8[5]) == 0) && (((long long)v8[5]) == 0 || ((int)(v1 - 48)) > 9))
                {
                    v8[4] = al<1>;
                    /* goto 4208417; */
                }
                if ((((int)(v1 - 48)) <= 9 || ((long long)v8[5]) != 0) && (((int)(v1 - 48)) > 9 || ((long long)v8[5]) != 0))
                {
                    tmp_21 = ((long long)*(rdi<8> + 4));
                    v9->field_0 = v9->field_0 + 1;
                    v1 = ((long long)(rax<8> + tmp_21 * 16));
                    tmp_47 = v1;
                    *(rcx<8> + 1 + 1) = tmp_47;
                }
                v5 = ((long long)(reg_32<4> ^ 1));
                tmp_10 = v5;
                *(rdi<8> + 5) = tmp_10;
            }
        }
        if (((int)(v1 - 48)) <= 9 || tmp_4 == 10 || ((int)(v1 - 65)) <= 5)
        {
            return 1;
        }
    }
}
