typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int hash_free()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v10[10];  // r12
    unsigned long long v3;  // rax
    unsigned long|struct_0 *|unsigned long long [2] v5;  // rbx
    struct_0 * v6;  // rbx
    unsigned long long [2] v7;  // rbp
    unsigned long long [10]|unsigned long long v8;  // rdi
    unsigned long v9;  // r12

    v1 = v9;
    v10 = v8;
    v0 = v5;
    v7 = v8[0];
    v3 = v8[1];
    if (v8[8] != 0)
    {
        if (v8[4] != 0)
        {
            if (v8[0] >= v8[1])
            {
                /* goto 4221260; */
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
                        v3 = v10[1];
                        v7 += 16;
                        if (v10[1] <= v7)
                        {
                            break;
                        }
                    }
                }
                v7 = v10[0];
            }
        }
    }
    if (v8[0] < v8[1] || v8[8] == 0 || v8[4] == 0)
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
            while (v10[1] > v7);
        }
    }
    v6 = v10[9];
    if (v10[9] != 0)
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