typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_2 *field_8;
} struct_4;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_3 {
    char padding_0[1];
    char field_1;
} struct_3;

int eval2()
{
    BOT tmp_6;  // tmp #6
    unsigned long|unsigned long long|unsigned int v1;  // rax
    struct_1 *v10;  // r15
    struct_3 * v6;  // rdx
    unsigned long v7;  // rbx
    struct_4 * v8;  // rbp
    char v9;  // dil

    v8 = (long long)eval3();
    while (true)
    {
        v1 = nextarg();
        if (((long long)v1) == 0)
        {
            v1 = nextarg();
            if (((long long)v1) == 0)
            {
                v1 = nextarg();
                if (((long long)v1) == 0)
                {
                    v1 = nextarg();
                    if (((long long)v1) == 0)
                    {
                        v1 = nextarg();
                        if (((long long)v1) == 0)
                        {
                            v1 = nextarg();
                            if (((long long)v1) == 0)
                            {
                                v1 = nextarg();
                                if (((long long)v1) == 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        v10 = (long long)eval3();
        if (((long long)v9) != 0)
        {
            tostring();
            tostring();
            v6 = ((long long)(v8->field_8->field_0 == 45)) + v8->field_8;
            v1 = ((int)*(((long long)(v8->field_8->field_0 == 45)) + v8->field_8));
            while (true)
            {
                v1 = ((int)v1) - 48;
                if (v1 <= 9)
                {
                    v1 = ((long long)v6->field_1);
                    v6 += 1;
                    tmp_6 = v1;
                    v6 = ((long long)(v10->field_8->field_0 == 45)) + v10->field_8;
                    v1 = ((int)*(((long long)(v10->field_8->field_0 == 45)) + v10->field_8));
                    while (true)
                    {
                        v1 = ((int)v1) - 48;
                        if (v1 <= 9)
                        {
                            v1 = ((long long)v6->field_1);
                            v6 += 1;
                            tmp_6 = v1;
                            strintcmp();
                            break;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (v1 > 9)
                    {
                        *(__errno_location() + None) = 0;
                        strcoll(((int)v8->field_8), ((int)v10->field_8));
                    }
                }
                *(__errno_location() + None) = 0;
                strcoll(((int)v8->field_8), ((int)v10->field_8));
                switch (((int)v7))
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
                default:
                    break;
                }
            }
        }
        freev();
        freev();
        v8->field_0 = 0;
        v8 = (long long)xmalloc();
        mpz_init_set_ui();
    }
    return &stack_base+0;
}
