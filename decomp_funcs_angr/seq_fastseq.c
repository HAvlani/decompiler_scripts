extern char *separator;
extern struct_0 stdout;

int seq_fast()
{
    BOT tmp_6;  // tmp #6
    BOT tmp_5;  // tmp #5
    BOT tmp_20;  // tmp #20
    BOT tmp_9;  // tmp #9
    BOT tmp_13;  // tmp #13
    unsigned long v0;  // [bp-0x70]
    unsigned long|char *|unsigned int v1;  // [bp-0x68]
    unsigned long v10;  // [bp-0x10]
    unsigned long v11;  // [bp-0x8]
    unsigned long|unsigned long long|char [2] v13;  // rax
    char [2] v14;  // rax
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rcx
    char *|unsigned long long v19;  // rcx
    unsigned long|void * v2;  // [bp-0x60]
    unsigned long|unsigned long long|unsigned int v20;  // rdx
    unsigned long|unsigned long long v21;  // rdx
    unsigned long long v22;  // rbx
    unsigned long v23;  // rbx
    unsigned long|unsigned long long v24;  // rbp
    unsigned long long|char [2] v25;  // rsi
    char *|char [2] v26;  // rdi
    void *v27;  // rdi
    char v29[2];  // r9
    unsigned long|unsigned long long v3;  // [bp-0x58]
    unsigned long|unsigned int v30;  // r10d
    unsigned long long v31;  // r11
    unsigned long v32;  // r12
    unsigned long v33;  // r12
    char *|void * v34;  // r13
    unsigned long|char [2] v35;  // r13
    unsigned long v36;  // r14
    unsigned long long v37;  // r14
    void * v38;  // r15
    unsigned long|char [2] v39;  // r15
    unsigned long|unsigned long long|unsigned int v4;  // [bp-0x50]
    unsigned long long v40;  // cc_dep1
    unsigned long long|char v41;  // cc_dep2
    unsigned long v42;  // d
    unsigned long|unsigned long long|unsigned int v5;  // [bp-0x48]
    unsigned long v6;  // [bp-0x40]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x20]
    unsigned long v9;  // [bp-0x18]

    v11 = v39;
    v29 = v27;
    v18 = 4;
    v10 = v36;
    v26 = "inf";
    v9 = v35;
    v8 = v33;
    v7 = v23;
    while (v18 != 0)
    {
        v18 -= 1;
        v40 = ((long long)v25[0]);
        v41 = ((long long)*(v26));
        v26 += v42;
        v25 += v42;
        break;
    }
    v0 = v21;
    v1 = ((int)(((char)(v40 > v41)) - 0 - ((char)(v40 < v41))));
    if (v40 == 48)
    {
        v14 = v29;
        do
        {
            v35 = v14;
            v21 = ((long long)v14[1]);
            v14 += 1;
            tmp_6 = v21;
        }
        while (tmp_6 == 48);
        v35 = v14;
    }
    else
    {
        v35 = v14;
    }
    if (v14[0] == 48)
    {
        v14 = v25;
        do
        {
            v39 = v14;
            v21 = ((long long)v14[1]);
            v14 += 1;
            tmp_6 = v21;
        }
        while (tmp_6 == 48);
        v39 = v14;
    }
    else
    {
        v39 = v14;
    }
    v13 = strlen(v35);
    v20 = v13 + 1;
    v32 = v13;
    v24 = v13;
    v22 = (31 <= v5? v5 : 31);
    if (v1 != 0)
    {
        ((unsigned int)v5) = v20;
        v17 = 18446744069414584319;
        v26 = v39;
        while (v17 != 0)
        {
            v17 -= 1;
            v41 = ((char)v26[0]);
            v26 += v42;
            break;
        }
        v18 = !(rcx<8>);
        v37 = v18 - 1;
        ((unsigned int)v4) = v18;
        tmp_5 = v22;
        tmp_20 = v22 < v18 - 1;
        v22 = (v22 < v18 - 1? v37 : v22);
        v3 = (tmp_20? v37 : tmp_5) + 1;
        v2 = (long long)xmalloc();
        v34 = memcpy(v22 - v32 + v2, v35, ((unsigned int)v5));
        v5 = v3;
        v3 = (long long)xmalloc();
        v4 = memcpy(v22 - v37 + v3, v39, ((unsigned int)v4));
        if (v32 >= v37)
        {
            if (((char)[D] amd64g_calculate_condition(0x6<64>, 0x8<64>, r12<8>, r14<8>, cc_ndep<8>)))
            {
                v13 = memcmp(v34, v4, v32);
                if (v13 > 0)
                {
                    rpl_free();
                }
                else
                {
                    v31 = v5;
                }
            }
            else
            {
                rpl_free();
            }
        }
    }
    else
    {
        v4 = v5;
        v37 = 0;
        v3 = v22 + 1;
        v2 = (long long)xmalloc();
        v4 = 0;
        v34 = memcpy(v22 - v32 + v2, v35, v20);
    }
    if (v1 == 0 || v32 < v37 || v13 <= 0 && ((char)[D] amd64g_calculate_condition(0x6<64>, 0x8<64>, r12<8>, r14<8>, cc_ndep<8>)))
    {
        v5 = (0x2000 <= v31 << 1? v31 << 1 : 0x2000);
        v38 = (long long)xmalloc();
        v3 = v5 + v38;
        v19 = mempcpy(((int)v38), ((int)v34), ((int)v32));
        while (true)
        {
            if (v0 != 0)
            {
                do
                {
                    v13 = r13<8> + v24 - 1;
                    while (true)
                    {
                        v20 = ((int)v13[0]);
                        if (!(((char)(((long long)v13[0]) <= 56))))
                        {
                            v13 -= 1;
                            v13[1] = 48;
                            *(v34 + 0x1) = 49;
                            v24 += 1;
                            v34 -= 1;
                            break;
                        }
                        else
                        {
                            v20 = ((long long)v20) + 1;
                            tmp_9 = v20;
                            v13[0] = tmp_9;
                            break;
                        }
                    }
                }
                while (v0 != 1);
            }
            if (((long long)(v1 == 0)) == 0 && rbp<8> >= v37)
            {
                if (rbp<8> <= v37)
                {
                    v25 = v4;
                    v1 = v19;
                    v13 = memcmp(r13<8>, v25, rbp<8>);
                    v19 = v1;
                    if (v13 > 0)
                    {
                        *(v19) = 10;
                        v13 = fwrite_unlocked(v38, v19 + 1 - v38, 0x1, stdout);
                        if (v13 == 1)
                        {
                            exit(0x0); /* do not return */
                        }
                        io_error(); /* do not return */
                    }
                }
                *(v19) = 10;
                v13 = fwrite_unlocked(v38, v19 + 1 - v38, 0x1, stdout);
                if (v13 == 1)
                {
                    exit(0x0); /* do not return */
                }
                else
                {
                    io_error(); /* do not return */
                }
            }
            if (rbp<8> < v37 || ((long long)(v1 == 0)) != 0 || rbp<8> <= v37 && v13 <= 0)
            {
                v30 = rcx<8> + 1;
                *(rcx<8> + None) = *(separator);
                if (rbx<8> == rbp<8>)
                {
                    v22 = rbx<8> * 2;
                    v6 = v30;
                    v1 = v22 + 1;
                    v2 = (long long)xrealloc();
                    v34 = memmove(v2 + rbp<8>, v2, rbp<8> + 1);
                    if (v1 << 1 > v5)
                    {
                        v3 = v1 * 2;
                        v1 = v30 - v38;
                        tmp_13 = v1;
                        v38 = (long long)xrealloc();
                        v13 = v38 + v3;
                        v5 = v3;
                        v30 = ((int)(tmp_13 + v38));
                        v3 = v13;
                    }
                }
                v19 = mempcpy(v30, ((int)r13<8>), ((int)rbp<8>));
                v13 = fwrite_unlocked(r15<8>, v19 - r15<8>, 0x1, stdout);
                if (v13 == 1)
                {
                    v19 = r15<8>;
                }
                else
                {
                    io_error(); /* do not return */
                }
            }
        }
    }
}
