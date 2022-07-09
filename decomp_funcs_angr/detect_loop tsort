extern unsigned long long loop;

int detect_loop()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r8
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // r12
    unsigned long long v17;  // r12
    struct struct_0 ** v18;  // r12
    unsigned long long v19;  // r13
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v20;  // r13
    unsigned long long v21;  // r13
    unsigned long long v22;  // r13
    unsigned long long v3;  // [bp-0x8]
    unsigned long long|unsigned long long [2] v5;  // rax
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rbx

    v13 = 0;
    if (*(v12 + 32) != 0)
    {
        v3 = v21;
        v2 = v17;
        v1 = &stack_base+0;
        v0 = v9;
        v10 = loop;
        if (loop != 0)
        {
            v5 = *(v12 + 48);
            v18 = v12 + 48;
            if (*(v12 + 48) == 0)
            {
                v11 = v0;
                v14 = v2;
                v19 = v3;
                return v13;
            }
            while (true)
            {
                if (loop != v5[0])
                {
                    v18 = v5 + 8;
                    v5 = v5[1];
                    v8 = v0;
                    v16 = v2;
                    v22 = v3;
                    return 0;
                }
                else if (*(v12 + 40) != 0)
                {
                    while (true)
                    {
                        v10 = *(v10 + 40);
                        error(0x0, 0x0, "%s");
                        v5 = loop;
                        if (v12 != loop)
                        {
                            *(loop + 40) = 0;
                            loop = v10;
                            v13 = 1;
                            v11 = v0;
                            v14 = v2;
                            v19 = v3;
                            return v13;
                        }
                        else
                        {
                            v6 = v18[0]->field_8;
                            v18[0]->field_0->field_20 = v18[0]->field_0->field_20 - 1;
                            v18[0] = v6;
                            do
                            {
                                v6 = v5;
                                v5 = *(v5 + 40);
                                *(v6 + 40) = 0;
                            }
                            while (v5 != 0);
                        }
                    }
                }
                else
                {
                    *(loop + 40) = loop;
                    v13 = 0;
                    loop = v12;
                    v11 = v0;
                    v14 = v2;
                    v19 = v3;
                    return v13;
                }
            }
            loop = 0;
            v13 = 1;
            v11 = v0;
            v14 = v2;
            v19 = v3;
            return v13;
        }
        loop = v12;
        v7 = v0;
        v15 = v2;
        v20 = v3;
        return 0;
    }
    return 0;
}
