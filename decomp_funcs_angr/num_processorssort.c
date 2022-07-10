int num_processors()
{
    BOT tmp_2;  // tmp #2
    BOT tmp_1;  // tmp #1
    BOT tmp_16;  // tmp #16
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long|unsigned int v5;  // rdi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // r12

    if (!(v5 != 2))
    {
        v6 = getenv("OMP_NUM_THREADS");
        if (v6 != 0)
        {
            v7 = (long long)parse_omp_threads.part.0();
            v5 = getenv("OMP_THREAD_LIMIT");
            if (v5 != 0)
            {
                v4 = ((long long)parse_omp_threads.part.0() == 0? 18446744069414584319 : (long long)parse_omp_threads.part.0());
            }
            else
            {
                v4 = 18446744069414584319;
            }
            if (v7 != 0)
            {
                tmp_2 = v4;
                tmp_1 = v7;
                tmp_16 = v4 <= v7;
                return (tmp_16? tmp_2 : tmp_1);
            }
        }
        v5 = getenv("OMP_THREAD_LIMIT");
        if (v5 != 0)
        {
            v4 = (long long)parse_omp_threads.part.0();
        }
    }
    else if (v5 != 1)
    {
        v2 = sysconf(0x53);
        v4 = v2;
        v7 = v2;
        v1 = v2 - 1;
        if (v1 > 1)
        {
            v7 = (((char)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))? v4 : 1);
            v3 = v7;
            return v3;
        }
        v1 = num_processors_via_affinity_mask();
        v3 = v7;
        return v3;
        if (v4 < v4)
        {
            v4 = v1;
            v7 = (((char)[D] amd64g_calculate_condition(0xf<64>, 0x14<64>, rbx<8>, 0x0<64>, cc_ndep<8>))? v4 : 1);
            v3 = v7;
            return v3;
        }
    }
    if (v5 == 1 || v6 == 0 && v5 == 0 && v5 == 2 || v6 == 0 && v5 == 2 && v4 == 0)
    {
        v4 = 18446744069414584319;
    }
    if (v5 == 1 || v6 == 0 && v5 == 2 || v7 == 0 && v5 == 2)
    {
        v1 = num_processors_via_affinity_mask();
        if (v1 != 0)
        {
            tmp_1 = v4;
            tmp_16 = v1 <= v4;
            return (tmp_16? v1 : tmp_1);
        }
        v7 = 1;
        v1 = sysconf(0x54);
        if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v3 = v7;
            return v3;
        }
        else
        {
            tmp_1 = v4;
            tmp_16 = v1 <= v4;
            return (tmp_16? v1 : tmp_1);
        }
    }
}
