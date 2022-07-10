int strintcmp()
{
    BOT tmp_4;  // tmp #4
    BOT tmp_6;  // tmp #6
    BOT tmp_11;  // tmp #11
    BOT tmp_10;  // tmp #10
    char [2]|unsigned int|unsigned long long v1;  // rax
    unsigned int|unsigned long long v10;  // r9d
    unsigned int|unsigned long long v11;  // r10
    unsigned int|unsigned long v12;  // r11d
    char v13;  // cc_dep1
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    char v16;  // cc_dep2
    unsigned long long v2;  // rax
    unsigned long v3;  // rax
    unsigned int|unsigned long long v4;  // rcx
    unsigned int|unsigned long long v5;  // edx
    char [2]|unsigned long long v6;  // rsi
    char [2]|unsigned long long v7;  // rdi
    unsigned long long v8;  // r8

    v1 = ((long long)v7[0]);
    v5 = ((long long)v6[0]);
    if (!(v7[0] != 45))
    {
        do
        {
            v1 = ((long long)v7[1]);
            v7 += 1;
            tmp_4 = v1;
            v4 = ((long long)v1);
            v11 = ((long long)v1);
        }
        while (v1 == 128);
        v12 = ((int)v4) - 48;
        if (v6[0] != 45)
        {
            if (v12 <= 9)
            {
                return v8;
            }
            for (; v5 == 48 || v5 == 128; v6 += 1)
            {
                v5 = ((long long)v6[1]);
            }
            return v8;
        }
        do
        {
            v5 = ((long long)v6[1]);
            v6 += 1;
            tmp_6 = v5;
        }
        while (v5 == 48);
        if (v1 == v5)
        {
            if (v12 <= 9)
            {
                do
                {
                    v10 = ((long long)v7[1]);
                    v7 += 1;
                    tmp_6 = v10;
                    do
                    {
                        v4 = ((long long)v6[1]);
                        v6 += 1;
                        v5 = v4;
                        tmp_6 = v4;
                    }
                    while (tmp_6 == 128);
                    v1 = ((long long)v10);
                }
                while (v10 == v4 && ((int)(v1 - 48)) <= 9);
                v11 = v1;
                v12 = v1 - 48;
                if (((int)v1) == 128)
                {
                    v1 = ((int)v4);
                    if (((int)(((long long)v4) - 48)) <= 9)
                    {
                        if (v1 != 128)
                        {
                            v10 = 0;
                            /* goto 4219986; */
                        }
                    }
                }
            }
            else
            {
                if (((int)v4) != 128)
                {
                    v4 = ((int)(((int)v4) - 48));
                    /* goto 4220658; */
                }
            }
        }
        if (v1 != v5 || v12 <= 9 && ((int)v1) != 128)
        {
            v2 = ((long long)v5);
        }
        if (v1 != v5 || v12 <= 9 && ((int)v1) != 128)
        {
            if (v5 != 128)
            {
                v4 = v2 - 48;
                v1 = ((long long)(v2 - v11));
            }
            else
            {
                v1 = ((long long)(v2 - v11));
                v4 = 80;
            }
            if (v12 <= 9)
            {
                v10 = 0;
                do
                {
                    v5 = ((long long)*(rdi<8> + 1));
                    v7 = rdi<8> + 1;
                    tmp_6 = v5;
                    v5 = ((int)(((int)v5) - 48));
                    v10 += 1;
                }
                while (((int)v5) - 48 <= 9);
                if (v4 > 9)
                {
                    return v8;
                }
            }
        }
        if (v1 == v5 && v12 > 9 || v1 != v5 && v12 > 9 || v12 > 9 && ((int)v1) != 128)
        {
            if ((v1 == v5 || v5 == 128) && (v5 == 128 || v12 > 9) && (v12 <= 9 || ((int)v4) == 128 || v1 != v5))
            {
                v4 = ((long long)v6[0]);
                v10 = ((long long)v7[0]);
            }
            if (v12 <= 9 && v5 != 128 || v1 != v5 && v5 != 128 || v1 == v5 && v12 > 9 && ((int)v4) != 128)
            {
                v10 = 0;
                if (v4 > 9)
                {
                    return v8;
                }
            }
        }
        if ((v1 == v5 || v5 == 128) && (v1 == v5 || v12 > 9) && (v5 == 128 || v12 > 9) && (v12 > 9 || v12 > 9) && (v12 <= 9 || ((int)v4) == 128 || v1 != v5) && (v1 != v5 || v12 > 9 || ((int)v1) != 128) || ((int)(((long long)v4) - 48)) <= 9 && v1 == v5 && v12 <= 9 && ((int)v1) == 128 && v1 == 128 || v1 == v5 && v12 <= 9 && ((int)v1) == 128 && ((int)(((long long)v4) - 48)) > 9)
        {
            if (v4 != 128)
            {
                if (v10 != 128)
                {
                    return v8;
                }
                else
                {
                    /* goto 4220320; */
                }
            }
            else
            {
                if (v10 != 128)
                {
                }
                else
                {
                    while (true)
                    {
                        v1 = ((long long)*(rsi<8> + 1));
                        v4 = ((long long)*(rdi<8> + 1));
                        v6 = rsi<8> + 1;
                        v7 = rdi<8> + 1;
                        v8 = v1 - 48;
                        tmp_11 = v1;
                        tmp_10 = v4;
                        if (tmp_11 == tmp_10)
                        {
                            return v8;
                        }
                        else
                        {
                            v5 = ((int)v4) - 48;
                            if (((int)v8) <= 9)
                            {
                                v1 = ((long long)(v1 - v4));
                                return v8;
                            }
                            else if (v5 > 9)
                            {
                                return v8;
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                }
                do
                {
                    v6 = rsi<8> + 1;
                    v1 = ((long long)v6[0]);
                }
                while (v6[0] == 48);
                v3 = ((long long)(v1 - 48 <= 9));
                return v3;
            }
            if (v10 == 128)
            {
                while (true)
                {
                    v1 = ((int)v7[0]);
                    if (v7[0] != 48)
                    {
                        break;
                    }
                    v7 += 1;
                }
                v1 = ((int)v1) - 48;
                return v8;
            }
        }
        if (v12 <= 9 && (v12 <= 9 || v1 != v5) && (v1 != v5 || ((int)v1) != 128) && v4 <= 9 || (v1 == v5 || v5 != 128) && (v1 == v5 || v12 > 9) && (v12 > 9 || v5 != 128) && (v12 > 9 || v12 > 9) && (v12 <= 9 || v1 != v5 || ((int)v4) != 128) && (v1 != v5 || v12 > 9 || ((int)v1) != 128) && v4 <= 9 || ((int)(((long long)v4) - 48)) <= 9 && v1 == v5 && v12 <= 9 && ((int)v1) == 128 && v1 != 128)
        {
            v1 = 0;
            do
            {
                v5 = ((long long)*(rsi<8> + 1));
                v6 = rsi<8> + 1;
                tmp_6 = v5;
                v5 = ((int)(((int)v5) - 48));
                v1 += 1;
            }
            while (((int)v5) - 48 <= 9);
            if (v1 != v10)
            {
                return v8;
            }
            else
            {
                return ((long long)(v1 == 0? 0 : ((int)r8<8>)));
            }
        }
    }
    else if (v6[0] != 45)
    {
        if (v7[0] == 48 || v1 == 128)
        {
            do
            {
                v1 = ((long long)v7[1]);
                v7 += 1;
                tmp_4 = v1;
            }
            while (v1 == 48);
        }
        if (v5 == 48 || v5 == 128)
        {
            do
            {
                v5 = ((long long)v6[1]);
                v6 += 1;
                tmp_6 = v5;
            }
            while (v5 == 48);
        }
        v13 = ((char)v5);
        v16 = ((char)v1);
        v5 = ((long long)v5);
        v1 = ((long long)v1);
        if (v13 == v16)
        {
            if (((int)(v5 - 48)) <= 9)
            {
                while (true)
                {
                    v1 = ((long long)*(rdi<8> + 1));
                    v7 = rdi<8> + 1;
                    tmp_4 = v1;
                    do
                    {
                        v5 = ((long long)*(rsi<8> + 1));
                        v6 = rsi<8> + 1;
                        tmp_6 = v5;
                    }
                    while (tmp_6 == 128);
                    v13 = ((char)v1);
                    v1 = ((long long)v1);
                    if (v13 != v5)
                    {
                        break;
                    }
                    v5 = v1;
                    break;
                }
            }
            else
            {
                v1 = v5;
            }
        }
        if (((int)v1) != 128)
        {
            v10 = ((int)v1) - 48;
            if (((int)v5) != 128)
            {
                v1 = ((long long)(v1 - v5));
                ((unsigned int)v4) = v5 - 48;
                if (v10 > 9)
                {
                    if (((int)((unsigned int)v4)) > 9)
                    {
                        return v8;
                    }
                    v1 = 0;
                    /* goto 4219618; */
                }
            }
            else
            {
                v4 = 80;
                if (v10 > 9)
                {
                    /* goto 4220136; */
                }
            }
            if (v10 <= 9)
            {
                v1 = 0;
                do
                {
                    v5 = ((long long)*(rdi<8> + 1));
                    v7 = rdi<8> + 1;
                    tmp_6 = v5;
                    v5 = ((int)(((int)v5) - 48));
                    v1 += 1;
                }
                while (((int)v5) - 48 <= 9);
                if (v4 > 9)
                {
                    return v8;
                }
            }
        }
        else if (((int)(v5 - 48)) <= 9)
        {
            if (((int)v5) != 128)
            {
                v1 = 0;
                /* goto 4219618; */
            }
        }
        if (((int)v1) == 128 && ((int)v5) == 128 || ((int)v1) == 128 && ((int)(v5 - 48)) > 9 || ((int)v5) == 128 && v10 > 9)
        {
            v1 = ((long long)v6[0]);
            if (!(v7[0] != 128))
            {
                v5 = ((long long)v7[1]);
                if (v1 != 128)
                {
                    v7 += 1;
                }
                else
                {
                    while (true)
                    {
                        v4 = ((long long)*(rsi<8> + 1));
                        v1 = ((long long)v5);
                        v6 = rsi<8> + 1;
                        v7 = rdi<8> + 1;
                        v8 = ((long long)v5) - 48;
                        tmp_10 = v4;
                        if (tmp_10 != v5)
                        {
                            v10 = ((long long)v4);
                            v11 = ((int)(((long long)v4) - 48));
                            if (((int)v8) <= 9)
                            {
                                v1 = ((long long)(v1 - v10));
                                return v8;
                            }
                            v1 = v6;
                            if (v11 > 9)
                            {
                                return v8;
                            }
                            else
                            {
                                break;
                            }
                        }
                        else if (((int)v8) > 9)
                        {
                            return v8;
                        }
                        else
                        {
                            v5 = ((long long)v7[1]);
                        }
                    }
                }
                for (; v5 == 48; v7 += 1)
                {
                    v5 = ((long long)v7[1]);
                }
                v5 = ((long long)(((int)v5) - 48));
                return v8;
            }
            else if (v1 != 128)
            {
                return v8;
            }
            else
            {
                v4 = ((long long)v6[1]);
                v1 = v6 + 1;
            }
            if (v1 == 128)
            {
                for (; v4 == 48; v1 += 1)
                {
                    v4 = ((long long)v1[1]);
                }
                v1 = ((long long)v4);
                v1 = ((int)v1) - 48;
                return v8;
            }
        }
        if ((v10 <= 9 || ((int)v5) != 128) && (((int)(v5 - 48)) <= 9 || ((int)v1) != 128) && (((int)((unsigned int)v4)) <= 9 || ((int)v1) == 128 || v10 <= 9) && (((int)v1) != 128 || ((int)v5) != 128) && (v4 <= 9 || ((int)v1) == 128 || v10 > 9))
        {
            v4 = 0;
            do
            {
                v5 = ((long long)*(rsi<8> + 1));
                v6 = rsi<8> + 1;
                tmp_6 = v5;
                v5 = ((int)(((int)v5) - 48));
                v4 += 1;
            }
            while (((int)v5) - 48 <= 9);
            v14 = v1;
            v15 = v4;
            if (v1 != v4)
            {
                return ((long long)(0 - ((int)(v14 < v15)) | 1));
            }
            return ((long long)(v1 == 0? 0 : ((int)r8<8>)));
        }
    }
    else
    {
        do
        {
            v5 = ((long long)v6[1]);
            v6 += 1;
            tmp_6 = v5;
        }
        while (v5 == 128);
        v5 = ((int)(((int)v5) - 48));
        if (((int)v5) - 48 <= 9)
        {
            return 1;
        }
        for (; v1 == 48 || v1 == 128; v7 += 1)
        {
            v1 = ((long long)v7[1]);
        }
        v1 = ((int)v1);
        v3 = ((long long)(v1 - 48 <= 9));
        return v3;
    }
}
