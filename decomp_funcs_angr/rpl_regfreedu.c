int rpl_regfree()
{
    unsigned long long v4[6];  // rbx
    unsigned long long v5[6];  // rdi

    v4 = v5;
    if (v5[0] != 0)
    {
        free_dfa_content();
        v4[0] = 0;
        v4[1] = 0;
        rpl_free();
        v4[4] = 0;
        v4[5] = 0;
        return (long long)rpl_free();
        if (False)
        {
            pthread_mutex_destroy();
            free_dfa_content();
            v4[0] = 0;
            v4[1] = 0;
            rpl_free();
            v4[4] = 0;
            v4[5] = 0;
            return (long long)rpl_free();
        }
    }
    v4[0] = 0;
    v4[1] = 0;
    rpl_free();
    v4[4] = 0;
    v4[5] = 0;
    return (long long)rpl_free();
}
