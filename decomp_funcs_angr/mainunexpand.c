typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

extern char convert_entire_line;
extern struct_0 exit_status;
extern unsigned int g_407087;
extern unsigned int g_4070c0;
extern unsigned int g_4070dc;
extern unsigned int g_4070eb;
extern unsigned int g_407102;
extern unsigned int g_407448;
extern unsigned int longopts;
extern struct_0 optind;
extern unsigned long long stdout[7];

int main()
{
    BOT tmp_5;  // tmp #5
    BOT tmp_14;  // tmp #14
    char v0;  // [bp-0x5b]
    char v1;  // [bp-0x5a]
    unsigned long|unsigned long long|unsigned int|char v14;  // rbx
    unsigned long long v15;  // rbp
    unsigned int v16;  // esi
    unsigned int v17;  // edi
    unsigned long long|unsigned int v18;  // r10
    unsigned long long v19;  // r12
    char v2;  // [bp-0x59]
    struct_2 *|unsigned long long v20;  // r13
    unsigned long long [3] v21;  // r14
    unsigned long long v22;  // r15
    unsigned long long v23;  // cc_dep1
    char v3;  // [bp-0x49]
    unsigned long|unsigned long long v4;  // [bp-0x48]
    unsigned long long v6;  // rax
    char *|unsigned long long v7;  // rax

    v20 = 0;
    v19 = 0;
    set_program_name();
    setlocale();
    bindtextdomain(&g_407087, &g_407448);
    textdomain(&g_407087);
    atexit();
    while (true)
    {
        v6 = getopt_long(v17, v16, &g_4070dc, &longopts, 0x0);
        if (((int)v6) == -1)
        {
            if (((long long)v19) == 0)
            {
                break;
            }
            convert_entire_line = 0;
            break;
        }
        else if (((int)v6) != 97)
        {
            if (!(((char)(v6 <= 97))))
            {
                if (((int)v6) == 116)
                {
                    convert_entire_line = 1;
                    parse_tab_stops();
                }
                if (((int)v6) == 128)
                {
                    v19 = 1;
                }
            }
            else if (((int)v6) == 44)
            {
                v20 = 0;
                add_tab_stop();
            }
            else if (((char)(v6 <= 44)))
            {
                if (((int)v6) == -131)
                {
                    version_etc();
                    exit(0x0); /* do not return */
                }
                if (((int)v6) == -130)
                {
                    usage(); /* do not return */
                }
            }
            else if (((int)v6) == 63)
            {
                usage(); /* do not return */
            }
            if ((((char)(v6 <= 97)) || ((int)v6) != 128) && (((char)(v6 <= 97)) || ((int)v6) != 116) && (!(((char)(v6 <= 97))) || ((int)v6) != 44) && (((char)(v6 <= 44)) || !(((char)(v6 <= 97))) || ((int)v6) != 63) && (!(((char)(v6 <= 97))) || ((int)v6) != -130 || !(((char)(v6 <= 44)))) && (!(((char)(v6 <= 97))) || !(((char)(v6 <= 44))) || ((int)v6) != -131))
            {
                if (((long long)v20) == 0)
                {
                    v6 = ((long long)(((int)v6) - 48));
                    v20 = 1;
                    v22 = v6;
                }
                else if (v22 <= 1844674407370955161)
                {
                    v6 = ((long long)(((int)v6) - 48)) + v22 * 10;
                    v22 = v6;
                    if (v22 < v22)
                    {
                        error(0x1, 0x0, dcgettext(0x0, &g_4070c0, 0x5));
                    }
                }
                else
                {
                    error(0x1, 0x0, dcgettext(0x0, &g_4070c0, 0x5));
                }
            }
        }
        else
        {
            convert_entire_line = 1;
        }
    }
    if (((long long)v20) != 0)
    {
        add_tab_stop();
    }
    finalize_tab_stops();
    set_file_list();
    v21 = (long long)next_file();
    if (v21 != 0)
    {
        v22 = (long long)xmalloc();
        while (true)
        {
            v0 = 1;
            v15 = 0;
            v19 = 0;
            v14 = 1;
            v4 = 0;
            v1 = 0;
            while (true)
            {
                v7 = v21[1];
                if (v21[1] < v21[2])
                {
                    v21[1] = v7 + 1;
                    v20 = ((long long)*(v7));
                }
                else
                {
                    v20 = __uflow(((int)v21));
                    if (((int)v20) < 0)
                    {
                        v21 = (long long)next_file();
                        if (v21 == 0)
                        {
                            if (((long long)v14) != 0)
                            {
                                v7 = ((long long)*(*(__ctype_b_loc()) + v20 * 2));
                                v18 = ((long long)(((int)v7) & 1));
                                tmp_5 = v7;
                                if (((long long)(tmp_5 & 1)) != 0)
                                {
                                    /* goto 4204994; */
                                }
                            }
                            else
                            {
                                rpl_free();
                                cleanup_file_list_stdin();
                                return ((long long)exit_status);
                            }
                        }
                    }
                }
                if (((long long)v14) != 0 && (v21[1] < v21[2] || ((int)v20) >= 0))
                {
                    v7 = ((long long)*(*(__ctype_b_loc()) + r13<8> * 2));
                    v18 = ((long long)(((int)v7) & 1));
                    tmp_5 = v7;
                    if (((long long)(tmp_5 & 1)) == 0 && ((int)r13<8>) == 8)
                    {
                        v4 -= ((long long)(v4 != 0));
                        if (v15 != 0)
                        {
                            v0 = v18;
                        }
                        else
                        {
                            v0 = v18;
                            v14 = ((long long)(((int)convert_entire_line) | ((int)v18)));
                            /* goto 4204889; */
                        }
                    }
                }
                if (((long long)(tmp_5 & 1)) == 0)
                {
                    if (((int)v20) < 0 || ((long long)v14) != 0)
                    {
                        if (((int)v20) < 0 || ((int)r13<8>) != 8)
                        {
                            if (((long long)v14) != 0 || v21[1] >= v21[2])
                            {
                                if (v21[1] >= v21[2] || ((int)r13<8>) != 8)
                                {
                                    if (v21 == 0 || v21[1] < v21[2] || ((int)v20) >= 0)
                                    {
                                        if (v21[1] < v21[2] || ((long long)v14) != 0 || ((int)v20) >= 0)
                                        {
                                            if (v19 + 1 != 0)
                                            {
                                                v14 = 1;
                                                /* goto 4204793; */
                                            }
                                            else
                                            {
                                                error(0x1, 0x0, dcgettext(0x0, &g_4070eb, 0x5));
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
                    if (((int)v20) < 0 || ((long long)v14) != 0)
                    {
                        if (((long long)v14) != 0 || v21[1] >= v21[2])
                        {
                            if (v21 == 0 || v21[1] < v21[2] || ((int)v20) >= 0)
                            {
                                if (v21[1] < v21[2] || ((long long)v14) != 0 || ((int)v20) >= 0)
                                {
                                    v2 = r10b<1>;
                                    v7 = get_next_tab_column();
                                    v18 = ((long long)v2);
                                    if (v3 != 0)
                                    {
                                        v14 = 0;
                                        /* goto 4204793; */
                                    }
                                    else if (v19 > v7)
                                    {
                                        error(0x1, 0x0, dcgettext(0x0, &g_4070eb, 0x5));
                                    }
                                    else if (((int)r13<8>) != 9)
                                    {
                                        v19 += 1;
                                        v14 = ((int)(((int)v0) ^ 1));
                                        v23 = ((long long)(((char)(((int)v0) ^ 1)) | ((char)(v7 != v19))));
                                        v14 = ((char)(((int)v0) ^ 1)) | ((char)(v7 != v19));
                                        if (((char)v23) == 0)
                                        {
                                            *(v22) = 9;
                                        }
                                        else
                                        {
                                            tmp_14 = ((long long)v1);
                                            *(v22 + v15) = r13b<1>;
                                            v0 = v14;
                                            v15 += 1;
                                            v1 = ((char)(v7 == v19? ((int)v14) : ((int)tmp_14)));
                                        }
                                    }
                                    else if (v15 != 0)
                                    {
                                        *(v22) = 9;
                                    }
                                }
                            }
                        }
                    }
                }
                if (...)
                {
                    v15 = ((long long)v1);
                    v14 = 1;
                    v20 = 9;
                }
                if (...)
                {
                    v0 = r10b<1>;
                }
                if (...)
                {
                    if (v15 > 1 && v1 != 0)
                    {
                        *(v22) = 9;
                    }
                    v1 = r10b<1>;
                    v7 = fwrite_unlocked(v22, 0x1, v15, stdout);
                    v18 = ((int)v1);
                    if (v15 == v7)
                    {
                        v1 = 0;
                    }
                    else
                    {
                        error(0x1, *(__errno_location()), dcgettext(0x0, &g_407102, 0x5));
                    }
                }
                if (...)
                {
                    v14 = ((long long)(reg_40<4> & reg_96<4>));
                    if (((int)r13<8>) >= 0)
                    {
                        v15 = 0;
                    }
                    else
                    {
                        rpl_free();
                        cleanup_file_list_stdin();
                        return ((long long)exit_status);
                    }
                }
                if (...)
                {
                    v7 = *(stdout + 40);
                    if (*(stdout + 40) < *(stdout + 48))
                    {
                        *(stdout + 40) = *(stdout + 40) + 1;
                        *(v7) = r13b<1>;
                    }
                    else
                    {
                        v7 = __overflow();
                        if (v7 < 0)
                        {
                            error(0x1, *(__errno_location()), dcgettext(0x0, &g_407102, 0x5));
                        }
                    }
                }
            }
        }
    }
    else
    {
        cleanup_file_list_stdin();
        return ((long long)exit_status);
    }
}
