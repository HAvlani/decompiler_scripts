typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int cycle_check()
{
    BOT tmp_9;  // tmp #9
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4[2];  // rsi
    struct_0 *v5;  // rdi

    if (v5->field_18 == 9827862)
    {
        v3 = v5->field_10;
        if (v5->field_10 != 0)
        {
            if (v5->field_0 == v4[1])
            {
                if (v4[0] == v5->field_8)
                {
                    return 1;
                }
            }
            if (v5->field_0 != v4[1] || v4[0] != v5->field_8)
            {
                v5->field_10 = v5->field_10 + 1;
                if ((v3 + 1 & v3) != 0)
                {
                    return 0;
                }
                else if (v5->field_10 + 1 != 0)
                {
                    tmp_9 = v4[0];
                    v5->field_0 = v4[1];
                    v5->field_8 = tmp_9;
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
        }
        v5->field_10 = 1;
        tmp_9 = v4[0];
        v5->field_0 = v4[1];
        v5->field_8 = tmp_9;
        return 0;
    }
    v0 = v2;
    __assert_fail(); /* do not return */
}
