typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    char padding_8[36];
    char field_2c;
    char padding_2d[331];
    unsigned long long field_178;
} struct_3;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

int read_utmp()
{
    BOT tmp_36;  // tmp #36
    unsigned long long v0;  // [bp-0x48]
    struct_3 * v10;  // r13
    struct_1 *v11;  // r14
    unsigned long long v12;  // r15
    unsigned long v13;  // d
    struct_2 *|unsigned long long v2;  // rax
    unsigned long long v3;  // rcx
    struct_1 *v4;  // rdx
    unsigned long long v5;  // rbx
    unsigned int v6;  // ebp
    unsigned long|struct_1 * v7;  // rsi
    struct_1 * v8;  // rdi
    unsigned long long v9;  // r12

    v12 = 0;
    v11 = v7;
    v9 = v3;
    v6 = ((int)(((int)v3) & 2));
    v5 = 0;
    v0 = 0;
    utmpxname();
    setutxent();
    while (true)
    {
        v10 = getutxent();
        if (v10 == 0)
        {
            break;
        }
        while (true)
        {
            if (v10->field_0 == 7 && v10->field_2c != 0 && ((long long)(v9 & 1)) != 0 && v10->field_4 > 0)
            {
                v2 = kill();
                if (v2 < 0)
                {
                    v2 = __errno_location();
                }
            }
            if (v10->field_0 == 7 && v0 == v5 && v2 < 0 && v10->field_2c != 0 && v2->field_0 != 3 && ((long long)(v9 & 1)) != 0 && v10->field_4 > 0 || (v10->field_2c == 0 && v6 == 0 || v6 == 0 && v10->field_0 != 7 || v10->field_0 == 7 && ((long long)(v9 & 1)) == 0 && v10->field_2c != 0 || v10->field_0 == 7 && v10->field_4 <= 0 && v10->field_2c != 0 || v10->field_0 == 7 && v10->field_2c != 0 && v2 >= 0) && v0 == v5)
            {
                v12 = (long long)xpalloc();
            }
            tmp_36 = v5 * 3;
            v5 += 1;
            *(tmp_36 * 128 + r15<8>) = v10->field_0;
            v8 = tmp_36 * 128 + r15<8> + 8 & 18446744069414584312;
            *(tmp_36 * 128 + r15<8> + 376) = v10->field_178;
            v7 = v10 - (tmp_36 * 128 + r15<8> - (tmp_36 * 128 + r15<8> + 8 & 18446744069414584312));
            for (v3 = tmp_36 * 128 + r15<8> - (tmp_36 * 128 + r15<8> + 8 & 18446744069414584312) + 384 >> 3; v3 != 0; v7 += v13 * 8)
            {
                v3 -= 1;
                v8->field_0 = v7->field_0;
                v8 += v13 * 8;
            }
            v10 = getutxent();
            endutxent();
            v11->field_0 = v5;
            v4->field_0 = v12;
            return 0;
        }
    }
    endutxent();
    v11->field_0 = v5;
    v4->field_0 = v12;
    return 0;
}
