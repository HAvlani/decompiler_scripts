typedef struct struct_0 {
    unsigned int field_0;
} struct_0;

int getfileconat()
{
    unsigned int v0;  // [bp-0x1008]
    unsigned int v10;  // ebp
    char *v11;  // rsi
    unsigned int v12;  // edi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    struct_0 *v9;  // rbx

    v9 = __errno_location();
    if (!(v12 != -100))
    {
        v9->field_0 = 95;
        return -1;
    }
    else if (*(v11) != 47)
    {
        v5 = openat_proc_name();
        if (v5 != 0)
        {
            v9->field_0 = 95;
            if (v5 != &stack_base-4088)
            {
                rpl_free();
            }
        }
        if (save_cwd() == 0)
        {
            if (v12 >= 0)
            {
                if (v0 == v12)
                {
                    free_cwd();
                    v9->field_0 = 9;
                    return -1;
                }
            }
            if (v12 < 0 || v0 != v12)
            {
                v4 = fchdir(v12);
                if (v4 == 0)
                {
                    v9->field_0 = 95;
                    if (restore_cwd() == 0)
                    {
                        free_cwd();
                        v9->field_0 = 95;
                        return -1;
                    }
                    openat_restore_fail(); /* do not return */
                }
                v10 = ((int)v9->field_0);
                free_cwd();
                v9->field_0 = v10;
                return -1;
            }
        }
        openat_save_fail(); /* do not return */
    }
    else
    {
        v9->field_0 = 95;
        return -1;
    }
}
