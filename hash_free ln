typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int hash_free()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v10;  // r12
    unsigned long long v3;  // rax
    struct_0 *|unsigned long|unsigned long long [2] v5;  // rbx
    struct_0 * v6;  // rbx
    unsigned long long [2] v7;  // rbp
    unsigned long long|unsigned long long [10] v8;  // rdi
    unsigned long long v9[10];  // r12

    v1 = v10;
    v9 = v8;
    v0 = v5;
    v7 = v8[0];
    v3 = v8[1];
    if (v8[8] != 0)
    {
        if (v8[4] != 0)
        {
            if (v8[0] >= v8[1])
            {
                /* goto 4221500; */
            }
            else
            {
                while (true)
                {
                    v8 = v7[0];
                    if (v7[0] == 0)
                    {
                        v7 += 16;
                        if (v3 <= v7)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v5 = v7;
                        while (true)
                        {
                            *(r12<8> + 64)();
                            v5 = v5[1];
                            if (v5 == 0)
                            {
                                break;
                            }
                            v8 = v5[0];
                        }
                        v3 = v9[1];
                        v7 += 16;
                        if (v9[1] <= v7)
                        {
                            break;
                        }
                    }
                }
                v7 = v9[0];
            }
        }
    }
    if (v8[8] == 0 || v8[4] == 0 || v8[0] < v8[1])
    {
        if (v7 < v3)
        {
            do
            {
                v5 = *(rbp<8> + 8);
                if (*(rbp<8> + 8) != 0)
                {
                    while (true)
                    {
                        v5 = v5->field_8;
                        rpl_free();
                        if (v5 == 0)
                        {
                            break;
                        }
                    }
                }
                v7 = rbp<8> + 16;
            }
            while (v9[1] > v7);
        }
    }
    v6 = v9[9];
    if (v9[9] != 0)
    {
        while (true)
        {
            v6 = v6->field_8;
            rpl_free();
            if (v6 == 0)
            {
                break;
            }
        }
        rpl_free();
    }
    else
    {
        rpl_free();
    }
}
