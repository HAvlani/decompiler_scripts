typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

extern unsigned int caught_signals;
extern struct_0 nmerge;
extern struct_0 nprocs;
extern unsigned long long temphead;

int pipe_fork()
{
    unsigned long|unsigned long long v0;  // [bp-0xe8]
    unsigned int v1;  // [bp-0xdc]
    unsigned long long v10;  // rax
    struct_0 *v12;  // rbp
    unsigned int v14[2];  // rdi
    unsigned long long v15;  // r13
    unsigned long|unsigned int v16;  // r15
    unsigned long v2;  // [bp-0xd8]
    unsigned int v3[2];  // [bp-0xd0]
    char v4;  // [bp-0xc8]
    char v5;  // [bp-0xc0]
    unsigned long long v7;  // rax

    v3 = v14;
    v7 = rpl_pipe2();
    if (v7 >= 0)
    {
        if (nmerge + 1 < nprocs)
        {
            reap();
            while (nprocs > 0)
            {
                v7 = reap();
                if (v7 == 0)
                {
                    break;
                }
            }
        }
        v12 = __errno_location();
        v2 = &stack_base-200;
        v0 = 0x3fd0000000000000;
        while (true)
        {
            temphead = 0;
            v4 = ((char)(pthread_sigmask(0x0, &caught_signals, ((int)&v5)) == 0));
            v7 = fork();
            v16 = ((long long)v12->field_0);
            v15 = v7;
            if (((int)v7) != 0)
            {
                temphead = temphead;
            }
            else if (v4 == 0)
            {
                v15 = 0;
                close(0x0);
                close(0x1);
                v10 = v15;
                return v10;
            }
            if (v4 != 0)
            {
                v1 = ((int)v7);
                cs_leave.part.0();
                v7 = ((long long)v1);
            }
            if (v4 != 0 || ((int)v7) != 0)
            {
                v12->field_0 = ((int)v16);
                if (((int)v7) < 0)
                {
                    if (((int)v16) == 11)
                    {
                        xnanosleep();
                        v0 = ((long long)(v0 + v0));
                        while (nprocs > 0)
                        {
                            v7 = reap();
                            if (v7 == 0)
                            {
                                break;
                            }
                        }
                        v16 = ((int)v12->field_0);
                        close(v3[0]);
                        close(v14[1]);
                        v12->field_0 = v16;
                        v10 = v15;
                        return v10;
                    }
                    close(v3[0]);
                    close(v14[1]);
                    v12->field_0 = v16;
                    v10 = v15;
                    return v10;
                }
                if (!(((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))))
                {
                    nprocs = nprocs + 1;
                    v10 = v15;
                    return v10;
                }
                else
                {
                    v15 = 0;
                    close(0x0);
                    close(0x1);
                    v10 = v15;
                    return v10;
                }
            }
        }
    }
    v15 = -1;
    v10 = v15;
    return v10;
}
