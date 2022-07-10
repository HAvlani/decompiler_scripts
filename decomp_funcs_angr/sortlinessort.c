typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_0 *field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    struct struct_2 *field_38;
    char padding_40[16];
    unsigned int field_50;
    char field_54;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_4 {
    uint128_t field_0;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[16];
    unsigned int field_50;
    char field_54;
} struct_3;

int sortlines()
{
    BOT tmp_104;  // tmp #104
    BOT tmp_2;  // tmp #2
    unsigned long v0;  // [bp-0xd8]
    unsigned long v1;  // [bp-0xc0]
    unsigned long v11;  // [bp-0x68]
    unsigned long v12;  // [bp-0x60]
    unsigned long v13;  // [bp-0x58]
    unsigned long v14;  // [bp-0x50]
    unsigned long v15;  // [bp-0x48]
    unsigned long v16;  // [bp-0x40]
    unsigned long v17;  // [bp-0x30]
    unsigned long long v18;  // [bp+0x8]
    unsigned long long v19;  // rax
    unsigned long long v2;  // [bp-0xb8]
    unsigned long long v20;  // rax
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax
    unsigned long long v29;  // rax
    unsigned long|unsigned long long v3;  // [bp-0xb0]
    struct_4 *|unsigned long long [9]|unsigned long long|uint128_t [2] v31;  // rcx
    struct_4 *|unsigned long|unsigned long long v32;  // rdx
    unsigned long|unsigned long long|struct_3 * v33;  // rbx
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx
    unsigned long long [4] v36;  // rbp
    struct_1 *|unsigned long long [7] v37;  // rbp
    unsigned long|unsigned long long|uint128_t [2] v38;  // rsi
    unsigned long long v39;  // rdi
    unsigned long v4;  // [bp-0xa8]
    unsigned long v40;  // rdi
    unsigned long|unsigned long long v41;  // r8
    unsigned long|unsigned long long v42;  // r9
    struct_0 * v43;  // r10
    unsigned long long v44;  // r11
    unsigned long v45;  // r11
    unsigned long long v46;  // r12
    unsigned long long|uint128_t [2] v47;  // r13
    unsigned long long v48;  // r13
    unsigned long long v49;  // r14
    unsigned long v5;  // [bp-0xa0]
    unsigned long long v50;  // r14
    struct_0 *v51;  // fs
    uint128_t v52;  // xmm0
    uint128_t v53;  // xmm2
    uint128_t v54;  // xmm4
    uint128_t v55;  // xmm6
    unsigned long long v6;  // [bp-0x98]
    unsigned long v7;  // [bp-0x90]
    char v8;  // [bp-0x80]
    unsigned long v9;  // [bp-0x78]

    v37 = v31;
    v17 = v34;
    v33 = v40;
    v50 = v31[5];
    v46 = v31[6];
    v39 = v18;
    v4 = v32;
    v1 = v42;
    v2 = v39;
    tmp_104 = v31[8];
    v9 = v33;
    *(&stack_base-112 + None) = v38 % 2;
    v12 = tmp_104;
    *(&stack_base-176 + None) = v38 % 2;
    v11 = v32;
    v13 = v41;
    v14 = v42;
    v15 = v39;
    if (v50 + v46 > 131071)
    {
        if (v38 > 1)
        {
            v29 = pthread_create();
            if (v29 != 0)
            {
                v50 = v37[5];
                v46 = v37[6];
            }
            else
            {
                v0 = v2;
                sortlines();
                pthread_join(((int)v8), 0x0);
                v35 = v17;
                return v16 ^ *(v51 + 0x28);
            }
        }
    }
    if (v38 <= 1 || v50 + v46 <= 131071 || v29 != 0)
    {
        v42 = v9 - v50 * 32;
        v48 = 0 - v50 * 32;
        if (v46 > 1)
        {
            v5 = v9 - v4 * 32;
            v3 = v42;
            sequential_sort();
            v42 = v3;
        }
        if (v50 > 1)
        {
            v3 = v42;
            sequential_sort();
            v42 = v3;
        }
        v46 *= 32;
        v37[0] = v9;
        v47 = v48 - v46;
        v37[1] = v42;
        v33 = v9 + v47;
        v37[2] = v42;
        v37[3] = v33;
        queue_insert();
        v3 = v13 + 8;
        v7 = v13 + 48;
        while (true)
        {
            pthread_mutex_lock();
            while (true)
            {
                v37 = (long long)heap_remove_top();
                if (v37 != 0)
                {
                    break;
                }
                pthread_cond_wait(((int)(v13 + 48)), ((int)(v13 + 8)));
            }
            pthread_mutex_unlock();
            v5 = v37 + 88;
            pthread_mutex_lock();
            v24 = ((long long)v37->field_50);
            v37->field_54 = 0;
            if (((int)v24) == 0)
            {
                break;
            }
            v49 = v37->field_0;
            v46 = v37->field_8;
            v41 = v37->field_10;
            v33 = v37->field_0;
            v38 = (v4 >> (((char)(v24 * 2 + 2)) & 63)) + 1;
            if (((int)v24) > 1)
            {
                v43 = v37->field_20;
                v31 = v46;
                v32 = v49;
                v42 = v49;
                v47 = v37->field_20->field_0;
                if (v49 == v41)
                {
                    v19 = 0;
                    v33 = 0;
                }
                else
                {
                    while (true)
                    {
                        if (v37->field_18 != v31)
                        {
                            v33 = v38 - 1;
                            if (v38 != 0)
                            {
                                v6 = v42;
                                v47 -= 32;
                                v20 = compare();
                                v42 = v6;
                                if (v20 > 0)
                                {
                                    v24 = v37->field_8;
                                    v32 = v37->field_0;
                                    v41 = v37->field_10;
                                    v53 = *(v37->field_8 + 32);
                                    v31 = v37->field_8 - 32;
                                    v37->field_8 = v37->field_8 - 32;
                                    v47[0] = v53;
                                    v47[1] = *(v24 + 16);
                                }
                                else
                                {
                                    v24 = v37->field_0;
                                    v41 = v37->field_10;
                                    v31 = v37->field_8;
                                    v52 = *(v37->field_0 + 32);
                                    v32 = v37->field_0 - 32;
                                    v37->field_0 = v37->field_0 - 32;
                                    v47[0] = v52;
                                    v47[1] = *(v24 + 16);
                                }
                                if (v20 <= 0 && v41 == v32 || v41 == v32 && v20 > 0)
                                {
                                    v43 = v37->field_20;
                                    v33 = v6 - v32 >> 5;
                                    v19 = v31 - v31 >> 5;
                                    break;
                                }
                                if (v20 <= 0 && v41 != v32 || v41 != v32 && v20 > 0)
                                {
                                    v38 = v33;
                                }
                            }
                            else
                            {
                                v43 = v37->field_20;
                                tmp_2 = v42 - v32;
                                v32 = v37->field_0;
                                v38 = 18446744069414584319;
                                v33 = tmp_2 >> 5;
                                v19 = v31 - v31 >> 5;
                            }
                        }
                        else
                        {
                            v43 = v37->field_20;
                            tmp_2 = v42 - v32;
                            v32 = v37->field_0;
                            v33 = tmp_2 >> 5;
                            v19 = v31 - v31 >> 5;
                        }
                        if (v37->field_18 == v31 || v38 == 0)
                        {
                            v39 = v37->field_28;
                            v31 = v38 - 1;
                            v38 = v32 - 32;
                            while (true)
                            {
                                v54 = v38[0];
                                v47 = r13<8> - 32;
                                v37->field_0 = v38;
                                v47[0] = v54;
                                v47[1] = v38[1];
                                if (v38 != v41)
                                {
                                    v31 -= 1;
                                    v38 -= 32;
                                    if (v31 == 18446744069414584319)
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                    }
                    if (v37->field_30 == v19 && (v37->field_18 == v31 || v38 == 0))
                    {
                        v43->field_0 = v47;
                    }
                    else if ((v41 == v32 || v20 <= 0) && (v20 <= 0 || v37->field_18 != v31) && (v20 <= 0 || v38 != 0) && (v41 == v32 || v20 > 0))
                    {
                        v39 = v37->field_28;
                    }
                }
                if (v49 == v41 || v39 != v33)
                {
                    v39 = v37->field_28;
                }
                if (v49 == v41 && v39 == v33 && v37->field_30 != v19)
                {
                    v33 = v37->field_18;
                    if (v37->field_18 != v31)
                    {
                        v41 = v38 - 1;
                        if (v38 != 0)
                        {
                            v31 -= 32;
                            while (true)
                            {
                                v55 = v31[0];
                                v47 = r13<8> - 32;
                                v37->field_8 = v31;
                                v47[0] = v55;
                                v47[1] = v31[1];
                                if (v31 != v33)
                                {
                                    v41 -= 1;
                                    v31 -= 32;
                                    break;
                                }
                                else
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                v43->field_0 = v47;
            }
            else
            {
                v19 = 0;
                v32 = 0;
                if (v49 == v41)
                {
                    /* goto 4241500; */
                    if (v37->field_30 == v19)
                    {
                        /* goto 4241139; */
                    }
                }
                else
                {
                    while (true)
                    {
                        if (v37->field_18 != v31)
                        {
                            v47 = v38 - 1;
                            if (v38 != 0)
                            {
                                v26 = compare();
                                if (v26 > 0)
                                {
                                    v37->field_8 = v37->field_8 - 32;
                                    write_unique();
                                    v33 = v37->field_0;
                                    v31 = v37->field_8;
                                }
                                else
                                {
                                    v37->field_0 = v37->field_0 - 32;
                                    write_unique();
                                    v33 = v37->field_0;
                                    v31 = v37->field_8;
                                }
                                if (v37->field_0 == v37->field_10 && v26 <= 0 || v37->field_0 == v37->field_10 && v26 > 0)
                                {
                                    v32 = v49 - v33 >> 5;
                                    v19 = v31 - v31 >> 5;
                                    break;
                                }
                                if (v26 <= 0 && v37->field_0 != v37->field_10 || v37->field_0 != v37->field_10 && v26 > 0)
                                {
                                    v38 = v47;
                                }
                            }
                            else
                            {
                                v38 = 18446744069414584319;
                            }
                        }
                        if (v37->field_30 == 0 && (v37->field_18 == v31 || v38 == 0))
                        {
                            v31 = v33;
                            if (v33 != v37->field_10)
                            {
                                v47 = v38 - 1;
                                if (v38 == 0)
                                {
                                }
                                else
                                {
                                    while (true)
                                    {
                                        v37->field_0 = v31 - 32;
                                        write_unique();
                                        v31 = v37->field_0;
                                        if (v37->field_0 != v37->field_10)
                                        {
                                            v47 -= 1;
                                            break;
                                        }
                                        else
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                            if (v38 == 0 || v33 == v37->field_10)
                            {
                                break;
                            }
                        }
                    }
                    if (v37->field_18 != v31 && v38 != 0 && (v37->field_0 == v37->field_10 || v26 <= 0) && (v37->field_0 == v37->field_10 || v26 > 0))
                    {
                        v39 = v37->field_28;
                    }
                    else if (v37->field_30 == 0 && (v37->field_18 == v31 || v38 == 0))
                    {
                        v50 = v49 - v32;
                        v44 = v45 - v19;
                        v37->field_30 = v44;
                        v39 -= v50 >> 5;
                        v37->field_28 = v39;
                    }
                }
                if (v49 == v41 || v37->field_30 != v19)
                {
                    v39 = v37->field_28;
                }
                if (v37->field_30 != v19 && v37->field_18 != v31 && (v32 == v39 || v49 != v41))
                {
                    v47 = v38 - 1;
                    if (v38 != 0)
                    {
                        v33 = v37;
                        v36 = v47;
                        do
                        {
                            v36[1] = rcx<8> - 32;
                            write_unique();
                            v31 = v36[1];
                            if (v36[1] == v36[3])
                            {
                                break;
                            }
                            v36 -= 1;
                        }
                        while (v36 != 18446744069414584319);
                        v36 = v33;
                        /* goto 4241139; */
                    }
                }
            }
            v50 = v49 - v32;
            v44 = v45 - v19;
            v37->field_30 = v44;
            v39 -= v50 >> 5;
            v37->field_28 = v39;
            if (((long long)v42) == 0)
            {
                queue_check_insert.part.0();
            }
            if (v37->field_50 > 1)
            {
                pthread_mutex_lock();
                if (v37->field_38->field_54 == 0)
                {
                    queue_check_insert.part.0();
                }
                pthread_mutex_unlock();
            }
            else if (v37->field_30 + v37->field_28 == 0)
            {
                queue_insert();
            }
            pthread_mutex_unlock();
        }
        pthread_mutex_unlock();
        queue_insert();
        v35 = v17;
        return v16 ^ *(v51 + 0x28);
    }
}
