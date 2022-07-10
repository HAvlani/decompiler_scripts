typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int base64_decode_ctx()
{
    BOT tmp_51;  // tmp #51
    BOT tmp_12;  // tmp #12
    BOT tmp_9;  // tmp #9
    BOT tmp_6;  // tmp #6
    BOT tmp_4;  // tmp #4
    char v0;  // [bp-0x5f]
    char v1;  // [bp-0x5e]
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rdx
    unsigned long long|char * v12;  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rsi
    struct_2 *v16;  // rdi
    struct_0 *v17;  // r8
    unsigned long long v18;  // r12
    unsigned long long|char * v19;  // r13
    char v2;  // [bp-0x5d]
    unsigned long v20;  // r13
    struct_2 *v21;  // r14
    unsigned long long|char * v22;  // r15
    unsigned long long v23;  // r15
    unsigned long long v24;  // r15
    unsigned int v3;  // [bp-0x5c]
    struct_0 *v4;  // [bp-0x58]
    unsigned long|unsigned long long v5;  // [bp-0x50]
    unsigned long|unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x8]
    char|unsigned long long v9;  // rax

    v7 = v24;
    v21 = v16;
    v12 = v15;
    v14 = v11;
    v22 = v17->field_0;
    v5 = v10;
    v6 = v22;
    v2 = ((char)(v21 != 0));
    if (v21 != 0)
    {
        v0 = ((char)(v11 != 0));
        v19 = ((long long)(((int)v20) & ((int)v0)));
        tmp_51 = v19;
        v1 = tmp_51;
    }
    else
    {
        v1 = 1;
        v0 = 1;
    }
    while (true)
    {
        v11 = v22;
        if (v1 != 0)
        {
            v19 = v12;
            v13 = v12 + v14;
            while (true)
            {
                v18 = v13 - v19;
                v9 = decode_4();
                if (((long long)v9) == 0)
                {
                    break;
                }
                v22 = v6;
                v19 += 4;
            }
            v11 = v6;
            v14 = v18;
            v12 = v19;
        }
        v9 = ((char)(v14 == 0)) & v0;
        if (((long long)(((char)(v14 == 0)) & v0)) == 0)
        {
            if (v14 == 0)
            {
                v6 = v22;
                v5 -= v22 - v11;
                if (v21 != 0)
                {
                    v22 = rbx<8>;
                }
                else
                {
                    v11 = v22;
                    v9 = 1;
                    v17->field_0 = v4->field_0 - v11;
                    v23 = v7;
                    return rax<8>;
                }
            }
            else if (*(rbx<8>) != 10)
            {
                tmp_12 = v22;
                v6 = v22;
                v22 = rbx<8> + v14;
                v5 -= tmp_12 - v11;
                if (v21 == 0)
                {
                    /* goto 4214713; */
                }
                else
                {
                    v10 = ((long long)v21->field_0);
                    if (v21->field_0 != 4)
                    {
                        v9 = ((char)(((int)v16->field_0) == 0));
                    }
                }
            }
            else if (v21 != 0)
            {
                v14 -= 1;
                v22 = v11;
            }
            else
            {
                tmp_9 = v22;
                v6 = v22;
                v22 = rbx<8> + v14;
                v5 -= tmp_9 - v11;
            }
            if (v21 != 0 && (v14 == 0 || *(rbx<8>) != 10))
            {
                if (v21->field_0 == 4 || v14 != 0)
                {
                    if (v14 == 0 || v21->field_0 == 4)
                    {
                        v21->field_0 = 0;
                        v9 = 1;
                        v10 = 0;
                    }
                    if (v14 > 3 && ((long long)al<1>) != 0)
                    {
                        v3 = ((int)rcx<8>);
                        v9 = memchr(((int)rbx<8>), 0xa, 0x4);
                        v10 = ((long long)v3);
                        if (v9 == 0)
                        {
                            v12 = rbx<8> + 4;
                            /* goto 4214713; */
                        }
                    }
                    if (r15<8> > rbx<8> && (v14 <= 3 || ((long long)al<1>) == 0 || v9 != 0))
                    {
                        while (true)
                        {
                            v11 = ((long long)*(rbx<8>));
                            v12 = rbx<8> + 1;
                            tmp_6 = v11;
                            if (tmp_6 != 10)
                            {
                                v9 = rcx<8> + 1;
                                v21->field_0 = ((int)rcx<8>) + 1;
                                *(v21 + rcx<8> + 4) = v11;
                                if (((int)(rcx<8> + 1)) != 4)
                                {
                                    v10 = v9;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (tmp_6 == 10 || ((int)(rcx<8> + 1)) != 4)
                            {
                                v12 = v22;
                                break;
                            }
                        }
                    }
                }
                if (v14 <= 3 || ((long long)al<1>) == 0 || v9 != 0 || v14 == 0 && v21->field_0 != 4)
                {
                    v14 = rcx<8>;
                    if (rcx<8> == 0)
                    {
                        v11 = v6;
                        v9 = 1;
                        v17->field_0 = v4->field_0 - v11;
                        v23 = v7;
                        return rax<8>;
                    }
                }
            }
            if (rsi<8> <= 3 && (v21 == 0 || rcx<8> != 0) && (*(rbx<8>) == 10 || v21 != 0) && (v14 != 0 || v21 != 0) && (v14 == 0 || v21 == 0 || *(rbx<8>) != 10) && (v14 == 0 || v14 <= 3 || v21 == 0 || ((long long)al<1>) == 0 || v9 != 0) && (v14 <= 3 || v21 == 0 || ((long long)al<1>) == 0 || v21->field_0 != 4 || v9 != 0) && v0 != 0 && v2 != 0)
            {
                v11 = v6;
                v9 = 1;
                v17->field_0 = v4->field_0 - v11;
                v23 = v7;
                return rax<8>;
            }
            if (...)
            {
                v9 = decode_4();
                if (((long long)v9) != 0)
                {
                    tmp_4 = r15<8>;
                    v22 = v6;
                    v14 = tmp_4 - rbx<8>;
                }
                else
                {
                    v11 = v6;
                    v17->field_0 = v4->field_0 - v11;
                    v23 = v7;
                    return rax<8>;
                }
            }
        }
        else
        {
            v17->field_0 = v4->field_0 - v11;
            v23 = v7;
            return rax<8>;
        }
    }
}
