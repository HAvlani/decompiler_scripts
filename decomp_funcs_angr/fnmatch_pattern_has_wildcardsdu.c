int fnmatch_pattern_has_wildcards()
{
    BOT tmp_3;  // tmp #3
    BOT tmp_4;  // tmp #4
    unsigned long long v1;  // rax
    char [2] v2;  // rcx
    unsigned int v3;  // esi
    unsigned int v4;  // esi
    char [2] v5;  // rdi
    unsigned int v6;  // r8d
    unsigned int v7;  // r9d

    v1 = ((long long)v5[0]);
    v7 = ((int)(v4 & 32));
    v6 = ((int)(v4 & 0x8000000));
    v3 = ((int)(v4 & 2));
    while (true)
    {
        v2 = v5 + 1;
        if (((long long)v1) == 0)
        {
            break;
        }
        while (true)
        {
            v1 = ((long long)(((int)v1) - 33));
            tmp_3 = v1;
            switch (((long long)tmp_3))
            {
            case 0: case 10: case 31:
                if (v7 != 0)
                {
                    v1 = ((long long)v5[1]);
                    return 1;
                    if (v5[1] != 40)
                    {
                        v5 = v2;
                        break;
                    }
                }
            case 9: case 30: case 58:
                /* goto 4221107; */
            case 59:
                if (v6 == 0)
                {
                    if (v3 == 0 && v5[1] != 0)
                    {
                        v2 = v5 + 2;
                    }
                    v1 = ((long long)v2[0]);
                    v5 = v2;
                    break;
                }
            default:
                v1 = ((long long)v5[1]);
                v5 = v2;
                v2 += 1;
                tmp_4 = v1;
                return 0;
            }
            if (((long long)tmp_3) <= 92)
            {
                if (((long long)*(4339680 + ((long long)al<1>) * 4)) + 4339680 == 4221107)
                {
                    return 1;
                }
                if (((long long)*(4339680 + ((long long)al<1>) * 4)) + 4339680 == 4221102 && v6 != 0)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
