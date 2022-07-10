typedef struct struct_0 {
    char field_0;
} struct_0;

int memchr2()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rsi
    char v15;  // sil
    unsigned long long v16;  // rdi
    unsigned long long v17;  // r8
    unsigned long long v18;  // r9
    unsigned long long v19;  // r10
    struct_0 * v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long v7;  // rdx
    char v8;  // dl
    unsigned long long v9;  // rbx

    if (v15 != v8)
    {
        v18 = v13;
        v17 = v7;
        if (v4 != 0)
        {
            v19 = v16 + v4;
            v3 = v16;
            if ((((char)((int)v16)) & 7) == 0)
            {
            }
            else
            {
                while (true)
                {
                    v5 = ((long long)v3->field_0);
                    if (v3->field_0 == ((char)v7))
                    {
                        return v3;
                    }
                    else if (v5 != ((char)v13))
                    {
                        v3 += 1;
                        v4 = v19 - v3;
                        if (v3 != v19)
                        {
                            if (((long long)(v3 & 7)) == 0)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v4 = 0;
                            break;
                        }
                    }
                    else
                    {
                        return v3;
                    }
                }
            }
        }
        else
        {
            v3 = v16;
            v4 = 0;
        }
        v1 = &stack_base+0;
        v0 = v11;
        v14 = ((long long)(((int)v13) | ((int)v13) * 0x100)) | ((long long)(((int)v13) | ((int)v13) * 0x100)) * 0x10000;
        v6 = ((long long)(((int)v7) | ((int)v7) * 0x100)) | ((long long)(((int)v7) | ((int)v7) * 0x100)) * 0x10000;
        if (v4 > 7)
        {
            while (true)
            {
                v4 = rcx<8> - 8;
                v3 = rax<8> + 8;
            }
            if ((9259542123273814144 & (!(*(rax<8>) ^ (v6 * 0x100000000 | v6)) & (*(rax<8>) ^ (v6 * 0x100000000 | v6)) + 18374403896576507647 | (*(rax<8>) ^ (v14 * 0x100000000 | v14)) + 18374403896576507647 & !(*(rax<8>) ^ (v14 * 0x100000000 | v14)))) == 0)
            {
            }
            else
            {
                v4 += v3;
            }
        }
        if (v4 == 0 && v4 <= 7)
        {
            v9 = v0;
            return 0;
        }
        if (v4 != 0)
        {
            v4 += v3;
            while (true)
            {
                v6 = ((long long)*(rax<8>));
                if (*(rax<8>) == v18)
                {
                    v12 = v0;
                    return v3;
                }
                else if (v6 != v17)
                {
                    v3 = rax<8> + 1;
                    v9 = v0;
                    return 0;
                }
                else
                {
                    v12 = v0;
                    return v3;
                }
            }
        }
    }
}
