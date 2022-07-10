int file_name_prepend()
{
    BOT tmp_6;  // tmp #6
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx
    unsigned long|unsigned long long v12;  // rdx
    unsigned long long v13;  // rdx
    unsigned long long v14[3];  // rbx
    unsigned long v15;  // rbx
    unsigned long long v16;  // rbp
    unsigned long long v17;  // rbp
    void *v18;  // rsi
    unsigned long long v19[3];  // rdi
    unsigned long v2;  // [bp-0x20]
    unsigned long long v20;  // r12
    unsigned long v21;  // r12
    unsigned long v22;  // r13
    unsigned long v23;  // r14
    unsigned long long v24;  // r14
    unsigned long|unsigned long long v25;  // r15
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char *v9;  // rax

    v5 = v25;
    v4 = v23;
    v3 = v22;
    v2 = v21;
    v20 = v11;
    v12 = v11 + 1;
    v1 = v15;
    v14 = v19;
    v10 = v19[2];
    v24 = v19[2] - v19[0];
    if (v12 <= v19[2] - v19[0])
    {
        v9 = v10 + !(r12<8>);
        v19[2] = v9;
        *(v9) = 47;
    }
    else
    {
        v13 = v12 + v19[1];
        v17 = v13;
        v16 = v17 * 2;
        v25 = (long long)xnmalloc();
        tmp_6 = v16 + v24 - v14[1];
        v18 = v14[0] + v24;
        v12 = v14[1] - v24;
        v0 = v14[0];
        v14[2] = tmp_6 + v25;
        memcpy(tmp_6 + v25, v18, v12);
        rpl_free();
        v14[0] = v25;
        v10 = v14[2];
        v14[1] = v16;
        v9 = v10 + !(r12<8>);
        v19[2] = v9;
        *(v9) = 47;
    }
}
