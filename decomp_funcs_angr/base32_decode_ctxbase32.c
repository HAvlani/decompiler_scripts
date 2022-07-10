typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int base32_decode_ctx()
{
    BOT tmp_42;  // tmp #42
    BOT tmp_12;  // tmp #12
    BOT tmp_9;  // tmp #9
    BOT tmp_6;  // tmp #6
    BOT tmp_4;  // tmp #4
    char v0;  // [bp-0x5e]
    char v1;  // [bp-0x5d]
    unsigned long long v10;  // rdx
    char *|unsigned long long v11;  // rbx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rsi
    struct_0 *v14;  // rdi
    struct_2 *v15;  // r8
    unsigned long long v16;  // r11
    unsigned long v17;  // r12
    unsigned long v18;  // r13
    unsigned long long v19;  // r13
    unsigned int v2;  // [bp-0x5c]
    struct_0 *v20;  // r14
    char *|unsigned long long v21;  // r15
    unsigned long long v22;  // r15
    unsigned long long v23;  // r15
    struct_2 *v3;  // [bp-0x58]
    unsigned long|unsigned long long v4;  // [bp-0x50]
    unsigned long|unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x8]
    char|unsigned long long v8;  // al
    unsigned long long v9;  // rcx

    v6 = v22;
    v20 = v14;
    v11 = v13;
    v12 = v10;
    v21 = v15->field_0;
    v4 = v9;
    v5 = v21;
    v1 = ((char)(v20 != 0));
    if (v20 != 0)
    {
        v19 = ((long long)(((int)v18) & ((int)v17)));
        tmp_42 = v19;
        v0 = tmp_42;
    }
    else
    {
        v0 = 1;
    }
    while (true)
    {
        v10 = v21;
        if (v0 != 0)
        {
            v16 = v11 + v12;
            while (true)
            {
                v19 = v16 - v11;
                v8 = decode_8();
                if (((long long)v8) == 0)
                {
                    break;
                }
                v21 = v5;
                v11 += 8;
            }
            v10 = v5;
            v12 = v19;
        }
        v8 = ((char)(rsi<8> == 0));
        if (((long long)(rsi<8> == 0)) == 0)
        {
            if (rsi<8> == 0)
            {
                v5 = v21;
                v4 -= v21 - rdx<8>;
                if (v20 != 0)
                {
                    v21 = rbx<8>;
                }
                else
                {
                    v10 = v21;
                    v8 = 1;
                    v15->field_0 = v3->field_0 - v10;
                    v23 = v6;
                    return rax<8>;
                }
            }
            else if (*(rbx<8>) != 10)
            {
                tmp_12 = v21;
                v5 = v21;
                v21 = rbx<8> + rsi<8>;
                v4 -= tmp_12 - rdx<8>;
                if (v20 == 0)
                {
                    /* goto 4209145; */
                }
                else
                {
                    v9 = ((long long)v20->field_0);
                    if (v20->field_0 != 8)
                    {
                        v8 = ((char)(((int)v14->field_0) == 0));
                    }
                }
            }
            else if (v20 != 0)
            {
                v12 = rsi<8> - 1;
                v21 = rdx<8>;
            }
            else
            {
                tmp_9 = v21;
                v5 = v21;
                v21 = rbx<8> + rsi<8>;
                v4 -= tmp_9 - rdx<8>;
            }
            if (v20 != 0 && (rsi<8> == 0 || *(rbx<8>) != 10))
            {
                if (v20->field_0 == 8 || rsi<8> != 0)
                {
                    if (rsi<8> == 0 || v20->field_0 == 8)
                    {
                        v20->field_0 = 0;
                        v8 = 1;
                        v9 = 0;
                    }
                    if (rsi<8> > 7 && ((long long)al<1>) != 0)
                    {
                        v2 = ((int)v9);
                        v8 = memchr(((int)rbx<8>), 0xa, 0x8);
                        v9 = ((long long)v2);
                        if (v8 == 0)
                        {
                            v11 = rbx<8> + 8;
                            /* goto 4209145; */
                        }
                    }
                    if (r15<8> > rbx<8> && (rsi<8> <= 7 || ((long long)al<1>) == 0 || v8 != 0))
                    {
                        while (true)
                        {
                            v10 = ((long long)*(rbx<8>));
                            v11 = rbx<8> + 1;
                            tmp_6 = v10;
                            if (tmp_6 != 10)
                            {
                                v8 = rcx<8> + 1;
                                v20->field_0 = ((int)rcx<8>) + 1;
                                *(v20 + rcx<8> + 4) = v10;
                                if (((int)(rcx<8> + 1)) != 8)
                                {
                                    v9 = v8;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (tmp_6 == 10 || ((int)(rcx<8> + 1)) != 8)
                            {
                                v11 = v21;
                                break;
                            }
                        }
                    }
                }
                if (rsi<8> <= 7 || ((long long)al<1>) == 0 || v8 != 0 || rsi<8> == 0 && v20->field_0 != 8)
                {
                    v12 = v9;
                    if (v9 == 0)
                    {
                        v10 = v5;
                        v8 = 1;
                        v15->field_0 = v3->field_0 - v10;
                        v23 = v6;
                        return rax<8>;
                    }
                }
            }
            if (...)
            {
                v10 = v5;
                v8 = 1;
                v15->field_0 = v3->field_0 - v10;
                v23 = v6;
                return rax<8>;
            }
            if (...)
            {
                v8 = decode_8();
                if (((long long)v8) != 0)
                {
                    tmp_4 = r15<8>;
                    v21 = v5;
                    v12 = tmp_4 - rbx<8>;
                }
                else
                {
                    v10 = v5;
                    v15->field_0 = v3->field_0 - v10;
                    v23 = v6;
                    return rax<8>;
                }
            }
        }
        else
        {
            v15->field_0 = v3->field_0 - v10;
            v23 = v6;
            return rax<8>;
        }
    }
}
