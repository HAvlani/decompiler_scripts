typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned int current_col;
extern struct_0 max_col;
extern unsigned long long stdout[7];

int wrapf()
{
    char v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xd8]
    unsigned long v10;  // [bp-0x90]
    BOT v11;  // [bp-0x88]
    BOT v12;  // [bp-0x78]
    BOT v13;  // [bp-0x68]
    BOT v14;  // [bp-0x58]
    BOT v15;  // [bp-0x48]
    BOT v16;  // [bp-0x38]
    BOT v17;  // [bp-0x28]
    BOT v18;  // [bp-0x18]
    unsigned int v2;  // [bp-0xd4]
    unsigned long|unsigned int v20;  // eax
    char v24;  // al
    unsigned long|char * v25;  // rcx
    unsigned long v26;  // rdx
    unsigned int v27;  // ebx
    unsigned long v28;  // rsi
    unsigned long v29;  // r8
    unsigned long v3;  // [bp-0xd0]
    unsigned long long [7] v30;  // r8
    unsigned long v31;  // r9
    struct_1 *v32;  // fs
    BOT v33;  // xmm0
    BOT v34;  // xmm1
    BOT v35;  // xmm2
    BOT v36;  // xmm3
    BOT v37;  // xmm4
    BOT v38;  // xmm5
    BOT v39;  // xmm6
    unsigned long v4;  // [bp-0xc8]
    BOT v40;  // xmm7
    unsigned long v5;  // [bp-0xc0]
    unsigned long v6;  // [bp-0xb0]
    unsigned long v7;  // [bp-0xa8]
    unsigned long v8;  // [bp-0xa0]
    unsigned long v9;  // [bp-0x98]

    v6 = v28;
    v7 = v26;
    v8 = v25;
    v9 = v29;
    v10 = v31;
    if (((long long)v24) != 0)
    {
        v11 = v33;
        v12 = v34;
        v13 = v35;
        v14 = v36;
        v15 = v37;
        v16 = v38;
        v17 = v39;
        v18 = v40;
    }
    v5 = *(v32 + 0x28);
    v1 = 8;
    v3 = &stack_base+8;
    v2 = 48;
    v4 = &stack_base-184;
    v27 = rpl_vasprintf();
    if (v27 >= 0)
    {
        v20 = ((int)current_col);
        v30 = stdout;
        if (current_col > 0)
        {
            v25 = *(stdout + 40);
            if (max_col - current_col < v27)
            {
                if (*(stdout + 40) < *(stdout + 48))
                {
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v25) = 10;
                    current_col = 0;
                    v30 = stdout;
                    fputs_unlocked(v0, v30);
                    rpl_free();
                    current_col = current_col + v27;
                    if ((v5 ^ *(v32 + 0x28)) == 0)
                    {
                        return v5 ^ *(v32 + 0x28);
                    }
                    __stack_chk_fail(); /* do not return */
                }
                __overflow(((int)stdout), 0xa);
                current_col = 0;
                v30 = stdout;
                fputs_unlocked(v0, v30);
                rpl_free();
                current_col = current_col + v27;
                if ((v5 ^ *(v32 + 0x28)) == 0)
                {
                    return v5 ^ *(v32 + 0x28);
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
            }
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v25) = 32;
                v20 = ((int)v20) + 1;
                v30 = stdout;
                current_col = v20;
                fputs_unlocked(v0, v30);
                rpl_free();
                current_col = current_col + v27;
                if ((v5 ^ *(v32 + 0x28)) == 0)
                {
                    return v5 ^ *(v32 + 0x28);
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
            }
            else
            {
                __overflow(((int)stdout), 0x20);
                v20 = ((long long)current_col);
                v20 = ((int)v20) + 1;
                v30 = stdout;
                current_col = v20;
                fputs_unlocked(v0, v30);
                rpl_free();
                current_col = current_col + v27;
                if ((v5 ^ *(v32 + 0x28)) == 0)
                {
                    return v5 ^ *(v32 + 0x28);
                }
                else
                {
                    __stack_chk_fail(); /* do not return */
                }
            }
        }
        fputs_unlocked(v0, v30);
        rpl_free();
        current_col = current_col + v27;
        if ((v5 ^ *(v32 + 0x28)) == 0)
        {
            return v5 ^ *(v32 + 0x28);
        }
        else
        {
            __stack_chk_fail(); /* do not return */
        }
    }
    xalloc_die(); /* do not return */
}
