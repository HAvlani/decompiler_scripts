typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_0;

extern unsigned int have_pipe2_really.4216;

int rpl_pipe2()
{
    struct_1 *|unsigned long long|unsigned int v1;  // rax
    unsigned long long v10;  // r12
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct_1 *v5;  // ebp
    unsigned int v6;  // esi
    struct_0 *|unsigned int v7;  // edi
    unsigned long long v8;  // r12
    unsigned int v9;  // r12d

    v5 = v6;
    if (((int)have_pipe2_really.4216) >= 0)
    {
        v10 = pipe2();
        if (v1 < 0)
        {
            v1 = __errno_location();
            if (v1->field_0 != 38)
            {
                have_pipe2_really.4216 = 1;
                v3 = v10;
                return v3;
            }
            have_pipe2_really.4216 = -1;
        }
        else
        {
            have_pipe2_really.4216 = 1;
            v3 = v10;
            return v3;
        }
    }
    if (((int)have_pipe2_really.4216) < 0 || v1 < 0 && v1->field_0 == 38)
    {
        v8 = ((long long)(v5 & -526337));
        if ((v5 & -526337) == 0)
        {
            v1 = pipe(v7);
            if (v1 >= 0)
            {
                if ((((short)v5) & 0x800) != 0)
                {
                    v1 = rpl_fcntl();
                    if (v1 >= 0)
                    {
                        v1 = rpl_fcntl();
                        if (v1 != -1)
                        {
                            v1 = rpl_fcntl();
                            if (v1 >= 0)
                            {
                                v1 = rpl_fcntl();
                                if (v1 == -1)
                                {
                                    v9 = ((int)v5->field_0);
                                    close(v7->field_0);
                                    close(v7->field_4);
                                    v7->field_0 = v7->field_0;
                                    *(__errno_location() + None) = v9;
                                    v8 = -1;
                                    v4 = v8;
                                    return v4;
                                }
                            }
                            v9 = ((int)v5->field_0);
                            close(v7->field_0);
                            close(v7->field_4);
                            v7->field_0 = v7->field_0;
                            *(__errno_location() + None) = v9;
                            v8 = -1;
                            v4 = v8;
                            return v4;
                        }
                        v9 = ((int)v5->field_0);
                        close(v7->field_0);
                        close(v7->field_4);
                        v7->field_0 = v7->field_0;
                        *(__errno_location() + None) = v9;
                        v8 = -1;
                        v4 = v8;
                        return v4;
                    }
                    v9 = ((int)v5->field_0);
                    close(v7->field_0);
                    close(v7->field_4);
                    v7->field_0 = v7->field_0;
                    *(__errno_location() + None) = v9;
                    v8 = -1;
                    v4 = v8;
                    return v4;
                }
                if ((((short)v5) & 0x800) == 0 || v1 != -1 && v1 != -1 && v1 >= 0 && v1 >= 0)
                {
                    if ((((int)v6) & 0x80000) == 0)
                    {
                        v4 = v8;
                        return v4;
                    }
                    v1 = rpl_fcntl();
                    if (v1 < 0)
                    {
                        v9 = ((int)v5->field_0);
                        close(v7->field_0);
                        close(v7->field_4);
                        v7->field_0 = v7->field_0;
                        *(__errno_location() + None) = v9;
                        v8 = -1;
                        v4 = v8;
                        return v4;
                    }
                    else
                    {
                        v1 = rpl_fcntl();
                        if (v1 == -1)
                        {
                            v9 = ((int)v5->field_0);
                            close(v7->field_0);
                            close(v7->field_4);
                            v7->field_0 = v7->field_0;
                            *(__errno_location() + None) = v9;
                            v8 = -1;
                            v4 = v8;
                            return v4;
                        }
                        else
                        {
                            v1 = rpl_fcntl();
                            if (v1 < 0)
                            {
                                v9 = ((int)v5->field_0);
                                close(v7->field_0);
                                close(v7->field_4);
                                v7->field_0 = v7->field_0;
                                *(__errno_location() + None) = v9;
                                v8 = -1;
                                v4 = v8;
                                return v4;
                            }
                            else
                            {
                                v1 = rpl_fcntl();
                                if (v1 == -1)
                                {
                                    v9 = ((int)v5->field_0);
                                    close(v7->field_0);
                                    close(v7->field_4);
                                    v7->field_0 = v7->field_0;
                                    *(__errno_location() + None) = v9;
                                    v8 = -1;
                                    v4 = v8;
                                    return v4;
                                }
                                else
                                {
                                    return ((long long)(v6 & -526337));
                                }
                            }
                        }
                    }
                }
            }
            v8 = -1;
            v4 = v8;
            return v4;
        }
        v8 = -1;
        *(__errno_location() + None) = 22;
        v4 = v8;
        return v4;
    }
}
