typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpsort_with_tmp()
{
    struct_0 *|unsigned long long v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    struct_0 *|void * v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long|unsigned long long v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    struct_0 *v18;  // r12
    struct_0 * v19;  // r13
    unsigned long v2;  // [bp-0x58]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25;  // r15
    unsigned long long v26;  // r15
    struct_0 * v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long long v7;  // rax
    struct_0 * v8;  // rax
    unsigned long long v9;  // rax

    v13 = v15;
    v2 = v14;
    v3 = v12;
    if (!(v14 <= 2))
    {
        v15 += (v2 >> 1) * 8;
        v1 = v2 >> 1;
        v5 = v15;
        mpsort_with_tmp();
        if (v2 == 3)
        {
            v25 = *(v13);
            v3->field_0 = *(v13);
        }
        else
        {
            v26 = v2 >> 2;
            v18 = v13 + (v2 >> 2) * 8;
            v4 = v2 >> 2;
            v21 = v26;
            mpsort_with_tmp();
            v3 = v3;
            mpsort_with_tmp();
            v0 = 0;
            v22 = v18->field_0;
            v16 = v21;
            v24 = *(v13);
            v19 = v3;
            while (true)
            {
                v14 = v22;
                v15 = v24;
                v19 += 8;
                v7 = rcx<8>();
                if (v7 > 0)
                {
                    while (true)
                    {
                        *(v19 + 0x8) = v22;
                        v16 += 1;
                        v22 = *(v13 + v16 * 8);
                        v15 = v24;
                        v19 += 8;
                        v14 = *(v13 + v16 * 8);
                        v7 = rcx<8>();
                    }
                    if (v1 != v16)
                    {
                        v0 += 1;
                        *(r13<8> + 8) = v24;
                    }
                    else
                    {
                        memcpy(v19, v13 + v0 * 8, (v4 - v0) * 8);
                        v25 = v3->field_0;
                        break;
                    }
                }
                if (v7 <= 0 || v4 != v0)
                {
                    v0 += 1;
                    *(r13<8> + 8) = v24;
                }
                if (v7 <= 0 && v4 == v0)
                {
                    v7 = v1;
                    v0 = v16;
                    v4 = v7;
                    /* goto 4264758; */
                }
                if (v4 != v0)
                {
                    v24 = *(v13 + v0 * 8);
                }
                if (v7 <= 0 && v4 == v0 || v7 > 0 && v4 != v0)
                {
                    memcpy(v19, v13 + v0 * 8, (v4 - v0) * 8);
                }
            }
        }
        v8 = v5;
        v0 = 0;
        v23 = 0;
        v20 = v1;
        v17 = v8->field_0;
        while (true)
        {
            v14 = v17;
            v15 = r15<8>;
            v23 += 1;
            v9 = rcx<8>();
            if (v9 > 0)
            {
                while (true)
                {
                    *(v13 + v23 * 8 + 8) = v17;
                    v20 += 1;
                    if (v2 != v20)
                    {
                        v17 = *(v13 + v20 * 8);
                        v15 = v25;
                        v23 += 1;
                        v14 = *(v13 + v20 * 8);
                        v9 = rcx<8>();
                        if (v9 <= 0)
                        {
                            break;
                        }
                    }
                }
            }
            v0 += 1;
            v8 = v0;
            *(v13 + r14<8> * 8 + 8) = r15<8>;
            if (v1 == v0)
            {
                break;
            }
            v12 = v3;
            v25 = *(v3 + v8 * 8);
        }
        return v8;
    }
    else if (!(((char)(v14 == 2))))
    {
        return v8;
    }
    else
    {
        v20 = *(v15 + 8);
        v17 = *(v15);
        v14 = *(v15 + 8);
        v15 = *(v15);
        v8 = rcx<8>();
        if (((int)v8) <= 0)
        {
            return v8;
        }
        *(v13) = v20;
        *(v13 + 8) = v17;
        return v8;
    }
}
