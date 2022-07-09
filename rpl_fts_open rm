typedef struct struct_1 {
    char padding_0[88];
    unsigned long long field_58;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    char padding_18[64];
    unsigned long long field_58;
    char padding_60[8];
    unsigned short field_68;
} struct_3;

extern unsigned long long g_10;
extern struct_0 g_30;
extern unsigned long long g_58;
extern unsigned short g_68;
extern struct_1 *g_8;
extern unsigned long long g_a0;

int rpl_fts_open()
{
    BOT tmp_28;  // tmp #28
    unsigned long|struct_1 * v0;  // [bp-0x50]
    char v1;  // [bp-0x42]
    char v10;  // ah
    unsigned long|unsigned long long v11;  // rdx
    unsigned long long v12[2];  // rbx
    unsigned long long v13;  // rbp
    unsigned long v14;  // rsi
    unsigned long long [2]|char * v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long v18;  // r14
    unsigned long long [2]|unsigned long long v19;  // r15
    char v2;  // [bp-0x41]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v7;  // rax
    struct_3 *|unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    if (!((((int)v14) & -0x1000) == 0))
    {
        v16 = 0;
        *(__errno_location() + None) = &g_10;
        v7 = v16;
        return v7;
    }
    else if (!((((short)((int)v14)) & 516) != 516))
    {
        v16 = 0;
        *(__errno_location() + None) = &g_10;
        v7 = v16;
        return v7;
    }
    else if (((long long)(v14 & &g_10)) != 0)
    {
        v12 = v15;
        v18 = v11;
        v16 = calloc(0x1, 0x80);
        if (v16 != 0)
        {
            *(v16 + 64) = v11;
            v9 = v14;
            v15 = v15[0];
            *(v16 + 44) = -100;
            v10 = ((char)v14) % 0x100 & 253;
            tmp_28 = rax<8>;
            *(v16 + 72) = (((long long)(((char)v14) & 2)) == 0? ((int)v9) : ((int)tmp_28) | 4);
            if (v15 != 0)
            {
                v19 = v12;
                v17 = 0;
                do
                {
                    v17 = (v17 < strlen(v15)? strlen(v15) : v17);
                    v15 = v19[1];
                    v19 += &g_8;
                }
                while (v15 != 0);
            }
            v1 = (char)fts_palloc.isra.0();
            if (((long long)v1) != 0)
            {
                v8 = v19[0];
                v0 = v19[0];
                if (v8 != 0)
                {
                    v0 = (long long)fts_alloc();
                    if (v0 != 0)
                    {
                        v0->field_58 = 18446744069414584319;
                        v19 = v19[0];
                    }
                }
                else if (v11 != 0)
                {
                    v19 = 0;
                }
                if (v8 == 0 || v0 != 0)
                {
                    if (v11 != 0)
                    {
                        v1 = ((char)(((int)(((long long)*(v16 + 72)) >> &g_8)) & 1));
                    }
                    if (v19 != 0 && (v11 != 0 || v8 != 0))
                    {
                        v3 = 0;
                        v17 = 0;
                        v13 = 0;
                        v2 = ((char)(((int)(((int)v14) % 0x800 ^ 1)) & 1));
                        while (true)
                        {
                            v11 = strlen(r15<8>);
                            if (*(r15<8> + v11 + 1) == 47 && v2 != 0 && v11 > 2)
                            {
                                while (v19 + v11[0] == 47)
                                {
                                    v11 -= 1;
                                    break;
                                }
                            }
                            v19 = (long long)fts_alloc();
                            *(v13 + 88) = 0;
                            *(v13 + 8) = v0;
                            *(v13 + 48) = v13 + 0x100;
                            if (v13 != 0 && v1 != 0)
                            {
                                *(v13 + 160) = 2;
                                *(v13 + 104) = &g_8;
                                if (v18 == 0)
                                {
                                    *(v13 + 16) = 0;
                                    /* goto 4220976; */
                                }
                            }
                            if (v13 == 0 || v1 == 0)
                            {
                                *(v13 + 104) = (short)fts_stat();
                                if (v18 == 0)
                                {
                                    *(v13 + 16) = 0;
                                    if (v13 == 0)
                                    {
                                        v3 = v13;
                                        /* goto 4220668; */
                                    }
                                }
                            }
                            if (v18 != 0)
                            {
                                *(v13 + 16) = v13;
                                v13 = v19;
                                /* goto 4220668; */
                            }
                            if (v18 == 0 && (v13 != 0 || v13 != 0) && (v1 != 0 || v13 != 0))
                            {
                                v3 = v13;
                                g_10 = v13;
                            }
                            v17 += 1;
                            v19 = *(v13 + v17 * &g_8);
                            v13 = (long long)fts_sort();
                            break;
                        }
                        if (v19[v17] == 0 && v13 != 0)
                        {
                            v8 = fts_alloc();
                            *(v16) = v8;
                        }
                        else
                        {
                            fts_lfree();
                            rpl_free();
                        }
                    }
                    if (v8 != 0)
                    {
                        v8->field_10 = v13;
                        v8->field_68 = &g_8;
                        v8->field_58 = 1;
                        v8 = setup_dir.isra.0();
                        if (((long long)v8) != 0)
                        {
                            if ((((short)*(v16 + 72)) & 516) != 0)
                            {
                                i_ring_init();
                                v7 = v16;
                                return v7;
                            }
                            v8 = diropen.isra.0();
                            *(v16 + 40) = v8;
                            if (v8 >= 0)
                            {
                                i_ring_init();
                                v7 = v16;
                                return v7;
                            }
                            else
                            {
                                *(v16 + 72) = *(v16 + 72) | 4;
                                i_ring_init();
                                v7 = v16;
                                return v7;
                            }
                        }
                    }
                }
                if (v11 == 0 && v8 == 0 || v8 == 0 && v19 == 0 || v8 == 0 && v8 != 0 || v19 == 0 && v0 != 0 || v0 != 0 && v8 != 0)
                {
                    v8 = fts_alloc();
                    *(v16) = v8;
                }
                if (v8 == 0 && ((long long)v8) == 0 || v8 == 0 && v8 == 0 || ((long long)v8) == 0 && v0 != 0 || v8 == 0 && v0 != 0)
                {
                    fts_lfree();
                    rpl_free();
                }
                if (((long long)v8) == 0 || v8 == 0 || v0 == 0 && v8 != 0)
                {
                    rpl_free();
                    v16 = 0;
                    rpl_free();
                    v7 = v16;
                    return v7;
                }
            }
            v16 = 0;
            rpl_free();
            v7 = v16;
            return v7;
        }
        v7 = v16;
        return v7;
    }
    else
    {
        v16 = 0;
        *(__errno_location() + None) = &g_10;
        v7 = v16;
        return v7;
    }
}
