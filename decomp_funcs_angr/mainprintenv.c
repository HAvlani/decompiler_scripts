typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 __environ;
extern unsigned int exit_failure;
extern unsigned int g_406087;
extern unsigned int g_4060d1;
extern unsigned int g_4063d8;
extern unsigned int longopts;
extern struct_0 optind;

int main()
{
    BOT tmp_13;  // tmp #13
    BOT tmp_28;  // tmp #28
    BOT tmp_14;  // tmp #14
    unsigned long long v0;  // [bp-0x48]
    struct_1 * v10;  // rbx
    unsigned int v11;  // ebp
    unsigned long long v12;  // rsi
    unsigned long long|unsigned int v13;  // edi
    unsigned long long v14;  // r8
    unsigned long long v15;  // r12d
    struct_1 * v16;  // r14
    struct_1 * v17;  // r15
    unsigned long long|char v2;  // rax
    unsigned long long v4;  // rax
    char [2] v8;  // rcx
    char *|unsigned long long v9;  // rdx

    v11 = v13;
    v10 = v12;
    set_program_name();
    setlocale();
    bindtextdomain(&g_406087, &g_4063d8);
    textdomain(&g_406087);
    exit_failure = 2;
    atexit();
    while (true)
    {
        v2 = getopt_long(v13, ((int)v12), &g_4060d1, &longopts, 0x0);
        if (v2 == -1)
        {
            v16 = ((long long)optind);
            if (optind >= v13)
            {
                v10 = __environ;
                while (true)
                {
                    v9 = v10->field_0;
                    if (v10->field_0 == 0)
                    {
                        break;
                    }
                    __printf_chk(0x1, "%s%c", v9, 0 - ((int)((tmp_13 & 255) < 1)) & 10);
                    v10 += 8;
                }
                v2 = 1;
                v4 = ((long long)(reg_16<4> ^ 1));
                tmp_28 = v4;
                return ((long long)tmp_28);
            }
            v15 = 0;
            do
            {
                v2 = strchr(*(v10 + v16 * 8), 0x3d);
                if (v2 == 0)
                {
                    v17 = __environ;
                    v14 = 0;
                    while (true)
                    {
                        v8 = v17->field_0;
                        if (v17->field_0 == 0)
                        {
                            break;
                        }
                        v2 = ((long long)v8[0]);
                        v9 = *(v10 + v16 * 8);
                        if (((long long)v8[0]) == 0)
                        {
                        }
                        else
                        {
                            while (true)
                            {
                                v12 = ((long long)*(v9));
                                v13 = v8 + 1;
                                v9 += 1;
                                if (((long long)*(v9)) == 0 || v2 != v12)
                                {
                                    break;
                                }
                                v2 = ((long long)v8[1]);
                                if (v8[1] != 61)
                                {
                                    if (((long long)v2) == 0)
                                    {
                                        break;
                                    }
                                }
                                else if (*(v9) == 0)
                                {
                                    v2 = __printf_chk(0x1, "%s%c", ((int)v8) + 2, 0 - ((int)((tmp_14 & 255) < 1)) & 10);
                                    v14 = 1;
                                    break;
                                }
                                if (v8[1] == 61 && *(v9) != 0 || ((long long)v2) != 0 && v8[1] != 61)
                                {
                                    v8 = v13;
                                }
                            }
                        }
                        v17 += 8;
                    }
                    v15 = ((int)(0 + v14));
                }
                v16 += 1;
            }
            while (v11 > ((int)v16));
            v11 = ((int)(v11 - optind));
            v2 = ((char)(v11 == v15));
            v4 = ((long long)(reg_16<4> ^ 1));
            tmp_28 = v4;
            return ((long long)tmp_28);
        }
        else if (v2 == -130)
        {
            usage(); /* do not return */
        }
        else if (v2 != -131)
        {
            usage(); /* do not return */
        }
        else
        {
            v0 = 0;
            version_etc();
            exit(0x0); /* do not return */
        }
    }
}
