typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_409218;

int z85_encode()
{
    BOT tmp_24;  // tmp #24
    char v0;  // [bp-0x34]
    char v1;  // [bp-0x33]
    unsigned long|unsigned long long v10;  // rsi
    unsigned long long|char * v11;  // rdi
    char * v12;  // r8
    char [5] v13;  // r9
    unsigned long long v15;  // r11
    char v16[5];  // r12
    struct_0 *v17;  // fs
    char v2;  // [bp-0x32]
    char v3;  // [bp-0x31]
    unsigned long v4;  // [bp-0x30]
    unsigned long long v6;  // rax
    unsigned long v7;  // rcx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbp

    if (v10 != 0)
    {
        v12 = v11 + 1;
        v9 = v8;
        v15 = 0;
        v0 = *(v11);
        v6 = 1;
        if (v11 + v10 != v11 + 1)
        {
            do
            {
                v11 = ((long long)*(v12));
                v12 += 1;
                v8 = v6 + 1;
                tmp_24 = v11;
                v1 = tmp_24;
                if (((int)v6) != 3)
                {
                    v6 = v8;
                }
                else
                {
                    v13 = v15 + 4;
                    v16 = v9 - v15;
                    v11 = ((long long)v3) + ((long long)v0) * 0x1000000 + ((long long)v1) * 0x10000 + ((long long)v2) * 0x100;
                    while (true)
                    {
                        v10 = v11;
                        v11 = ((long long)(v11 * 13889313184910721217 >> 64)) >> 6;
                        if (v13 < v7)
                        {
                            *(v16 + v13) = *(z85_encoding + ((long long)(v10 - (((long long)(v10 * 6944656592455360609 >> 64)) >> 5) * 85)));
                        }
                        v6 = v13 - 1;
                        if (v13 == 0)
                        {
                            break;
                        }
                        v13 = v6;
                    }
                    v9 += 5;
                    v15 = 5;
                    v6 = 0;
                }
            }
            while (v11 + v10 != v12);
        }
        if (((int)v6) == 0)
        {
            return v4 ^ *(v17 + 0x28);
        }
        error(0x1, 0x0, dcgettext(0x0, &g_409218, 0x5));
    }
    else
    {
        return v4 ^ *(v17 + 0x28);
    }
}
