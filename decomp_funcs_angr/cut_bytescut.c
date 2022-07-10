extern unsigned long long current_rp[2];
extern struct_0 frp;
extern char line_delim;
extern <missing-type> output_delimiter_default;
extern struct_0 output_delimiter_length;
extern struct_0 output_delimiter_string;
extern unsigned long long stdout[7];

int cut_bytes()
{
    char * v1;  // rax
    unsigned long long v10;  // rdi
    char v11;  // r13b
    char|unsigned long long v12;  // r14
    unsigned long long v13;  // cc_dep1
    char|unsigned long long|char * v2;  // rax
    unsigned long long [2] v4;  // rax
    unsigned long long [7] v5;  // rcx
    char *v6;  // rdx
    unsigned long long v7[3];  // rbx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rsi

    v12 = 0;
    current_rp = frp;
    v8 = 0;
    v7 = v10;
    while (true)
    {
        v1 = v7[1];
        if (v7[2] > v7[1] || v7[2] > v7[1])
        {
            v9 = ((long long)line_delim);
            v7[1] = rax<8> + 1;
        }
        v4 = current_rp;
        v8 += 1;
        if (v8 > *(current_rp + 8))
        {
            v4 = current_rp + 16;
            current_rp = current_rp + 16;
        }
        v2 = v4[0];
        if (v2 <= v8)
        {
            v5 = stdout;
            if (output_delimiter_string != 4247793)
            {
                v2 = ((char)(v2 == v8));
                v13 = ((long long)(((char)v12) & ((char)(v2 == v8))));
                v12 = ((char)v12) & ((char)(v2 == v8));
                if (((char)v13) == 0)
                {
                    v12 = 1;
                }
                else
                {
                    fwrite_unlocked(output_delimiter_string, 0x1, output_delimiter_length, stdout);
                    v5 = stdout;
                    v2 = *(stdout + 40);
                    if (*(stdout + 40) >= *(stdout + 48))
                    {
                        break;
                    }
                }
            }
            if (((char)v13) == 0 || output_delimiter_string == 4247793)
            {
                v2 = v5[5];
                if (v5[5] >= v5[6])
                {
                    break;
                }
            }
            if ((v5[5] < v5[6] || ((char)v13) != 0) && (v5[5] < v5[6] || output_delimiter_string != 4247793) && (((char)v13) == 0 || output_delimiter_string == 4247793 || *(stdout + 40) < *(stdout + 48)))
            {
                v5[5] = v2 + 1;
                *(v2) = v11;
                v1 = v7[1];
            }
        }
        if (v2 <= v8 && (v5[5] < v5[6] || ((char)v13) != 0) && (v5[5] < v5[6] || output_delimiter_string != 4247793) && (((char)v13) == 0 || output_delimiter_string == 4247793 || *(stdout + 40) < *(stdout + 48)) && v7[2] <= v7[1] || v7[2] <= v7[1])
        {
            v9 = __uflow();
            if (((int)line_delim) != ((int)v9))
            {
                if (((int)v9) != -1)
                {
                    /* goto 4207018; */
                }
                else if (v8 != 0)
                {
                    v6 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v6) = line_delim;
                        return v9;
                    }
                }
                else
                {
                    return v9;
                }
            }
        }
        if (...)
        {
            v2 = *(stdout + 40);
            if (*(stdout + 40) < *(stdout + 48))
            {
                *(stdout + 40) = *(stdout + 40) + 1;
                *(v2) = sil<1>;
            }
            else
            {
                __overflow();
            }
            current_rp = frp;
        }
    }
    __overflow();
    /* goto 4206976; */
}
