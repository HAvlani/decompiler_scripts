typedef struct struct_1 {
    char padding_0[1];
    char field_1;
} struct_1;

extern char __progname_full[3];
extern struct_0 program_invocation_short_name;
extern char program_name[3];
extern struct_0 stderr;

int set_program_name()
{
    unsigned long long v10;  // cc_dep2
    unsigned long v11;  // d
    struct_1 *v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rbx
    char * v5;  // rsi
    char *|unsigned long long v6;  // rdi
    char v7[3];  // r8
    unsigned long long v8;  // cc_dep1
    unsigned long long v9;  // cc_dep1

    if (v6 != 0)
    {
        v4 = v6;
        v2 = strrchr();
        if (v2 != 0)
        {
            v7 = v2 + 1;
            if (v2 + 1 - v6 > 6)
            {
                v5 = v2 - 6;
                v3 = 7;
                v6 = "/.libs/";
                while (v3 != 0)
                {
                    v3 -= 1;
                    v9 = ((long long)*(v5));
                    v10 = ((long long)*(v6));
                    v6 += v11;
                    v5 += v11;
                    break;
                }
                v8 = ((long long)(((char)(v9 > v10)) - 0 - ((char)(v9 < v10))));
                if (!(((char)v8) == 0))
                {
                    program_name = v4;
                    __progname_full = v4;
                    return v2;
                }
                else if (!(v2->field_1 == 108))
                {
                    program_name = v7;
                    __progname_full = v7;
                    return v2;
                }
                else if (!(v7[1] == 116))
                {
                    program_name = v7;
                    __progname_full = v7;
                    return v2;
                }
                else if (v7[2] == 45)
                {
                    v4 = v2 + 4;
                    program_invocation_short_name = v2 + 4;
                    program_name = v4;
                    __progname_full = v4;
                    return v2;
                }
                else
                {
                    program_name = v7;
                    __progname_full = v7;
                    return v2;
                }
            }
            program_name = v4;
            __progname_full = v4;
            return v2;
        }
        program_name = v4;
        __progname_full = v4;
        return v2;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}
