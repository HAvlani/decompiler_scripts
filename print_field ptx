extern char edited_flag;
extern unsigned long long stdout[7];

int print_field()
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned int v10;  // edx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    char * v13;  // rbp
    unsigned long v14;  // rsi
    unsigned long long v15;  // rdi
    unsigned long v16;  // r12
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13
    unsigned long long v19;  // r13
    unsigned long v2;  // [bp-0x20]
    unsigned long long v20;  // r14
    unsigned long long v21;  // r14
    unsigned long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    char * v7;  // rax
    unsigned long v8;  // rax
    char *v9;  // rax

    if (v14 > v15)
    {
        v5 = v20;
        v4 = v19;
        v3 = v16;
        v2 = &stack_base+0;
        v13 = v15;
        v1 = v12;
        while (true)
        {
            v10 = ((int)*(v13));
            v12 = ((long long)*(v13));
            if (*(edited_flag + ((long long)v0)) != 0)
            {
                if (((char)v0) != 92)
                {
                    if (((char)(((long long)v0) <= 92)))
                    {
                        if (((char)v0) == 34)
                        {
                            v9 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v9) = 34;
                            }
                            else
                            {
                                __overflow();
                            }
                            v7 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v7) = 34;
                                /* goto 4220384; */
                            }
                            else
                            {
                                __overflow();
                                /* goto 4220384; */
                            }
                        }
                    }
                    else
                    {
                        if (((long long)(((char)(((long long)v0) - 123)) & 253)) == 0)
                        {
                            __printf_chk(0x1, "$\\%c$", v0);
                            /* goto 4220384; */
                        }
                    }
                    if (((char)(((long long)v0) <= 92)) && ((char)v0) != 34 || ((long long)(((char)(((long long)v0) - 123)) & 253)) != 0 && !(((char)(((long long)v0) <= 92))))
                    {
                        if ((((char)v0) == 95 || ((char)(((long long)v0) <= 92))) && ((((long long)v0) - 35 & 255) <= 3 || !(((char)(((long long)v0) <= 92)))))
                        {
                            v7 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v7) = 92;
                                /* goto 4220409; */
                            }
                            else
                            {
                                v0 = v10;
                                __overflow();
                                /* goto 4220409; */
                            }
                        }
                        if ((((char)(((long long)v0) <= 92)) || ((char)v0) != 95) && ((((long long)v0) - 35 & 255) > 3 || !(((char)(((long long)v0) <= 92)))))
                        {
                            v7 = *(stdout + 40);
                            if (*(stdout + 40) < *(stdout + 48))
                            {
                                *(stdout + 40) = *(stdout + 40) + 1;
                                *(v7) = 32;
                                /* goto 4220384; */
                            }
                            else
                            {
                                __overflow();
                                /* goto 4220384; */
                            }
                        }
                    }
                }
                else
                {
                    fwrite_unlocked("\\backslash{}", 0x1, 0xc, stdout);
                    /* goto 4220384; */
                }
            }
            if (...)
            {
                v7 = *(stdout + 40);
            }
            if (...)
            {
                if (*(stdout + 40) < *(stdout + 48))
                {
                    v13 += 1;
                    *(stdout + 40) = *(stdout + 40) + 1;
                    *(v7) = v12;
                    v11 = v1;
                    v17 = v3;
                    v18 = v4;
                    v21 = v5;
                    return v7;
                }
                __overflow();
            }
            if (...)
            {
                v13 += 1;
                v11 = v1;
                v17 = v3;
                v18 = v4;
                v21 = v5;
                return v7;
            }
        }
    }
    return v8;
}
