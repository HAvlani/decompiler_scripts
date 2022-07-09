typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    char field_10;
    char padding_11[15];
    char field_20;
    char padding_21[15];
    unsigned long long field_30;
} struct_0;

int mktime_z()
{
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v10;  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // r13
    unsigned long long v13;  // r14
    unsigned long v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x4c]
    unsigned int v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x38]
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    struct_0 *v9;  // rbp

    v9 = v10;
    if (v11 != 0)
    {
        v12 = (long long)set_tz();
        if (v12 != 0)
        {
            tmp_13 = v9->field_0;
            v3 = -1;
            v0 = tmp_13;
            v1 = v9->field_8;
            v2 = v9->field_10;
            v4 = v9->field_20;
            v13 = mktime(((int)&v0));
            if (((int)v3) >= 0)
            {
                v7 = save_abbr();
                if (((long long)v7) != 0)
                {
                    if (v12 == 1)
                    {
                        v9->field_0 = *((int128_t *)(((char *)&v1) + -8));
                        v9->field_30 = v5;
                        v9->field_10 = v2;
                        v9->field_20 = v4;
                        v8 = v13;
                        return v8;
                    }
                    v7 = revert_tz.part.0();
                    if (((long long)v7) != 0)
                    {
                        v9->field_0 = *((int128_t *)(((char *)&v1) + -8));
                        v9->field_30 = v5;
                        v9->field_10 = v2;
                        v9->field_20 = v4;
                        v8 = v13;
                        return v8;
                    }
                    else
                    {
                        v13 = 18446744069414584319;
                        v8 = v13;
                        return v8;
                    }
                }
            }
            if (((int)v3) < 0 || ((long long)v7) == 0)
            {
                if (v12 != 1)
                {
                    revert_tz.part.0();
                    v13 = 18446744069414584319;
                    v8 = v13;
                    return v8;
                }
                v13 = 18446744069414584319;
                v8 = v13;
                return v8;
            }
        }
        v13 = 18446744069414584319;
        v8 = v13;
        return v8;
    }
    v13 = timegm(((int)v10));
    v8 = v13;
    return v8;
}
