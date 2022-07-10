typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int posixtime()
{
    BOT tmp_14;  // tmp #14
    unsigned int v0;  // [bp-0xd8]
    unsigned int v1;  // [bp-0xd4]
    unsigned long long v10;  // [bp-0x88]
    unsigned int v11;  // [bp-0x84]
    unsigned int v12;  // [bp-0x80]
    unsigned int v13;  // [bp-0x78]
    unsigned int v14;  // [bp-0x58]
    unsigned int v15;  // [bp-0x54]
    unsigned int v16;  // [bp-0x50]
    unsigned int v17;  // [bp-0x4c]
    unsigned int v18;  // [bp-0x10]
    unsigned int v19;  // [bp-0xc]
    unsigned int v2;  // [bp-0xd0]
    unsigned int v20;  // [bp-0x8]
    unsigned int v21;  // [bp-0x4]
    unsigned int v23;  // eax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned long v26;  // rax
    unsigned long|unsigned long long|unsigned int v27;  // rax
    unsigned long|unsigned int v28;  // ecx
    unsigned long|unsigned long long v29;  // rdx
    unsigned int v3;  // [bp-0xcc]
    unsigned long|unsigned long long|unsigned int v30;  // ebx
    unsigned long long v31;  // rbp
    unsigned long long v32;  // rsi
    unsigned long|unsigned int v33;  // rdi
    unsigned long|unsigned int v34;  // r8d
    unsigned long|unsigned int v35;  // r9d
    struct_1 *v36;  // r12
    unsigned long long v37;  // r13
    unsigned long long v38;  // r14
    unsigned long long v39;  // r15
    unsigned int v4;  // [bp-0xc8]
    unsigned int v5;  // [bp-0xc4]
    unsigned int v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x94]
    unsigned int v8;  // [bp-0x90]
    unsigned int v9;  // [bp-0x8c]

    v37 = v29;
    v36 = v33;
    v31 = v32;
    v27 = strlen(v32);
    v30 = v27;
    v39 = v27;
    if (((long long)(((char)v29) & 4)) != 0)
    {
        v38 = strchr(v32, 0x2e);
        if (v38 != 0)
        {
            v27 = v38 - v32;
            v30 -= v38 - v32;
            if (v30 != 3)
            {
                v25 = 0;
                return v25;
            }
            v30 = v27;
            v39 = v27;
        }
    }
    else
    {
        v38 = 0;
    }
    if (v30 == 3 || ((long long)(((char)v29) & 4)) == 0 || v38 == 0)
    {
        if (v30 - 8 > 4)
        {
            v25 = 0;
            return v25;
        }
        else if ((((char)((int)v30)) & 1) != 0)
        {
            v25 = 0;
            return v25;
        }
        else
        {
            v29 = 0;
            while (true)
            {
                if (((int)*(v32 + v29)) - 48 > 9)
                {
                    v25 = 0;
                    return v25;
                }
            }
            v29 += 1;
            v39 >>= 1;
            v24 = 0;
            do
            {
                v14 = ((int)(((long long)*(v31 + v24 * 2 + 1)) + (((long long)*(v31 + v24 * 2)) * 5 - 240) * 2 - 48));
                v24 += 1;
            }
            while (v39 != v24);
            if (((long long)(v37 & 1)) != 0)
            {
                v4 = v14 - 1;
                v3 = v15;
                v2 = v16;
                v1 = v17;
                v27 = year.isra.0();
                if (((long long)v27) != 0)
                {
                    v25 = 0;
                    return v25;
                }
            }
            else
            {
                v27 = year.isra.0();
                if (((long long)v27) != 0)
                {
                    v4 = ((int)(((long long)v18) - 1));
                    v3 = v19;
                    v27 = ((int)v21);
                    v2 = v20;
                    v1 = v27;
                    v25 = 0;
                    return v25;
                }
            }
            if (((long long)(v37 & 1)) == 0 && ((long long)v27) != 0 || ((long long)(v37 & 1)) != 0 && ((long long)v27) != 0)
            {
                if (v38 != 0)
                {
                    v27 = ((long long)(((int)*(v38 + 1)) - 48));
                    if (((int)*(v38 + 1)) - 48 > 9)
                    {
                        v25 = 0;
                        return v25;
                    }
                    else
                    {
                        v29 = ((long long)*(v38 + 2));
                        if (((int)(((long long)*(v38 + 2)) - 48)) > 9)
                        {
                            v25 = 0;
                            return v25;
                        }
                        else
                        {
                            tmp_14 = ((long long)(v29 + v27 * 10 - 48));
                            v26 = v29 + v27 * 10 - 48;
                            v0 = ((int)tmp_14);
                        }
                    }
                }
                else
                {
                    v0 = 0;
                    v26 = 0;
                }
                if (v38 == 0 || ((int)*(v38 + 1)) - 48 <= 9 && ((int)(((long long)*(v38 + 2)) - 48)) <= 9)
                {
                    v35 = ((int)v1);
                    v33 = ((int)v3);
                    v30 = 0;
                    v34 = ((long long)v2);
                    v32 = ((int)v4);
                    v28 = ((int)v5);
                    while (true)
                    {
                        v9 = v33;
                        v6 = reg_16<4>;
                        v7 = v35;
                        v8 = v34;
                        v10 = v32;
                        v11 = v28;
                        v12 = -1;
                        v13 = -1;
                        v27 = mktime(((int)&stack_base-152));
                        if (((int)v12) >= 0)
                        {
                            v28 = ((long long)v5);
                            v32 = ((long long)v4);
                            v33 = ((long long)v3);
                            v34 = ((int)v2);
                            v35 = ((long long)v1);
                            if ((v11 ^ v5 | v10 ^ v4 | v9 ^ v3 | v8 ^ v2 | v7 ^ v1 | v6 ^ v0) == 0)
                            {
                                v30 = ((long long)(v30 & 1));
                                v27 += v30;
                                if (!(((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>))))
                                {
                                    v36->field_0 = v27;
                                    v25 = 1;
                                    return v25;
                                    v25 = 0;
                                    return v25;
                                }
                            }
                            else if (v0 != 60)
                            {
                                v25 = 0;
                                return v25;
                            }
                            else
                            {
                                v0 = 59;
                                v23 = 59;
                                v30 = 1;
                            }
                        }
                        else
                        {
                            v25 = 0;
                            return v25;
                        }
                    }
                }
            }
        }
    }
}
