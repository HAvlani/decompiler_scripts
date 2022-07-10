typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char field_32;
    char field_33;
    char field_34;
    char field_35;
    char field_36;
    char field_37;
    char field_38;
} struct_0;

extern <missing-type> fold_toupper;
extern <missing-type> nondictionary;
extern <missing-type> nonprinting;

int set_ordering()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_6;  // tmp #6
    unsigned long long v0;  // [bp-0x8]
    char [2] v2;  // rax
    unsigned long|unsigned long long|unsigned int v3;  // ecx
    unsigned long v4;  // rdx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbx
    struct_0 * v7;  // rsi
    char v8[2];  // rdi

    v3 = ((int)v8[0]);
    v2 = v8;
    if (((long long)v8[0]) != 0)
    {
        v0 = v5;
        while (true)
        {
            v3 = ((long long)v3) - 77;
            tmp_5 = v3;
            if (((long long)tmp_5) <= 37)
            {
                v3 = ((long long)v3);
                /* goto ((long long)*(4280352 + v3 * 4)) + 4280352; */
                v7->field_35 = 1;
                /* goto 4223648; */
                v7->field_32 = 1;
                /* goto 4223648; */
                v7->field_37 = 1;
                /* goto 4223648; */
                v7->field_33 = 1;
                /* goto 4223648; */
                v7->field_34 = 1;
                /* goto 4223648; */
                v7->field_36 = 1;
                /* goto 4223648; */
                v7->field_38 = 1;
                /* goto 4223648; */
                v7->field_20 = &nondictionary;
                /* goto 4223648; */
                v7->field_28 = &fold_toupper;
                /* goto 4223648; */
                v6 = v0;
                return v2;
                if ((((int)v4) & -3) == 0)
                {
                    v7->field_30 = 1;
                }
                if (((int)(v4 - 1)) <= 1)
                {
                    v7->field_31 = 1;
                    /* goto 4223648; */
                }
                if (v7->field_20 == 0)
                {
                    v7->field_20 = &nonprinting;
                }
                v3 = ((long long)v2[1]);
                v2 += 1;
                tmp_6 = v3;
                if (True)
                {
                    v6 = v0;
                    return v2;
                }
            }
            v6 = v0;
            return v2;
            v3 = ((long long)v3);
            /* goto ((long long)*(4280352 + v3 * 4)) + 4280352; */
            v7->field_35 = 1;
            /* goto 4223648; */
            v7->field_32 = 1;
            /* goto 4223648; */
            v7->field_37 = 1;
            /* goto 4223648; */
            v7->field_33 = 1;
            /* goto 4223648; */
            v7->field_34 = 1;
            /* goto 4223648; */
            v7->field_36 = 1;
            /* goto 4223648; */
            v7->field_38 = 1;
            /* goto 4223648; */
            v7->field_20 = &nondictionary;
            /* goto 4223648; */
            v7->field_28 = &fold_toupper;
            /* goto 4223648; */
            v6 = v0;
            return v2;
            if ((((int)v4) & -3) == 0)
            {
                v7->field_30 = 1;
            }
            if (((int)(v4 - 1)) <= 1)
            {
                v7->field_31 = 1;
                /* goto 4223648; */
            }
            if (v7->field_20 == 0)
            {
                v7->field_20 = &nonprinting;
            }
        }
    }
    else
    {
        return v8;
    }
}
