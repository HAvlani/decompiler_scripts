typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

int strnumcmp()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_6;  // tmp #6
    BOT tmp_9;  // tmp #9
    BOT tmp_11;  // tmp #11
    BOT tmp_10;  // tmp #10
    unsigned long|unsigned long long|unsigned int|char [2] v1;  // rax
    unsigned long long v10;  // rax
    unsigned long long|unsigned int v11;  // ecx
    unsigned int v12;  // ecx
    unsigned long|unsigned long long|unsigned int v13;  // edx
    unsigned long v14;  // rdx
    char [2]|struct_0 *|unsigned int v15;  // rsi
    char [2] v16;  // rdi
    unsigned long long v17;  // rdi
    unsigned long long v18;  // rdi
    unsigned long long|unsigned int v19;  // r8
    unsigned long long v2;  // rax
    unsigned long long|unsigned int v20;  // r9
    unsigned long|unsigned long long|unsigned int v21;  // r10
    unsigned int v22;  // r10d
    char v3;  // al
    char v4;  // al
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long v9;  // rax

    v20 = ((long long)v16[0]);
    v19 = ((long long)v15[0]);
    if (!(v16[0] != 45))
    {
        do
        {
            v1 = ((long long)v16[1]);
            v16 += 1;
            tmp_4 = v1;
            v21 = ((long long)v1);
        }
        while (v11 == ((int)v1));
        if (v15[0] != 45)
        {
            if (((int)v14) == ((int)v21))
            {
                do
                {
                    v1 = ((long long)v16[1]);
                    v16 += 1;
                    tmp_4 = v1;
                }
                while (tmp_4 == 48);
                v21 = ((int)v1);
            }
            v21 = ((int)v21) - 48;
            if (v21 <= 9)
            {
                return -1;
            }
            while (true)
            {
                if (v19 != 48)
                {
                    v21 = ((long long)v19);
                    if (v11 != ((int)v19))
                    {
                        break;
                    }
                }
                v19 = ((long long)v15[1]);
                v15 += 1;
            }
            if (((int)v14) != ((int)v21))
            {
                v22 = ((int)v21) - 48;
                return ((long long)(0 - ((int)(v22 < 10))));
            }
            else
            {
                do
                {
                    v19 = ((long long)*(rsi<8> + 1));
                    v15 = rsi<8> + 1;
                    tmp_6 = v19;
                }
                while (tmp_6 == 48);
                v21 = ((int)v19);
                v22 = ((int)v21) - 48;
                return ((long long)(0 - ((int)(v22 < 10))));
            }
        }
        do
        {
            v19 = ((long long)v15[1]);
            v15 += 1;
            tmp_6 = v19;
            v20 = ((long long)v19);
        }
        while (v11 == ((int)v19));
        while (v1 == v19 && ((int)(v20 - 48)) <= 9)
        {
            do
            {
                v21 = ((long long)v16[1]);
                v16 += 1;
                v1 = v21;
            }
            while (v11 == ((int)v21));
            while (true)
            {
                v20 = ((long long)v15[1]);
                v15 += 1;
                v19 = v20;
                if (v11 != ((int)v20))
                {
                    break;
                }
                break;
                v20 = ((long long)v15->field_1);
                v15 += 1;
                v19 = v20;
            }
        }
        if (((int)(v20 - 48)) <= 9 || ((int)v13) != ((int)v21))
        {
            v19 = ((int)v21) - 48;
            if (((int)v13) != ((int)v20))
            {
                tmp_9 = v20;
                v20 = ((long long)(((int)v20) - 48));
                v1 = ((int)(tmp_9 - v21));
                if (v19 > 9)
                {
                    v19 = 0;
                    if (((int)v20) > 9)
                    {
                        return 0;
                    }
                }
            }
            else
            {
                v20 = ((int)v13) - 48;
                v1 = ((int)(v13 - v21));
                if (v19 > 9)
                {
                    /* goto 4270549; */
                }
            }
            if (v19 <= 9)
            {
                v19 = 0;
                do
                {
                    v13 = ((int)*(rdi<8> + 1));
                    v16 = rdi<8> + 1;
                    v13 = ((int)v13) - 48;
                    v19 += 1;
                }
                while (v13 <= 9);
                if (((unsigned int)v20) > 9)
                {
                    return ((long long)(0 - ((int)(v19 != 0))));
                }
            }
            if ((((int)v20) <= 9 || v19 <= 9) && (((unsigned int)v20) <= 9 || v19 > 9) && (v19 <= 9 || ((int)v13) != ((int)v20)))
            {
                v18 = 0;
                do
                {
                    v13 = ((int)*(rsi<8> + 1));
                    v15 = rsi<8> + 1;
                    v13 = ((int)v13) - 48;
                    v18 += 1;
                }
                while (v13 <= 9);
                if (v18 != v19)
                {
                    return ((long long)((0 - ((int)(v19 < v18)) & 2) - 1));
                }
                else
                {
                    return ((long long)(v18 == 0? 0 : ((int)rax<8>)));
                }
            }
        }
        if ((((int)v13) == ((int)v21) || ((int)v13) == ((int)v20)) && (((int)v13) == ((int)v21) || v19 > 9) && (((int)v13) == ((int)v20) || ((int)(v20 - 48)) > 9) && (v19 > 9 || ((int)(v20 - 48)) > 9))
        {
            v11 = ((long long)v16[0]);
            if (v13 != v15[0])
            {
                v1 = 0;
                if (v13 != v11)
                {
                    return v1;
                }
                else
                {
                    /* goto 4270576; */
                }
            }
            else
            {
                if (v13 != v11)
                {
                }
                else
                {
                    while (true)
                    {
                        v1 = ((long long)*(rsi<8> + 1));
                        v11 = ((long long)*(rdi<8> + 1));
                        v15 = rsi<8> + 1;
                        v16 = rdi<8> + 1;
                        v19 = ((int)v1) - 48;
                        tmp_11 = v1;
                        tmp_10 = v11;
                        if (tmp_11 == tmp_10)
                        {
                            return 0;
                        }
                        else
                        {
                            v13 = ((int)v11) - 48;
                            if (v19 <= 9)
                            {
                                v5 = ((long long)(v1 - v11));
                                return v5;
                            }
                            else
                            {
                                return 0;
                            }
                        }
                    }
                }
                do
                {
                    v15 = rsi<8> + 1;
                    v1 = ((long long)v15[0]);
                }
                while (v15[0] == 48);
                v9 = ((long long)(v1 - 48 <= 9));
                return v9;
            }
            if (v13 == v11)
            {
                while (true)
                {
                    v1 = ((long long)v16[0]);
                    if (v16[0] != 48)
                    {
                        break;
                    }
                    v16 += 1;
                }
                v6 = ((long long)(0 - ((int)(v1 - 48 < 10))));
                return v6;
            }
        }
    }
    else if (v15[0] == 45)
    {
        do
        {
            v7 = ((long long)v15[1]);
            v15 += 1;
            tmp_4 = v7;
        }
        while (v11 == ((int)v7));
        if (((int)v13) == ((int)v7))
        {
            while (true)
            {
                v7 = ((long long)v15[1]);
                v15 += 1;
                tmp_4 = v7;
                if (tmp_4 != 48)
                {
                    break;
                }
                break;
                v7 = ((long long)v15->field_1);
                v15 += 1;
                tmp_4 = v7;
            }
        }
        v15 = ((int)v7) - 48;
        v1 = 1;
        if (v15 <= 9)
        {
            return v1;
        }
        while (true)
        {
            if (v20 != 48)
            {
                v1 = ((long long)v20);
                if (v11 != ((int)v20))
                {
                    break;
                }
            }
            v20 = ((long long)v16[1]);
            v16 += 1;
        }
        if (((int)v13) != ((int)v1))
        {
            v9 = ((long long)(v1 - 48 <= 9));
            return v9;
        }
        else
        {
            do
            {
                v20 = ((long long)*(rdi<8> + 1));
                v16 = rdi<8> + 1;
                tmp_6 = v20;
            }
            while (tmp_6 == 48);
            v1 = ((int)v20);
            v9 = ((long long)(v1 - 48 <= 9));
            return v9;
        }
    }
    else
    {
        while (true)
        {
            if (v20 != 48)
            {
                v1 = ((long long)v20);
                if (v11 != ((int)v20))
                {
                    break;
                }
            }
            v20 = ((long long)v16[1]);
            v16 += 1;
        }
        do
        {
            v19 = ((long long)v15[1]);
            v15 += 1;
            tmp_6 = v19;
            v21 = ((long long)v19);
        }
        while (v11 == ((int)v19));
        while (r9b<1> == r8b<1> && ((int)(v21 - 48)) <= 9)
        {
            do
            {
                v1 = ((long long)*(rdi<8> + 1));
                v16 = rdi<8> + 1;
                v20 = v1;
            }
            while (v11 == ((int)v1));
            while (true)
            {
                v21 = ((long long)*(rsi<8> + 1));
                v15 = rsi<8> + 1;
                v19 = v21;
                if (v11 != ((int)v21))
                {
                    break;
                }
                break;
                v21 = ((long long)v15->field_1);
                v15 += 1;
                v19 = v21;
            }
        }
        if (((int)(v21 - 48)) <= 9 || ((int)v13) != ((int)v1))
        {
            v19 = ((int)v1) - 48;
            if (((int)v13) != ((int)v21))
            {
                v1 = ((int)(v1 - v21));
                v21 = ((int)(((int)v21) - 48));
                if (v19 > 9)
                {
                    v19 = 0;
                    if (v21 > 9)
                    {
                        return 0;
                    }
                }
            }
            v1 = ((int)(v1 - v13));
            v21 = v13 - 48;
            if (v19 > 9)
            {
                /* goto 4270270; */
            }
            if (v19 <= 9)
            {
                v19 = 0;
                do
                {
                    v13 = ((int)*(rdi<8> + 1));
                    v16 = rdi<8> + 1;
                    v13 = ((int)v13) - 48;
                    v19 += 1;
                }
                while (v13 <= 9);
                if (((unsigned int)v21) > 9)
                {
                    v8 = 0;
                    v4 = ((char)(v19 != 0));
                    return rax<8>;
                }
            }
            if ((v21 <= 9 || v19 <= 9) && (v19 <= 9 || ((int)v13) != ((int)v21)) && (((unsigned int)v21) <= 9 || v19 > 9))
            {
                v17 = 0;
                do
                {
                    v13 = ((int)*(rsi<8> + 1));
                    v15 = rsi<8> + 1;
                    v13 = ((int)v13) - 48;
                    v17 += 1;
                }
                while (v13 <= 9);
                if (v19 != v17)
                {
                    return ((long long)(0 - ((int)(v19 < v17)) | 1));
                }
                return ((long long)(v19 == 0? 0 : ((int)rax<8>)));
            }
        }
        if ((((int)v13) == ((int)v21) || ((int)v13) == ((int)v1)) && (((int)v13) == ((int)v21) || ((int)(v21 - 48)) > 9) && (((int)v13) == ((int)v1) || v19 > 9) && (v19 > 9 || ((int)(v21 - 48)) > 9))
        {
            v19 = ((long long)v15[0]);
            if (v13 != v16[0])
            {
                v1 = 0;
                if (v13 != v19)
                {
                    return v1;
                }
                v13 = ((long long)v15[1]);
                v1 = v15 + 1;
            }
            else
            {
                v11 = ((long long)v16[1]);
                if (v13 != v19)
                {
                    v16 += 1;
                }
                else
                {
                    while (true)
                    {
                        v13 = ((long long)*(rsi<8> + 1));
                        v1 = ((long long)v11);
                        v15 = rsi<8> + 1;
                        v16 = rdi<8> + 1;
                        v19 = ((int)(((long long)v11) - 48));
                        tmp_10 = v13;
                        if (tmp_10 != v11)
                        {
                            v20 = ((long long)v13);
                            v21 = ((int)(((long long)v13) - 48));
                            if (v19 <= 9)
                            {
                                v2 = ((long long)(v1 - v20));
                                return v2;
                            }
                            v1 = 0;
                            if (v21 > 9)
                            {
                                return v1;
                            }
                            else
                            {
                                v1 = v15;
                                break;
                            }
                        }
                        else if (v19 > 9)
                        {
                            return 0;
                        }
                        else
                        {
                            v11 = ((long long)v16[1]);
                        }
                    }
                }
                for (; v11 == 48; v16 += 1)
                {
                    v11 = ((long long)v16[1]);
                }
                v12 = ((int)(((int)v11) - 48));
                v10 = 0;
                v3 = ((char)(((int)v11) - 48 <= 9));
                return rax<8>;
            }
            if (v13 == v19)
            {
                for (; v13 == 48; v1 += 1)
                {
                    v13 = ((long long)v1[1]);
                }
                v1 = ((int)v13);
                v6 = ((long long)(0 - ((int)(v1 - 48 < 10))));
                return v6;
            }
        }
    }
}
