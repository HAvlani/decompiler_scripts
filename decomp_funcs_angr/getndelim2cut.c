typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    unsigned long long field_10;
} struct_0;

int getndelim2()
{
    BOT tmp_50;  // tmp #50
    BOT tmp_75;  // tmp #75
    BOT tmp_49;  // tmp #49
    unsigned int v0;  // [bp-0x8c]
    unsigned long|void * v1;  // [bp-0x88]
    struct_0 *v10;  // [bp+0x8]
    void *|unsigned long long|unsigned int v11;  // rax
    char v12;  // al
    unsigned long long v13;  // rax
    unsigned long|unsigned long long v14;  // rcx
    unsigned long|unsigned long long v15;  // rdx
    unsigned long long v16;  // rbx
    unsigned long long|char * v17;  // rbp
    struct_2 *v18;  // rsi
    struct_2 *|void * v19;  // rdi
    unsigned long v2;  // [bp-0x80]
    unsigned long long|void *|unsigned int v20;  // r8
    unsigned int v21;  // r9d
    unsigned long long v22;  // r12
    unsigned long long v24;  // r13
    unsigned long long v25[3];  // r14
    unsigned int v3;  // [bp-0x78]
    unsigned int v4;  // [bp-0x74]
    unsigned long|void * v5;  // [bp-0x70]
    unsigned long|void * v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    struct_2 *v8;  // [bp-0x58]
    unsigned long|unsigned long long v9;  // [bp-0x48]

    v22 = v18->field_0;
    v8 = v19;
    v25 = v10;
    v7 = v15;
    v2 = v14;
    v0 = v20;
    v4 = v21;
    v11 = v19->field_0;
    v1 = v19->field_0;
    if (v11 == 0)
    {
        v22 = (v14 <= 64? v14 : 64);
        v11 = malloc((v14 <= 64? v14 : 64));
        v1 = v11;
        if (v11 == 0)
        {
            v11 = 18446744069414584319;
            return v11;
        }
    }
    if (v11 != 0 || v11 != 0)
    {
        if (v22 >= v7)
        {
            v16 = v22 - v7;
            if (((long long)(((char)(v2 <= v22)) & ((char)(v22 == v7)))) == 0)
            {
                v11 = ((int)v0);
                if (v0 != -1)
                {
                    v4 = (v4 == -1? ((int)v11) : v4);
                }
                else
                {
                    v0 = v4;
                }
                v17 = v1 + v7;
                while (true)
                {
                    v20 = (long long)freadptr();
                    if (v20 != 0)
                    {
                        if (v0 != -1)
                        {
                            v5 = v20;
                            v11 = memchr2();
                            v20 = v5;
                            if (v11 != 0)
                            {
                                v24 = 1;
                                v15 = v11 - v20 + 1;
                                v11 = v11 - v20 + 2;
                                v9 = v15;
                            }
                        }
                        if (v11 == 0 || v0 == -1)
                        {
                            v11 = v9 + 1;
                            v24 = 0;
                        }
                    }
                    else
                    {
                        if (v25[1] < v25[2])
                        {
                            v25[1] = v10->field_8 + 1;
                            v3 = ((int)v10->field_8->field_0);
                        }
                        else
                        {
                            v5 = v20;
                            v11 = __uflow();
                            v20 = v5;
                            v3 = ((int)v11);
                            if (v17 == v1 && ((int)v11) == -1)
                            {
                                v8->field_0 = v1;
                                v18->field_0 = v22;
                                v11 = 18446744069414584319;
                                break;
                            }
                        }
                        if (v25[1] < v25[2] || ((int)v11) != -1)
                        {
                            v9 = 1;
                            v13 = ((long long)v3);
                            v12 = ((char)(v4 == v3));
                            tmp_50 = rax<8>;
                            tmp_75 = ((int)tmp_50);
                            tmp_49 = tmp_75;
                            v24 = ((long long)(((int)v24) | tmp_49));
                            v11 = 2;
                        }
                    }
                    if (r12<8> < v2 && v16 < v11 && (v25[1] < v25[2] || ((int)v11) != -1 || v20 != 0))
                    {
                        v17 -= v1;
                        v14 = v17 + v11;
                        v15 = ((!(r12<8> <= 63)? r12<8> << 1 : r12<8> + 64) - v17 < v11? v14 : (!(r12<8> <= 63)? r12<8> << 1 : r12<8> + 64));
                        if (v15 > v2 || r12<8> >= ((!(r12<8> <= 63)? r12<8> << 1 : r12<8> + 64) - v17 < v11? v14 : (!(r12<8> <= 63)? r12<8> << 1 : r12<8> + 64)))
                        {
                            v15 = v2;
                        }
                        v11 = v7;
                        if (((char)(v15 - v7 >> 63)))
                        {
                            v15 = 0x8000000000000000 + v11;
                            if (r12<8> != 0x8000000000000000 + v11)
                            {
                                v8->field_0 = v1;
                                v18->field_0 = v22;
                                v11 = 18446744069414584319;
                                return v11;
                            }
                        }
                    }
                    if (r12<8> < v2 && v16 < v11 && (v25[1] < v25[2] || ((int)v11) != -1 || v20 != 0) && ((char)(v15 - v7 >> 63)) && r12<8> != 0x8000000000000000 + v11 || r12<8> < v2 && v16 < v11 && (v25[1] < v25[2] || ((int)v11) != -1 || v20 != 0) && !(((char)(v15 - v7 >> 63))))
                    {
                        v19 = v1;
                        v6 = v20;
                        v16 = rdx<8> - v17;
                        v5 = rdx<8>;
                        v11 = realloc(v19, rdx<8>);
                        if (v1 != 0)
                        {
                            v15 = v5;
                            v20 = v6;
                            v1 = v11;
                            v17 += v1;
                            v22 = v15;
                            v8->field_0 = v1;
                            v18->field_0 = v22;
                            v11 = 18446744069414584319;
                            return v11;
                        }
                    }
                    if (...)
                    {
                        if (rbx<8> > 1)
                        {
                            v15 = (v9 <= rbx<8> - 1? v9 : rbx<8> - 1);
                            if (r8<8> != 0)
                            {
                                v6 = v15;
                                v5 = r8<8>;
                                memcpy(v17, r8<8>, v15);
                                v20 = v5;
                                v15 = v6;
                            }
                            else
                            {
                                *(v17) = ((char)v3);
                            }
                            v17 += v15;
                            v16 = rbx<8> - v15;
                        }
                        if (r8<8> != 0)
                        {
                            v11 = freadseek();
                            if (v11 != 0)
                            {
                                v8->field_0 = v1;
                                v18->field_0 = v22;
                                v11 = 18446744069414584319;
                                return v11;
                            }
                        }
                    }
                    if (...)
                    {
                        *(v17) = 0;
                        v8->field_0 = v1;
                        v18->field_0 = v22;
                        v11 = v17 - (v7 + v1);
                        if (v17 != v7 + v1)
                        {
                            return v11;
                            v11 = 18446744069414584319;
                            return v11;
                        }
                    }
                }
                return v11;
            }
            v8->field_0 = v1;
            v18->field_0 = v22;
            v11 = 18446744069414584319;
            return v11;
        }
        v8->field_0 = v1;
        v18->field_0 = v22;
        v11 = 18446744069414584319;
        return v11;
    }
}
