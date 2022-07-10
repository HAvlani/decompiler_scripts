typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern <missing-type> g_400000;

int build_charclass.isra.0()
{
    struct_0 *v0;  // [bp-0x38]
    unsigned long v1;  // [bp+0x8]
    char * v10;  // rdi
    char *|unsigned long long v11;  // rdi
    struct_0 * v12;  // r8
    unsigned long long v13;  // r9
    char *|unsigned long long v14;  // r12
    struct_0 * v15;  // r13
    unsigned long long v16;  // r15
    unsigned long long v17;  // cc_dep1
    unsigned long long v18;  // cc_dep1
    unsigned long long v19;  // cc_dep2
    unsigned long long v2;  // rax
    unsigned long v20;  // d
    unsigned long long v3;  // rax
    unsigned long|unsigned long long v4;  // rcx
    struct_0 *|char *|unsigned long long v5;  // rdx
    struct_0 *v6;  // rbx
    unsigned long long v7;  // rbp
    struct_0 *|char *|unsigned long long v8;  // rsi
    char * v9;  // rdi

    v15 = v4;
    v14 = v13;
    v7 = v11;
    v6 = v8;
    if ((((int)v1) & 0x400000) != 0)
    {
        v4 = 6;
        v11 = "upper";
        v8 = v13;
        while (v4 != 0)
        {
            v4 -= 1;
            v18 = ((long long)*(v8));
            v19 = ((long long)*(v11));
            v11 += v20;
            v8 += v20;
            break;
        }
        v17 = ((long long)(((char)(v18 > v19)) - 0 - ((char)(v18 < v19))));
        if (((char)v17) == 0)
        {
            v14 = "alpha";
        }
        else
        {
            v10 = "lower";
            v4 = 6;
            v8 = v13;
            while (v4 != 0)
            {
                v4 -= 1;
                v17 = ((long long)*(v8));
                v19 = ((long long)*(v10));
                v10 += v20;
                v8 += v20;
                break;
            }
            v9 = v5->field_0;
            v14 = (((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19)))) == 0? "alpha" : v13);
            v2 = v15->field_0;
        }
    }
    if ((((int)v1) & 0x400000) == 0 || ((char)v17) == 0)
    {
        v2 = v15->field_0;
        v9 = v5->field_0;
    }
    if (v12->field_0 == v15->field_0 && (((int)v1) & 0x400000) == 0 || v12->field_0 == v15->field_0 && ((char)v17) == 0 || v12->field_0 == v15->field_0 && (((int)v1) & 0x400000) != 0 && ((char)v17) != 0)
    {
        v16 = v2 * 2 + 1;
        v0 = v5;
        v9 = realloc(v9, (v2 * 2 + 1) * 8);
    }
    if (v12->field_0 == v15->field_0 || (((int)v1) & 0x400000) != 0)
    {
        if (v12->field_0 == v15->field_0 || ((char)v17) != 0)
        {
            if ((((int)v1) & 0x400000) == 0 || v12->field_0 == v15->field_0 || ((char)v17) == 0)
            {
                if (v9 != 0)
                {
                    v0->field_0 = v9;
                    v12->field_0 = v16;
                    v2 = v15->field_0;
                }
                else
                {
                    v3 = 12;
                    return v3;
                }
            }
        }
    }
    if (v9 != 0 || (((int)v1) & 0x400000) == 0 && v12->field_0 != v15->field_0 || ((char)v17) == 0 && v12->field_0 != v15->field_0 || (((int)v1) & 0x400000) != 0 && v12->field_0 != v15->field_0 && ((char)v17) != 0)
    {
        v15->field_0 = v2 + 1;
        v15 = v9 + v2 * 8;
        v15->field_0 = wctype(((int)v14));
        while (rcx<8> != 0)
        {
            v4 = rcx<8> - 1;
            v17 = ((long long)*(rsi<8>));
            v19 = ((long long)*(rdi<8>));
            v9 = rdi<8> + v20;
            v8 = rsi<8> + v20;
            break;
        }
        v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
        if (((char)v17) != 0)
        {
            v4 = 6;
            v9 = "cntrl";
            v8 = v14;
            while (v4 != 0)
            {
                v4 -= 1;
                v17 = ((long long)*(v8));
                v19 = ((long long)*(v9));
                v9 += v20;
                v8 += v20;
                break;
            }
            v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
            if (((char)v17) == 0)
            {
                v5 = *(__ctype_b_loc());
                if (v7 == 0)
                {
                    do
                    {
                        if (((long long)(*(v5 + (v4 << 1)) & 2)) != 0)
                        {
                            *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                        }
                        v4 += 1;
                    }
                    while (v4 != 0x100);
                    v3 = 0;
                    return v3;
                }
                v2 = 0;
                do
                {
                    if (((long long)(*(v5 + (v2 << 1)) & 2)) != 0)
                    {
                        v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                        *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                    }
                    v2 += 1;
                }
                while (v2 != 0x100);
                v3 = 0;
                return v3;
            }
            v4 = 6;
            v9 = "lower";
            v8 = v14;
            while (v4 != 0)
            {
                v4 -= 1;
                v17 = ((long long)*(v8));
                v19 = ((long long)*(v9));
                v9 += v20;
                v8 += v20;
                break;
            }
            v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
            if (((char)v17) != 0)
            {
                v4 = 6;
                v9 = "space";
                v8 = v14;
                while (v4 != 0)
                {
                    v4 -= 1;
                    v17 = ((long long)*(v8));
                    v19 = ((long long)*(v9));
                    v9 += v20;
                    v8 += v20;
                    break;
                }
                v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                if (((char)v17) == 0)
                {
                    v5 = *(__ctype_b_loc());
                    if (v7 == 0)
                    {
                        do
                        {
                            if (((long long)(*(v5 + (v4 << 1) + 1) & 32)) != 0)
                            {
                                *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                            }
                            v4 += 1;
                        }
                        while (v4 != 0x100);
                        v3 = 0;
                        return v3;
                    }
                    else
                    {
                        v2 = 0;
                        do
                        {
                            if (((long long)(*(v5 + (v2 << 1) + 1) & 32)) != 0)
                            {
                                v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                            }
                            v2 += 1;
                        }
                        while (v2 != 0x100);
                        v3 = 0;
                        return v3;
                    }
                }
                else
                {
                    v4 = 6;
                    v9 = "alpha";
                    v8 = v14;
                    while (v4 != 0)
                    {
                        v4 -= 1;
                        v17 = ((long long)*(v8));
                        v19 = ((long long)*(v9));
                        v9 += v20;
                        v8 += v20;
                        break;
                    }
                    v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                    if (((char)v17) != 0)
                    {
                        v4 = 6;
                        v9 = "digit";
                        v8 = v14;
                        while (v4 != 0)
                        {
                            v4 -= 1;
                            v17 = ((long long)*(v8));
                            v19 = ((long long)*(v9));
                            v9 += v20;
                            v8 += v20;
                            break;
                        }
                        v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                        if (((char)v17) == 0)
                        {
                            v5 = *(__ctype_b_loc());
                            if (v7 == 0)
                            {
                                do
                                {
                                    if (((long long)(*(v5 + (v4 << 1) + 1) & 8)) != 0)
                                    {
                                        *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                    }
                                    v4 += 1;
                                }
                                while (v4 != 0x100);
                                v3 = 0;
                                return v3;
                            }
                            else
                            {
                                v2 = 0;
                                do
                                {
                                    if (((long long)(*(v5 + (v2 << 1) + 1) & 8)) != 0)
                                    {
                                        v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                        *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                                    }
                                    v2 += 1;
                                }
                                while (v2 != 0x100);
                                v3 = 0;
                                return v3;
                            }
                        }
                        else
                        {
                            v4 = 6;
                            v9 = "print";
                            v8 = v14;
                            while (v4 != 0)
                            {
                                v4 -= 1;
                                v17 = ((long long)*(v8));
                                v19 = ((long long)*(v9));
                                v9 += v20;
                                v8 += v20;
                                break;
                            }
                            v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                            if (((char)v17) == 0)
                            {
                                v5 = *(__ctype_b_loc());
                                if (v7 == 0)
                                {
                                    do
                                    {
                                        if (((long long)(*(v5 + (v4 << 1) + 1) & 64)) != 0)
                                        {
                                            *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                        }
                                        v4 += 1;
                                    }
                                    while (v4 != 0x100);
                                    v3 = 0;
                                    return v3;
                                }
                                else
                                {
                                    v2 = 0;
                                    do
                                    {
                                        if (((long long)(*(v5 + (v2 << 1) + 1) & 64)) != 0)
                                        {
                                            v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                            *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                                        }
                                        v2 += 1;
                                    }
                                    while (v2 != 0x100);
                                    v3 = 0;
                                    return v3;
                                }
                            }
                            else
                            {
                                v4 = 6;
                                v9 = "upper";
                                v8 = v14;
                                while (v4 != 0)
                                {
                                    v4 -= 1;
                                    v17 = ((long long)*(v8));
                                    v19 = ((long long)*(v9));
                                    v9 += v20;
                                    v8 += v20;
                                    break;
                                }
                                v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                                if (((char)v17) == 0)
                                {
                                    v2 = *(__ctype_b_loc());
                                    if (v7 == 0)
                                    {
                                        do
                                        {
                                            if (((long long)(*(v2 + (v4 << 1) + 1) & 1)) != 0)
                                            {
                                                *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                            }
                                            v4 += 1;
                                        }
                                        while (v4 != 0x100);
                                        v3 = 0;
                                        return v3;
                                    }
                                    else
                                    {
                                        v5 = 0;
                                        do
                                        {
                                            if (((long long)(*(v2 + (v5 << 1) + 1) & 1)) != 0)
                                            {
                                                v8 = ((long long)(((int)(((long long)*(v7 + v5)) >> 3)) & 24));
                                                *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v5) & 63);
                                            }
                                            v5 += 1;
                                        }
                                        while (v5 != 0x100);
                                        v3 = 0;
                                        return v3;
                                    }
                                }
                                else
                                {
                                    v4 = 6;
                                    v9 = "blank";
                                    v8 = v14;
                                    while (v4 != 0)
                                    {
                                        v4 -= 1;
                                        v17 = ((long long)*(v8));
                                        v19 = ((long long)*(v9));
                                        v9 += v20;
                                        v8 += v20;
                                        break;
                                    }
                                    v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                                    if (((char)v17) == 0)
                                    {
                                        v5 = *(__ctype_b_loc());
                                        if (v7 == 0)
                                        {
                                            do
                                            {
                                                if (((long long)(*(v5 + (v4 << 1)) & 1)) != 0)
                                                {
                                                    *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                                }
                                                v4 += 1;
                                            }
                                            while (v4 != 0x100);
                                            v3 = 0;
                                            return v3;
                                        }
                                        else
                                        {
                                            v2 = 0;
                                            do
                                            {
                                                if (((long long)(*(v5 + (v2 << 1)) & 1)) != 0)
                                                {
                                                    v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                                    *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                                                }
                                                v2 += 1;
                                            }
                                            while (v2 != 0x100);
                                            v3 = 0;
                                            return v3;
                                        }
                                    }
                                    else
                                    {
                                        v4 = 6;
                                        v9 = "graph";
                                        v8 = v14;
                                        while (v4 != 0)
                                        {
                                            v4 -= 1;
                                            v17 = ((long long)*(v8));
                                            v19 = ((long long)*(v9));
                                            v9 += v20;
                                            v8 += v20;
                                            break;
                                        }
                                        v17 = ((long long)(((char)(v17 > v19)) - 0 - ((char)(v17 < v19))));
                                        if (((char)v17) == 0)
                                        {
                                            v8 = *(__ctype_b_loc());
                                            if (v7 == 0)
                                            {
                                                do
                                                {
                                                    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x6<64>, Conv(16->64, Load(addr=(rsi<8> + (rax<8> << 0x1<8>)), size=2, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
                                                    {
                                                        *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                                    }
                                                    v4 += 1;
                                                }
                                                while (v4 != 0x100);
                                                v3 = 0;
                                                return v3;
                                            }
                                            else
                                            {
                                                v2 = 0;
                                                do
                                                {
                                                    if (((char)[D] amd64g_calculate_condition(0x8<64>, 0x6<64>, Conv(16->64, Load(addr=(rsi<8> + (rax<8> << 0x1<8>)), size=2, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
                                                    {
                                                        v5 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                                        *(v6 + v5) = *(v6 + v5) | 1 << (*(v7 + v2) & 63);
                                                    }
                                                    v2 += 1;
                                                }
                                                while (v2 != 0x100);
                                                v3 = 0;
                                                return v3;
                                            }
                                        }
                                        else
                                        {
                                            v2 = strcmp(v14, "punct");
                                            if (v2 == 0)
                                            {
                                                v8 = *(__ctype_b_loc());
                                                if (v7 == 0)
                                                {
                                                    do
                                                    {
                                                        if (((long long)(*(v8 + (v4 << 1)) & 4)) != 0)
                                                        {
                                                            *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                                        }
                                                        v4 += 1;
                                                    }
                                                    while (v4 != 0x100);
                                                    v3 = 0;
                                                    return v3;
                                                }
                                                else
                                                {
                                                    v2 = 0;
                                                    do
                                                    {
                                                        if (((long long)(*(v8 + (v2 << 1)) & 4)) != 0)
                                                        {
                                                            v5 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                                            *(v6 + v5) = *(v6 + v5) | 1 << (*(v7 + v2) & 63);
                                                        }
                                                        v2 += 1;
                                                    }
                                                    while (v2 != 0x100);
                                                    v3 = 0;
                                                    return v3;
                                                }
                                            }
                                            else
                                            {
                                                v2 = strcmp(v14, "xdigit");
                                                if (v2 == 0)
                                                {
                                                    v8 = *(__ctype_b_loc());
                                                    if (v7 == 0)
                                                    {
                                                        do
                                                        {
                                                            if (((long long)(*(v8 + (v4 << 1) + 1) & 16)) != 0)
                                                            {
                                                                *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                                            }
                                                            v4 += 1;
                                                        }
                                                        while (v4 != 0x100);
                                                        v3 = 0;
                                                        return v3;
                                                    }
                                                    else
                                                    {
                                                        v2 = 0;
                                                        do
                                                        {
                                                            if (((long long)(*(v8 + (v2 << 1) + 1) & 16)) != 0)
                                                            {
                                                                v5 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                                                *(v6 + v5) = *(v6 + v5) | 1 << (*(v7 + v2) & 63);
                                                            }
                                                            v2 += 1;
                                                        }
                                                        while (v2 != 0x100);
                                                        v3 = 0;
                                                        return v3;
                                                    }
                                                }
                                                else
                                                {
                                                    v3 = 4;
                                                    return v3;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        v5 = *(__ctype_b_loc());
                        if (v7 == 0)
                        {
                            do
                            {
                                if (((long long)(*(v5 + (v4 << 1) + 1) & 4)) != 0)
                                {
                                    *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                                }
                                v4 += 1;
                            }
                            while (v4 != 0x100);
                            v3 = 0;
                            return v3;
                        }
                        else
                        {
                            v2 = 0;
                            do
                            {
                                if (((long long)(*(v5 + (v2 << 1) + 1) & 4)) != 0)
                                {
                                    v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                                    *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                                }
                                v2 += 1;
                            }
                            while (v2 != 0x100);
                            v3 = 0;
                            return v3;
                        }
                    }
                }
            }
            else
            {
                v5 = *(__ctype_b_loc());
                if (v7 == 0)
                {
                    do
                    {
                        if (((long long)(*(v5 + (v4 << 1) + 1) & 2)) != 0)
                        {
                            *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                        }
                        v4 += 1;
                    }
                    while (v4 != 0x100);
                    v3 = 0;
                    return v3;
                }
                else
                {
                    v2 = 0;
                    do
                    {
                        if (((long long)(*(v5 + (v2 << 1) + 1) & 2)) != 0)
                        {
                            v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                            *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                        }
                        v2 += 1;
                    }
                    while (v2 != 0x100);
                    v3 = 0;
                    return v3;
                }
            }
        }
        v5 = *(__ctype_b_loc());
        if (v7 == 0)
        {
            do
            {
                if (((long long)(*(v5 + (v4 << 1)) & 8)) != 0)
                {
                    *(v6 + (v4 >> 6) * 8) = *(v6 + (v4 >> 6) * 8) | 1 << (v4 & 63);
                }
                v4 += 1;
            }
            while (v4 != 0x100);
            v3 = 0;
            return v3;
        }
        else
        {
            v2 = 0;
            do
            {
                if (((long long)(*(v5 + (v2 << 1)) & 8)) != 0)
                {
                    v8 = ((long long)(((int)(((long long)*(v7 + v2)) >> 3)) & 24));
                    *(v6 + v8) = *(v6 + v8) | 1 << (*(v7 + v2) & 63);
                }
                v2 += 1;
            }
            while (v2 != 0x100);
            v3 = 0;
            return v3;
        }
    }
}
