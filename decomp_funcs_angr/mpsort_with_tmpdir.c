typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

int mpsort_with_tmp()
{
    unsigned long long|void * v0;  // [bp-0x68]
    unsigned long long v1;  // [bp-0x60]
    unsigned long long v10;  // rax
    struct_0 * v11;  // rax
    void *|struct_0 * v12;  // rdx
    unsigned long long v13;  // rbx
    unsigned long|unsigned long long v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    struct_0 *v18;  // r12
    unsigned long long v19;  // r13
    unsigned long v2;  // [bp-0x58]
    unsigned long long v20;  // r13
    struct_0 * v21;  // r13
    unsigned long long v22;  // r14
    unsigned long long v23;  // r14
    unsigned long long v24;  // r15
    unsigned long long v25;  // r15
    unsigned long long v26;  // r15
    struct_0 * v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v8;  // rax

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
            v24 = *(v13);
            v3->field_0 = *(v13);
        }
        else
        {
            v26 = v2 >> 2;
            v18 = v13 + (v2 >> 2) * 8;
            v4 = v2 >> 2;
            v20 = v26;
            mpsort_with_tmp();
            v3 = v3;
            mpsort_with_tmp();
            v0 = 0;
            v22 = v18->field_0;
            v17 = v20;
            v25 = *(v13);
            v21 = v3;
            while (true)
            {
                v14 = v22;
                v15 = v25;
                v21 += 8;
                v8 = rcx<8>();
                if (v8 > 0)
                {
                    while (true)
                    {
                        *(v21 + 0x8) = v22;
                        v17 += 1;
                        v22 = *(v13 + v17 * 8);
                        v15 = v25;
                        v21 += 8;
                        v14 = *(v13 + v17 * 8);
                        v8 = rcx<8>();
                    }
                    if (v1 != v17)
                    {
                        v0 += 1;
                        *(v21 + 0x8) = v25;
                    }
                    else
                    {
                        memcpy(v21, v13 + v0 * 8, (v4 - v0) * 8);
                        v24 = v3->field_0;
                    }
                }
                v0 += 1;
                *(v21 + 0x8) = v25;
                if (v4 != v0)
                {
                    v25 = *(v13 + v0 * 8);
                }
                else
                {
                    v8 = v1;
                    v0 = v17;
                    v4 = v8;
                    break;
                }
            }
            memcpy(v21, v13 + v0 * 8, (v4 - v0) * 8);
            v24 = v3->field_0;
        }
        v11 = v5;
        v0 = 0;
        v23 = 0;
        v19 = v1;
        v16 = v11->field_0;
        while (true)
        {
            v14 = v16;
            v15 = r15<8>;
            v23 += 1;
            v10 = rcx<8>();
            if (v10 > 0)
            {
                while (true)
                {
                    *(v13 + v23 * 8 + 8) = v16;
                    v19 += 1;
                    if (v2 != v19)
                    {
                        v16 = *(v13 + v19 * 8);
                        v15 = v24;
                        v23 += 1;
                        v14 = *(v13 + v19 * 8);
                        v10 = rcx<8>();
                        if (v10 <= 0)
                        {
                            break;
                        }
                    }
                }
            }
            v0 += 1;
            v11 = v0;
            *(v13 + r14<8> * 8 + 8) = r15<8>;
            if (v1 == v0)
            {
                break;
            }
            v12 = v3;
            v24 = *(v3 + v11 * 8);
        }
        return v11;
    }
    else if (!(((char)(v14 == 2))))
    {
        return v11;
    }
    else
    {
        v19 = *(v15 + 8);
        v16 = *(v15);
        v14 = *(v15 + 8);
        v15 = *(v15);
        v11 = rcx<8>();
        if (((int)v11) <= 0)
        {
            return v11;
        }
        *(v13) = v19;
        *(v13 + 8) = v16;
        return v11;
    }
}
