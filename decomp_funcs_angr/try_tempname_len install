typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int g_418dba;
extern <missing-type> try_nocreate;

int try_tempname_len()
{
    BOT tmp_46;  // tmp #46
    BOT tmp_2;  // tmp #2
    char|unsigned long v0;  // [bp-0xb8]
    unsigned long v1;  // [bp-0xb0]
    unsigned int v10;  // [bp-0x70]
    unsigned int v11;  // [bp-0x6c]
    unsigned long|unsigned long long v12;  // [bp-0x68]
    char v13;  // [bp-0x60]
    unsigned long v14;  // [bp-0x50]
    unsigned long long v16;  // rax
    unsigned long|unsigned long long v17;  // rcx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rdx
    unsigned long v2;  // [bp-0xa8]
    unsigned long long v20;  // rbx
    unsigned long|unsigned long long v21;  // rsi
    unsigned long|unsigned long long|char * v22;  // rdi
    unsigned long|unsigned long long|unsigned int v23;  // r8
    unsigned long long v24;  // r9
    unsigned long long v25;  // r13
    unsigned long v26;  // r15
    unsigned int v3;  // [bp-0xa0]
    char|unsigned long long v4;  // [bp-0x99]
    struct_0 *v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long v7;  // [bp-0x88]
    unsigned long v8;  // [bp-0x80]
    unsigned long v9;  // [bp-0x78]

    v6 = v18;
    v1 = v22;
    v7 = v17;
    v2 = v23;
    v5 = __errno_location();
    v11 = v5->field_0;
    v12 = &stack_base-104 >> 4;
    v0 = ((char)(v17 == &try_nocreate));
    v19 = strlen(v22);
    if (v21 + v23 <= v19)
    {
        v19 -= v21 + v23;
        v26 = v22 + v8;
        v8 = v19;
        v22 = v26;
        v9 = v26;
        v16 = strspn(v22, &g_418dba, ((int)v8));
        v24 = ((long long)v0);
        if (v16 >= v23)
        {
            v23 = 0;
            v10 = 238328;
            v3 = 0;
            v4 = v24;
            while (true)
            {
                if (v2 != 0)
                {
                    v25 = v12;
                    v20 = v9;
                    v23 = ((int)v3);
                    v0 = v1 + v2 + v8;
                    v24 = ((long long)v4);
                    do
                    {
                        if (((unsigned int)v23) != 0)
                        {
                            v23 = ((long long)((unsigned int)v23)) - 1;
                        }
                        else
                        {
                            clock_gettime();
                            v25 = 2862933555777941757 * (v14 ^ v25) + 3037000493;
                            v12 = v25;
                            if (v25 > 17625286678940177407 || ((long long)v24) != 0)
                            {
                                while (true)
                                {
                                    v16 = getrandom(((int)&v13), 0x8, 0x1);
                                    v25 = v13;
                                    v12 = v13;
                                    break;
                                }
                                if (v16 == 8 && v25 <= 17625286678940177407)
                                {
                                    v23 = 9;
                                    v24 = 1;
                                }
                                else
                                {
                                    clock_gettime();
                                    v25 = 2862933555777941757 * (v14 ^ v25) + 3037000493;
                                    v12 = v25;
                                }
                            }
                            v23 = 9;
                            v24 = 1;
                        }
                        tmp_46 = v25;
                        v20 += 1;
                        v19 = ((long long)(9520900167075897609 * v25 % 2 >> 64)) >> 4;
                        v12 = ((long long)(9520900167075897609 * v25 % 2 >> 64)) >> 4;
                        v25 = ((long long)(9520900167075897609 * v25 % 2 >> 64)) >> 4;
                        v17 = tmp_46 - v19 * 62;
                        *(v20 + 1) = *(letters + tmp_46 - v19 * 62);
                    }
                    while (v20 != v0);
                    v3 = ((int)v23);
                    v4 = v24;
                }
                v21 = v6;
                v22 = v1;
                v16 = *(&stack_base-136)();
                if (((int)v16) >= 0)
                {
                    v5->field_0 = v11;
                    return v16;
                }
                else if (v5->field_0 == 17)
                {
                    tmp_2 = v10;
                    v10 -= 1;
                    v16 = -1;
                    return v16;
                }
                else
                {
                    v16 = -1;
                    return v16;
                }
            }
        }
        v5->field_0 = 22;
        v16 = -1;
        return v16;
    }
    v5->field_0 = 22;
    v16 = -1;
    return v16;
}
